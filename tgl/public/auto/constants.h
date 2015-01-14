/*
    This file is part of telegram-client.

    Telegram-client is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    Telegram-client is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this telegram-client.  If not, see <http://www.gnu.org/licenses/>.

    Copyright Vitaly Valtman 2013
*/
#ifndef CONSTANTS_H
#define CONSTANTS_H
#define CODE_int 0xa8509bda
#define CODE_long 0x22076cba
#define CODE_double 0x2210c154
#define CODE_string 0xb5286e24
#define CODE_bytes 0x0ee1379f
#define CODE_bool_false 0xbc799737
#define CODE_bool_true 0x997275b5
#define CODE_int128 0x7d36c439
#define CODE_int256 0xf2c798b3
#define CODE_vector 0x1cb5c415
#define CODE_error 0xc4b9f9bb
#define CODE_null 0x56730bcc
#define CODE_input_peer_empty 0x7f3b18ea
#define CODE_input_peer_self 0x7da07ec9
#define CODE_input_peer_contact 0x1023dbe8
#define CODE_input_peer_foreign 0x9b447325
#define CODE_input_peer_chat 0x179be863
#define CODE_input_user_empty 0xb98886cf
#define CODE_input_user_self 0xf7c1b13f
#define CODE_input_user_contact 0x86e94f65
#define CODE_input_user_foreign 0x655e74ff
#define CODE_input_phone_contact 0xf392b7f4
#define CODE_input_file 0xf52ff27f
#define CODE_input_media_empty 0x9664f57f
#define CODE_input_media_uploaded_photo 0x2dc53a7d
#define CODE_input_media_photo 0x8f2ab2ec
#define CODE_input_media_geo_point 0xf9c44144
#define CODE_input_media_contact 0xa6e45987
#define CODE_input_media_uploaded_video 0x133ad6f6
#define CODE_input_media_uploaded_thumb_video 0x9912dabf
#define CODE_input_media_video 0x7f023ae6
#define CODE_input_chat_photo_empty 0x1ca48f57
#define CODE_input_chat_uploaded_photo 0x94254732
#define CODE_input_chat_photo 0xb2e1bf08
#define CODE_input_geo_point_empty 0xe4c123d6
#define CODE_input_geo_point 0xf3b7acc9
#define CODE_input_photo_empty 0x1cd7bf0d
#define CODE_input_photo 0xfb95c6c4
#define CODE_input_video_empty 0x5508ec75
#define CODE_input_video 0xee579652
#define CODE_input_file_location 0x14637196
#define CODE_input_video_file_location 0x3d0364ec
#define CODE_input_photo_crop_auto 0xade6b004
#define CODE_input_photo_crop 0xd9915325
#define CODE_input_app_event 0x770656a8
#define CODE_peer_user 0x9db1bc6d
#define CODE_peer_chat 0xbad0e5bb
#define CODE_storage_file_unknown 0xaa963b05
#define CODE_storage_file_jpeg 0x007efe0e
#define CODE_storage_file_gif 0xcae1aadf
#define CODE_storage_file_png 0x0a4f63c0
#define CODE_storage_file_pdf 0xae1e508d
#define CODE_storage_file_mp3 0x528a0677
#define CODE_storage_file_mov 0x4b09ebbc
#define CODE_storage_file_partial 0x40bc6f52
#define CODE_storage_file_mp4 0xb3cea0e4
#define CODE_storage_file_webp 0x1081464c
#define CODE_file_location_unavailable 0x7c596b46
#define CODE_file_location 0x53d69076
#define CODE_user_empty 0x200250ba
#define CODE_user_self 0x7007b451
#define CODE_user_contact 0xcab35e18
#define CODE_user_request 0xd9ccc4ef
#define CODE_user_foreign 0x075cf7a8
#define CODE_user_deleted 0xd6016d7a
#define CODE_user_profile_photo_empty 0x4f11bae1
#define CODE_user_profile_photo 0xd559d8c8
#define CODE_user_status_empty 0x09d05049
#define CODE_user_status_online 0xedb93949
#define CODE_user_status_offline 0x008c703f
#define CODE_chat_empty 0x9ba2d800
#define CODE_chat 0x6e9c9bc7
#define CODE_chat_forbidden 0xfb0ccc41
#define CODE_chat_full 0x630e61be
#define CODE_chat_participant 0xc8d7493e
#define CODE_chat_participants_forbidden 0x0fd2bb8a
#define CODE_chat_participants 0x7841b415
#define CODE_chat_photo_empty 0x37c1011c
#define CODE_chat_photo 0x6153276a
#define CODE_message_empty 0x83e5de54
#define CODE_message 0x567699b3
#define CODE_message_forwarded 0xa367e716
#define CODE_message_service 0x1d86f70e
#define CODE_message_media_empty 0x3ded6320
#define CODE_message_media_photo 0xc8c45a2a
#define CODE_message_media_video 0xa2d24290
#define CODE_message_media_geo 0x56e0d474
#define CODE_message_media_contact 0x5e7d2f39
#define CODE_message_media_unsupported 0x29632a36
#define CODE_message_action_empty 0xb6aef7b0
#define CODE_message_action_chat_create 0xa6638b9a
#define CODE_message_action_chat_edit_title 0xb5a1ce5a
#define CODE_message_action_chat_edit_photo 0x7fcb13a8
#define CODE_message_action_chat_delete_photo 0x95e3fbef
#define CODE_message_action_chat_add_user 0x5e3cfc4b
#define CODE_message_action_chat_delete_user 0xb2ae9b0c
#define CODE_dialog 0xab3a99ac
#define CODE_photo_empty 0x2331b22d
#define CODE_photo 0x22b56751
#define CODE_photo_size_empty 0x0e17e23c
#define CODE_photo_size 0x77bfb61b
#define CODE_photo_cached_size 0xe9a734fa
#define CODE_video_empty 0xc10658a8
#define CODE_video 0x388fa391
#define CODE_geo_point_empty 0x1117dd5f
#define CODE_geo_point 0x2049d70c
#define CODE_auth_checked_phone 0xe300cc3b
#define CODE_auth_sent_code 0xefed51d9
#define CODE_auth_authorization 0xf6b673a4
#define CODE_auth_exported_authorization 0xdf969c2d
#define CODE_input_notify_peer 0xb8bc5b0c
#define CODE_input_notify_users 0x193b4417
#define CODE_input_notify_chats 0x4a95e84e
#define CODE_input_notify_all 0xa429b886
#define CODE_input_peer_notify_events_empty 0xf03064d8
#define CODE_input_peer_notify_events_all 0xe86a2c74
#define CODE_input_peer_notify_settings 0x46a2ce98
#define CODE_peer_notify_events_empty 0xadd53cb3
#define CODE_peer_notify_events_all 0x6d1ded88
#define CODE_peer_notify_settings_empty 0x70a68512
#define CODE_peer_notify_settings 0x8d5e11ee
#define CODE_wall_paper 0xccb03657
#define CODE_user_full 0x771095da
#define CODE_contact 0xf911c994
#define CODE_imported_contact 0xd0028438
#define CODE_contact_blocked 0x561bc879
#define CODE_contact_suggested 0x3de191a1
#define CODE_contact_status 0xd3680c61
#define CODE_chat_located 0x3631cf4c
#define CODE_contacts_foreign_link_unknown 0x133421f8
#define CODE_contacts_foreign_link_requested 0xa7801f47
#define CODE_contacts_foreign_link_mutual 0x1bea8ce1
#define CODE_contacts_my_link_empty 0xd22a1c60
#define CODE_contacts_my_link_requested 0x6c69efee
#define CODE_contacts_my_link_contact 0xc240ebd9
#define CODE_contacts_link 0xeccea3f5
#define CODE_contacts_contacts_not_modified 0xb74ba9d2
#define CODE_contacts_contacts 0x6f8b8cb2
#define CODE_contacts_imported_contacts 0xad524315
#define CODE_contacts_blocked 0x1c138d15
#define CODE_contacts_blocked_slice 0x900802a1
#define CODE_contacts_suggested 0x5649dcc5
#define CODE_messages_dialogs 0x15ba6c40
#define CODE_messages_dialogs_slice 0x71e094f3
#define CODE_messages_messages 0x8c718e87
#define CODE_messages_messages_slice 0x0b446ae3
#define CODE_messages_message_empty 0x3f4e0648
#define CODE_messages_message 0xff90c417
#define CODE_messages_stated_messages 0x969478bb
#define CODE_messages_stated_message 0xd07ae726
#define CODE_messages_sent_message 0xd1f4d35c
#define CODE_messages_chat 0x40e9002a
#define CODE_messages_chats 0x8150cbd8
#define CODE_messages_chat_full 0xe5d7d19c
#define CODE_messages_affected_history 0xb7de36f2
#define CODE_input_messages_filter_empty 0x57e2f66c
#define CODE_input_messages_filter_photos 0x9609a51c
#define CODE_input_messages_filter_video 0x9fc00e65
#define CODE_input_messages_filter_photo_video 0x56e9f0e4
#define CODE_input_messages_filter_document 0x9eddf188
#define CODE_input_messages_filter_audio 0xcfc87522
#define CODE_update_new_message 0x013abdb3
#define CODE_update_message_i_d 0x4e90bfd6
#define CODE_update_read_messages 0xc6649e31
#define CODE_update_delete_messages 0xa92bfe26
#define CODE_update_restore_messages 0xd15de04d
#define CODE_update_user_typing 0x5c486927
#define CODE_update_chat_user_typing 0x9a65ea1f
#define CODE_update_chat_participants 0x07761198
#define CODE_update_user_status 0x1bfbd823
#define CODE_update_user_name 0xa7332b73
#define CODE_update_user_photo 0x95313b0c
#define CODE_update_contact_registered 0x2575bbb9
#define CODE_update_contact_link 0x51a48a9a
#define CODE_update_activation 0x6f690963
#define CODE_update_new_authorization 0x8f06529a
#define CODE_updates_state 0xa56c2a3e
#define CODE_updates_difference_empty 0x5d75a138
#define CODE_updates_difference 0x00f49ca0
#define CODE_updates_difference_slice 0xa8fb1981
#define CODE_updates_too_long 0xe317af7e
#define CODE_update_short_message 0xd3f45784
#define CODE_update_short_chat_message 0x2b2fbd4e
#define CODE_update_short 0x78d4dec1
#define CODE_updates_combined 0x725b04c3
#define CODE_updates 0x74ae4240
#define CODE_photos_photos 0x8dca6aa5
#define CODE_photos_photos_slice 0x15051f54
#define CODE_photos_photo 0x20212ca8
#define CODE_upload_file 0x096a18d5
#define CODE_dc_option 0x2ec2a43c
#define CODE_config 0x2e54dd74
#define CODE_nearest_dc 0x8e1a1775
#define CODE_help_app_update 0x8987f311
#define CODE_help_no_app_update 0xc45a6536
#define CODE_help_invite_text 0x18cb9f78
#define CODE_messages_stated_messages_links 0x3e74f5c6
#define CODE_messages_stated_message_link 0xa9af2881
#define CODE_messages_sent_message_link 0xe9db4a3f
#define CODE_input_geo_chat 0x74d456fa
#define CODE_input_notify_geo_chat_peer 0x4d8ddec8
#define CODE_geo_chat 0x75eaea5a
#define CODE_geo_chat_message_empty 0x60311a9b
#define CODE_geo_chat_message 0x4505f8e1
#define CODE_geo_chat_message_service 0xd34fa24e
#define CODE_geochats_stated_message 0x17b1578b
#define CODE_geochats_located 0x48feb267
#define CODE_geochats_messages 0xd1526db1
#define CODE_geochats_messages_slice 0xbc5863e8
#define CODE_message_action_geo_chat_create 0x6f038ebc
#define CODE_message_action_geo_chat_checkin 0x0c7d53de
#define CODE_update_new_geo_chat_message 0x5a68e3f7
#define CODE_wall_paper_solid 0x63117f24
#define CODE_update_new_encrypted_message 0x12bcbd9a
#define CODE_update_encrypted_chat_typing 0x1710f156
#define CODE_update_encryption 0xb4a2e88d
#define CODE_update_encrypted_messages_read 0x38fe25b7
#define CODE_encrypted_chat_empty 0xab7ec0a0
#define CODE_encrypted_chat_waiting 0x3bf703dc
#define CODE_encrypted_chat_requested 0xc878527e
#define CODE_encrypted_chat 0xfa56ce36
#define CODE_encrypted_chat_discarded 0x13d6dd27
#define CODE_input_encrypted_chat 0xf141b5e1
#define CODE_encrypted_file_empty 0xc21f497e
#define CODE_encrypted_file 0x4a70994c
#define CODE_input_encrypted_file_empty 0x1837c364
#define CODE_input_encrypted_file_uploaded 0x64bd0306
#define CODE_input_encrypted_file 0x5a17b5e5
#define CODE_input_encrypted_file_location 0xf5235d55
#define CODE_encrypted_message 0xed18c118
#define CODE_encrypted_message_service 0x23734b06
#define CODE_messages_dh_config_not_modified 0xc0e24635
#define CODE_messages_dh_config 0x2c221edd
#define CODE_messages_sent_encrypted_message 0x560f8935
#define CODE_messages_sent_encrypted_file 0x9493ff32
#define CODE_input_file_big 0xfa4f0bb5
#define CODE_input_encrypted_file_big_uploaded 0x2dc173c8
#define CODE_update_chat_participant_add 0x3a0eeb22
#define CODE_update_chat_participant_delete 0x6e5f8c22
#define CODE_update_dc_options 0x8e5e9873
#define CODE_input_media_uploaded_audio 0x4e498cab
#define CODE_input_media_audio 0x89938781
#define CODE_input_media_uploaded_document 0xffe76b78
#define CODE_input_media_uploaded_thumb_document 0x41481486
#define CODE_input_media_document 0xd184e841
#define CODE_message_media_document 0x2fda2204
#define CODE_message_media_audio 0xc6b68300
#define CODE_input_audio_empty 0xd95adc84
#define CODE_input_audio 0x77d440ff
#define CODE_input_document_empty 0x72f0eaae
#define CODE_input_document 0x18798952
#define CODE_input_audio_file_location 0x74dc404d
#define CODE_input_document_file_location 0x4e45abe9
#define CODE_audio_empty 0x586988d8
#define CODE_audio 0xc7ac6496
#define CODE_document_empty 0x36f8c871
#define CODE_document 0xf9a39f4f
#define CODE_document_l19 0x9efc6326
#define CODE_help_support 0x17c6b5f6
#define CODE_notify_peer 0x9fd40bd8
#define CODE_notify_users 0xb4c83b4c
#define CODE_notify_chats 0xc007cec3
#define CODE_notify_all 0x74d07c60
#define CODE_update_user_blocked 0x80ece81a
#define CODE_update_notify_settings 0xbec268ef
#define CODE_auth_sent_app_code 0xe325edcf
#define CODE_send_message_typing_action 0x16bf744e
#define CODE_send_message_cancel_action 0xfd5ec8f5
#define CODE_send_message_record_video_action 0xa187d66f
#define CODE_send_message_upload_video_action 0x92042ff7
#define CODE_send_message_record_audio_action 0xd52f73f7
#define CODE_send_message_upload_audio_action 0xe6ac8a6f
#define CODE_send_message_upload_photo_action 0x990a3c1a
#define CODE_send_message_upload_document_action 0x8faee98e
#define CODE_send_message_geo_location_action 0x176f8ba1
#define CODE_send_message_choose_contact_action 0x628cbc6f
#define CODE_contact_found 0xea879f95
#define CODE_contacts_found 0x0566000e
#define CODE_update_service_notification 0x382dd3e4
#define CODE_user_status_recently 0xe26f42f1
#define CODE_user_status_last_week 0x07bf09fc
#define CODE_user_status_last_month 0x77ebc742
#define CODE_update_privacy 0xee3b272a
#define CODE_input_privacy_key_status_timestamp 0x4f96cb18
#define CODE_privacy_key_status_timestamp 0xbc2eab30
#define CODE_input_privacy_value_allow_contacts 0x0d09e07b
#define CODE_input_privacy_value_allow_all 0x184b35ce
#define CODE_input_privacy_value_allow_users 0x131cc67f
#define CODE_input_privacy_value_disallow_contacts 0x0ba52007
#define CODE_input_privacy_value_disallow_all 0xd66b66c9
#define CODE_input_privacy_value_disallow_users 0x90110467
#define CODE_privacy_value_allow_contacts 0xfffe1bac
#define CODE_privacy_value_allow_all 0x65427b82
#define CODE_privacy_value_allow_users 0x4d5bbe0c
#define CODE_privacy_value_disallow_contacts 0xf888fa1a
#define CODE_privacy_value_disallow_all 0x8b73e763
#define CODE_privacy_value_disallow_users 0x0c7f49b7
#define CODE_account_privacy_rules 0x554abb6f
#define CODE_account_days_t_t_l 0xb8d0afdf
#define CODE_account_sent_change_phone_code 0xa4f58c4c
#define CODE_update_user_phone 0x12b9417b
#define CODE_account_no_password 0x5770e7a9
#define CODE_account_password 0x739e5f72
#define CODE_document_attribute_image_size 0x6c37c15c
#define CODE_document_attribute_animated 0x11b58939
#define CODE_document_attribute_sticker 0xfb0a5727
#define CODE_document_attribute_video 0x5910cccb
#define CODE_document_attribute_audio 0x051448e5
#define CODE_document_attribute_filename 0x15590068
#define CODE_messages_stickers_not_modified 0xf1749a22
#define CODE_messages_stickers 0x8a8ecd32
#define CODE_sticker_pack 0x12b299d4
#define CODE_messages_all_stickers_not_modified 0xe86602c3
#define CODE_messages_all_stickers 0xdcef3102
#define CODE_invoke_after_msg 0xcb9f372d
#define CODE_invoke_after_msgs 0x3dc4b4f0
#define CODE_auth_check_phone 0x6fe51dfb
#define CODE_auth_send_code 0x768d5f4d
#define CODE_auth_send_call 0x03c51564
#define CODE_auth_sign_up 0x1b067634
#define CODE_auth_sign_in 0xbcd51581
#define CODE_auth_log_out 0x5717da40
#define CODE_auth_reset_authorizations 0x9fab0d1a
#define CODE_auth_send_invites 0x771c1d97
#define CODE_auth_export_authorization 0xe5bfffcd
#define CODE_auth_import_authorization 0xe3ef9613
#define CODE_auth_bind_temp_auth_key 0xcdd42a05
#define CODE_account_register_device 0x446c712c
#define CODE_account_unregister_device 0x65c55b40
#define CODE_account_update_notify_settings 0x84be5b93
#define CODE_account_get_notify_settings 0x12b3ad31
#define CODE_account_reset_notify_settings 0xdb7e1747
#define CODE_account_update_profile 0xf0888d68
#define CODE_account_update_status 0x6628562c
#define CODE_account_get_wall_papers 0xc04cfac2
#define CODE_users_get_users 0x0d91a548
#define CODE_users_get_full_user 0xca30a5b1
#define CODE_contacts_get_statuses 0xc4a353ee
#define CODE_contacts_get_contacts 0x22c6aa08
#define CODE_contacts_import_contacts 0xda30b32d
#define CODE_contacts_get_suggested 0xcd773428
#define CODE_contacts_delete_contact 0x8e953744
#define CODE_contacts_delete_contacts 0x59ab389e
#define CODE_contacts_block 0x332b49fc
#define CODE_contacts_unblock 0xe54100bd
#define CODE_contacts_get_blocked 0xf57c350f
#define CODE_contacts_export_card 0x84e53737
#define CODE_contacts_import_card 0x4fe196fe
#define CODE_messages_get_messages 0x4222fa74
#define CODE_messages_get_dialogs 0xeccf1df6
#define CODE_messages_get_history 0x92a1df2f
#define CODE_messages_search 0x07e9f2ab
#define CODE_messages_read_history 0xeed884c6
#define CODE_messages_delete_history 0xf4f8fb61
#define CODE_messages_delete_messages 0x14f2dd0a
#define CODE_messages_restore_messages 0x395f9d7e
#define CODE_messages_received_messages 0x28abcb68
#define CODE_messages_set_typing 0xa3825e50
#define CODE_messages_send_message 0x4cde0aab
#define CODE_messages_send_media 0xa3c85d76
#define CODE_messages_forward_messages 0x514cd10f
#define CODE_messages_get_chats 0x3c6aa187
#define CODE_messages_get_full_chat 0x3b831c66
#define CODE_messages_edit_chat_title 0xb4bc68b5
#define CODE_messages_edit_chat_photo 0xd881821d
#define CODE_messages_add_chat_user 0x2ee9ee9e
#define CODE_messages_delete_chat_user 0xc3c5cd23
#define CODE_messages_create_chat 0x419d9aee
#define CODE_updates_get_state 0xedd4882a
#define CODE_updates_get_difference 0x0a041495
#define CODE_photos_update_profile_photo 0xeef579a0
#define CODE_photos_upload_profile_photo 0xd50f9c88
#define CODE_photos_delete_photos 0x87cf7f2f
#define CODE_upload_save_file_part 0xb304a621
#define CODE_upload_get_file 0xe3a6cfb5
#define CODE_help_get_config 0xc4f9186b
#define CODE_help_get_nearest_dc 0x1fb33026
#define CODE_help_get_app_update 0xc812ac7e
#define CODE_help_save_app_log 0x6f02f748
#define CODE_help_get_invite_text 0xa4a95186
#define CODE_photos_get_user_photos 0xb7ee553c
#define CODE_messages_forward_message 0x03f3f4f2
#define CODE_messages_send_broadcast 0x41bb0972
#define CODE_geochats_get_located 0x7f192d8f
#define CODE_geochats_get_recents 0xe1427e6f
#define CODE_geochats_checkin 0x55b3e8fb
#define CODE_geochats_get_full_chat 0x6722dd6f
#define CODE_geochats_edit_chat_title 0x4c8e2273
#define CODE_geochats_edit_chat_photo 0x35d81a95
#define CODE_geochats_search 0xcfcdc44d
#define CODE_geochats_get_history 0xb53f7a68
#define CODE_geochats_set_typing 0x08b8a729
#define CODE_geochats_send_message 0x061b0044
#define CODE_geochats_send_media 0xb8f0deff
#define CODE_geochats_create_geo_chat 0x0e092e16
#define CODE_messages_get_dh_config 0x26cf8950
#define CODE_messages_request_encryption 0xf64daf43
#define CODE_messages_accept_encryption 0x3dbc0415
#define CODE_messages_discard_encryption 0xedd923c5
#define CODE_messages_set_encrypted_typing 0x791451ed
#define CODE_messages_read_encrypted_history 0x7f4b690a
#define CODE_messages_send_encrypted 0xa9776773
#define CODE_messages_send_encrypted_file 0x9a901b66
#define CODE_messages_send_encrypted_service 0x32d439a4
#define CODE_messages_received_queue 0x55a5bb66
#define CODE_upload_save_big_file_part 0xde7b673d
#define CODE_init_connection 0x69796de9
#define CODE_help_get_support 0x9cdf08cd
#define CODE_auth_send_sms 0x0da9f3e8
#define CODE_messages_read_message_contents 0x354b5bc2
#define CODE_account_check_username 0x2714d86c
#define CODE_account_update_username 0x3e0bdd7c
#define CODE_contacts_search 0x11f812d8
#define CODE_account_get_privacy 0xdadbc950
#define CODE_account_set_privacy 0xc9f81ce8
#define CODE_account_delete_account 0x418d4e0b
#define CODE_account_get_account_t_t_l 0x08fc711d
#define CODE_account_set_account_t_t_l 0x2442485e
#define CODE_invoke_with_layer 0xda9b0d0d
#define CODE_contacts_resolve_username 0x0bf0131c
#define CODE_account_send_change_phone_code 0xa407a8f4
#define CODE_account_change_phone 0x70c32edb
#define CODE_account_get_password 0x548a30f5
#define CODE_account_set_password 0xdd2a4d8f
#define CODE_auth_check_password 0x0a63011e
#define CODE_messages_get_stickers 0xae22e045
#define CODE_messages_get_all_stickers 0xaa3bc868
#define CODE_decrypted_message_layer 0x1be31789
#define CODE_decrypted_message_l16 0x1f814f1f
#define CODE_decrypted_message_service_l16 0xaa48327d
#define CODE_decrypted_message 0x204d3878
#define CODE_decrypted_message_service 0x73164160
#define CODE_decrypted_message_media_empty 0x089f5c4a
#define CODE_decrypted_message_media_photo 0x32798a8c
#define CODE_decrypted_message_media_geo_point 0x35480a59
#define CODE_decrypted_message_media_contact 0x588a0a97
#define CODE_decrypted_message_action_set_message_t_t_l 0xa1733aec
#define CODE_decrypted_message_media_document 0xb095434b
#define CODE_decrypted_message_media_video 0x524a415d
#define CODE_decrypted_message_media_audio 0x57e0a9cb
#define CODE_decrypted_message_action_read_messages 0x0c4f40be
#define CODE_decrypted_message_action_delete_messages 0x65614304
#define CODE_decrypted_message_action_screenshot_messages 0x8ac1f475
#define CODE_decrypted_message_action_flush_history 0x6719e45c
#define CODE_decrypted_message_action_notify_layer 0xf3048883
#define CODE_decrypted_message_action_resend 0x511110b0
#define CODE_decrypted_message_action_typing 0xccb27641
#define CODE_decrypted_message_action_request_key 0xf3c9611b
#define CODE_decrypted_message_action_accept_key 0x6fe1735b
#define CODE_decrypted_message_action_commit_key 0xec2e0b9b
#define CODE_decrypted_message_action_abort_key 0xdd05ec6b
#define CODE_decrypted_message_action_noop 0xa82fdd63
#define CODE_binlog_file_location 0xae7ae5ce
#define CODE_binlog_chat_participant 0xe97ad32a
#define CODE_binlog_start 0x3b06de69
#define CODE_binlog_dc_option 0x2194e0de
#define CODE_binlog_auth_key 0xedf92e72
#define CODE_binlog_default_dc 0x9e83dbdc
#define CODE_binlog_our_id 0x68a870e8
#define CODE_binlog_dc_signed 0xbd684c2d
#define CODE_binlog_dc_salt 0x0dc9db4e
#define CODE_binlog_set_dh_params 0xb6cb184c
#define CODE_binlog_set_pts 0x2ca8c939
#define CODE_binlog_set_qts 0xd95738ac
#define CODE_binlog_set_date 0x1d0f4b52
#define CODE_binlog_set_seq 0x6eeb2989
#define CODE_binlog_user_add 0xe9bc8aaf
#define CODE_binlog_user_delete 0xac55d447
#define CODE_binlog_user_set_access_hash 0xbcb06c48
#define CODE_binlog_user_set_phone 0x2234bf7c
#define CODE_binlog_user_set_friend 0xb03f21f3
#define CODE_binlog_user_set_full_photo 0x52de060e
#define CODE_binlog_user_set_blocked 0x5df80f13
#define CODE_binlog_user_set_real_name 0x6cf87cb0
#define CODE_binlog_user_set_name 0x51b333ce
#define CODE_binlog_user_set_photo 0xab5ebe28
#define CODE_binlog_user_set_username 0x63b77689
#define CODE_binlog_encr_chat_delete 0xee1b38e8
#define CODE_binlog_encr_chat_requested 0xea055622
#define CODE_binlog_encr_chat_accepted 0xce758337
#define CODE_binlog_encr_chat_init 0xe08a8252
#define CODE_binlog_encr_chat_create 0xe19f09af
#define CODE_binlog_encr_chat_set_access_hash 0xabdc4560
#define CODE_binlog_encr_chat_set_date 0x3062cc4e
#define CODE_binlog_encr_chat_set_ttl 0xc5d087e9
#define CODE_binlog_encr_chat_set_layer 0x633bf386
#define CODE_binlog_encr_chat_set_state 0x808087f7
#define CODE_binlog_encr_chat_set_key 0xc23fc5e4
#define CODE_binlog_encr_chat_set_sha 0x65df932f
#define CODE_binlog_encr_chat_exchange_request 0x6d5b0bcf
#define CODE_binlog_encr_chat_exchange_accept 0x1cb792c0
#define CODE_binlog_encr_chat_exchange_commit 0x25f33ed3
#define CODE_binlog_encr_chat_exchange_confirm 0x3dd3a05f
#define CODE_binlog_encr_chat_exchange_abort 0x6376966b
#define CODE_binlog_encr_chat_update_seq 0x6dbc0700
#define CODE_binlog_encr_chat_set_seq 0x68cd2542
#define CODE_binlog_chat_create 0x405b6197
#define CODE_binlog_chat_change_flags 0x909f4a52
#define CODE_binlog_chat_set_title 0x8b56f537
#define CODE_binlog_chat_set_photo 0x4f7a9eea
#define CODE_binlog_chat_set_date 0xd9e3e8b3
#define CODE_binlog_chat_set_version 0xef0c2e78
#define CODE_binlog_chat_set_admin 0xa0ffff9b
#define CODE_binlog_chat_set_participants 0x3edbb8fd
#define CODE_binlog_chat_set_full_photo 0xc8c8bc1a
#define CODE_binlog_chat_add_participant 0xaf182ee9
#define CODE_binlog_chat_del_participant 0xa3425cf9
#define CODE_binlog_create_message_text 0xe67e2a28
#define CODE_binlog_send_message_text 0x1ab1eb14
#define CODE_binlog_send_message_action_encr 0x342c8519
#define CODE_binlog_create_message_text_fwd 0x5bbcedfc
#define CODE_binlog_create_message_media 0x02c79324
#define CODE_binlog_create_message_media_encr 0xee426aff
#define CODE_binlog_create_message_media_encr_pending 0x25d9b575
#define CODE_binlog_create_message_media_encr_sent 0xafdbc52d
#define CODE_binlog_create_message_media_fwd 0x0bee4021
#define CODE_binlog_create_message_service 0xf50005b5
#define CODE_binlog_create_message_service_encr 0xf06c56fd
#define CODE_binlog_create_message_service_fwd 0x7e970fc9
#define CODE_binlog_message_set_unread 0x315d47a1
#define CODE_binlog_message_set_unread_long 0x25321f01
#define CODE_binlog_set_message_sent 0xee2b1802
#define CODE_binlog_set_msg_id 0x3c873416
#define CODE_binlog_delete_msg 0x97a2a28c
#define CODE_binlog_message_set_outbound 0x5ff33762
#define CODE_binlog_msg_seq_update 0x235bf451
#define CODE_binlog_msg_update 0x6dd4d85f
#define CODE_binlog_reset_authorization 0x83327955
#define CODE_decrypted_message_media_video_l12 0x4cee6ef3
#define CODE_decrypted_message_media_audio_l12 0x6080758f
#define CODE_res_p_q 0x05162463
#define CODE_server__d_h_params_fail 0x79cb045d
#define CODE_server__d_h_params_ok 0xd0e8075c
#define CODE_p_q_inner_data 0x83c95aec
#define CODE_p_q_inner_data_temp 0x3c6a84d4
#define CODE_client__d_h_inner_data 0x6643b654
#define CODE_dh_gen_ok 0x3bcbf734
#define CODE_dh_gen_retry 0x46dc1fb9
#define CODE_dh_gen_fail 0xa69dae02
#define CODE_server__d_h_inner_data 0xb5890dba
#define CODE_req_pq 0x60469778
#define CODE_req__d_h_params 0xd712e4be
#define CODE_set_client__d_h_params 0xf5045f1f
#endif
