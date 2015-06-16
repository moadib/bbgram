import bb.cascades 1.2

Page {
    titleBar: TitleBar {
        title: "Active Sessions"
    }
    
    Container {
        ListView {
            dataModel: _owner.getAuthorizations()
            
            listItemComponents: [
                ListItemComponent {
                    StandardListItem {
                        title: ListItemData.app_name
                        status: ListItemData.platform
                    }
                }
            ]
        } 
    }
}
