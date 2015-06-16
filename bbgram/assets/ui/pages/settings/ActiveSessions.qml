import bb.cascades 1.2
import bb.system 1.0
import bbgram.types.lib 0.1

Page {
    titleBar: TitleBar {
        title: "Active Sessions"
    }
    actions: [
        ActionItem {
            title: "Terminate All"
            imageSource: "asset:///images/menu_bin.png"
            ActionBar.placement: ActionBarPlacement.OnBar
            onTriggered: resetAuthorizationsDialog.show()
            attachedObjects: [
                SystemDialog {
                    id: resetAuthorizationsDialog
                    title: Application.applicationName
                    body: "Are you sure you want to terminate all other sessions?"
                    onFinished: {
                        if (value == SystemUiResult.ConfirmButtonSelection)
                            _owner.resetAuthorizations();
                    }
                }
            ]
        }
    ]
    
    Container {
        ListView {
            id: listView
            dataModel: _owner.authorizations
            
            onTriggered: {
                var data = listView.dataModel.data(indexPath);
                if (data.is_current != 1) {
                    resetAuthorizationDialog.data = data
                    resetAuthorizationDialog.show();
                }
            }
            attachedObjects: [
                SystemDialog {
                    property variant data: null
                    
                    id: resetAuthorizationDialog
                    title: Application.applicationName
                    body: "Terminate this session?"
                    onFinished: {
                        if (value == SystemUiResult.ConfirmButtonSelection)
                            _owner.resetAuthorization(data.hash);
                    }
                }
            ]
            
            listItemComponents: [
                ListItemComponent {
                    type: "header"
                    Header {
                        title: ListItemData == 1 ? "Current Session" : "Active Sessions"
                    }
                },
                ListItemComponent {
                    type: "item"
                    CustomListItem { 
                        preferredHeight: 100
                        highlightAppearance: HighlightAppearance.Full
                        Container {
                            horizontalAlignment: HorizontalAlignment.Fill
                            leftPadding: 20
                            rightPadding: 20
                            topPadding: 5
                            bottomPadding: 5                
                            Container {
                                horizontalAlignment: HorizontalAlignment.Fill
                                layout: DockLayout {
                                    //orientation: LayoutOrientation.LeftToRight
                                }
                                Label {
                                    verticalAlignment: VerticalAlignment.Center
                                    text: ListItemData.app_name + " " + ListItemData.app_version
                                    textStyle.base: titleTextStyle.style
                                }
                                Label {
                                    horizontalAlignment: HorizontalAlignment.Right
                                    verticalAlignment: VerticalAlignment.Center
                                    text: ListItemData.is_current ? "online" : dateTimeFormatter.format(ListItemData.date_active)
                                    textStyle.base: dateTextStyle.style
                                }
                                bottomMargin: 0
                            }
                            Label {
                                text: (ListItemData.device_model.length > 0 ? ListItemData.device_model + ", " : "") + ListItemData.platform
                                textStyle.base: platformTextStyle.style
                                topMargin: 4
                                bottomMargin: 0
                            }
                            Label {
                                text: ListItemData.ip + " - " + ListItemData.country
                                textStyle.base: ipTextStyle.style
                                topMargin: 4
                            }            
                        }
                        attachedObjects: [
                            DateTimeFormatter {
                                id: dateTimeFormatter
                            },
                            TextStyleDefinition {
                                id: titleTextStyle
                                fontWeight: FontWeight.W500
                            },
                            TextStyleDefinition {
                                id: platformTextStyle
                                fontSize: FontSize.Small
                            },
                            TextStyleDefinition {
                                id: ipTextStyle
                                fontSize: FontSize.Small
                                color: Color.Gray
                            },
                            TextStyleDefinition {
                                id: dateTextStyle
                                fontSize: FontSize.Small
                                color: Color.Gray
                            }
                        ]
                    }
                }
            ]
        } 
    }
}
