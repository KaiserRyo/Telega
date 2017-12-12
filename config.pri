# Config.pri file version 2.0. Auto-generated by IDE. Any changes made by user will be lost!
BASEDIR = $$quote($$_PRO_FILE_PWD_)

device {
    CONFIG(debug, debug|release) {
        profile {
            CONFIG += \
                config_pri_assets \
                config_pri_source_group1
        } else {
            CONFIG += \
                config_pri_assets \
                config_pri_source_group1
        }

    }

    CONFIG(release, debug|release) {
        !profile {
            CONFIG += \
                config_pri_assets \
                config_pri_source_group1
        }
    }
}

simulator {
    CONFIG(debug, debug|release) {
        !profile {
            CONFIG += \
                config_pri_assets \
                config_pri_source_group1
        }
    }
}

config_pri_assets {
    OTHER_FILES += \
        $$quote($$BASEDIR/assets/images/1.jpg) \
        $$quote($$BASEDIR/assets/images/2.jpg) \
        $$quote($$BASEDIR/assets/images/3.jpg) \
        $$quote($$BASEDIR/assets/images/chats/inbubble.amd) \
        $$quote($$BASEDIR/assets/images/chats/inbubble.png) \
        $$quote($$BASEDIR/assets/images/chats/incoming/bottom.amd) \
        $$quote($$BASEDIR/assets/images/chats/incoming/bottom.png) \
        $$quote($$BASEDIR/assets/images/chats/incoming/full.amd) \
        $$quote($$BASEDIR/assets/images/chats/incoming/full.png) \
        $$quote($$BASEDIR/assets/images/chats/incoming/middle.amd) \
        $$quote($$BASEDIR/assets/images/chats/incoming/middle.png) \
        $$quote($$BASEDIR/assets/images/chats/incoming/top.amd) \
        $$quote($$BASEDIR/assets/images/chats/incoming/top.png) \
        $$quote($$BASEDIR/assets/images/chats/outbubble.amd) \
        $$quote($$BASEDIR/assets/images/chats/outbubble.png) \
        $$quote($$BASEDIR/assets/images/chats/outgoing/bottom.amd) \
        $$quote($$BASEDIR/assets/images/chats/outgoing/bottom.png) \
        $$quote($$BASEDIR/assets/images/chats/outgoing/full.amd) \
        $$quote($$BASEDIR/assets/images/chats/outgoing/full.png) \
        $$quote($$BASEDIR/assets/images/chats/outgoing/middle.amd) \
        $$quote($$BASEDIR/assets/images/chats/outgoing/middle.png) \
        $$quote($$BASEDIR/assets/images/chats/outgoing/top.amd) \
        $$quote($$BASEDIR/assets/images/chats/outgoing/top.png) \
        $$quote($$BASEDIR/assets/images/icons/custom/ic_send.png) \
        $$quote($$BASEDIR/assets/images/icons/custom/ic_telegram.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_add.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_add_bookmarks.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_add_folder.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_add_to_contacts.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_all.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_attach.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_bbm.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_browser.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_buy.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_camera.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_cancel.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_cancel_selection.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_check_spell.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_clear.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_clear_list.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_code_inspector.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_collapse.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_compose.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_contact.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_copy.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_copy_link.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_copy_link_image.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_copy_password.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_cut.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_decrease.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_delete.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_delete_prior.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_deselect.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_deselect_all.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_diagnostics.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_disable.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_doc.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_generic.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_music.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_pdf.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_picture.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_ppt.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_video.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_web.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_xls.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_doctype_zip.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_done.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_download.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_edit.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_edit_bookmarks.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_edit_list.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_edit_profile.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_email_dk.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_enable.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_entry.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_expand.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_favorite.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_feedback.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_forward.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_help.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_history.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_home.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_increase.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_info.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_location.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_lock.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_map.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_microphone.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_microphone_mute.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_move.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_nav_to.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_next.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_notes.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_notification.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_open.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_open_link.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_overflow_action.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_overflow_tab.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_paste.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_pause.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_phone.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_play.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_previous.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_properties.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_reload.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_rename.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_reply.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_reply_all.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_resume.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_save.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_save_as.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_scan_barcode.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_search.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_select.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_select_all.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_select_more.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_select_text.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_set_as_default.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_settings.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_share.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_show_dialpad.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_show_vkb.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_sort.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_speaker_dk.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_speaker_mute.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_stop.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_textmessage_dk.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_to_bottom.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_to_top.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_view_details_dk.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_view_grid.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_view_image.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_view_list.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_view_post.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_zoom_in.png) \
        $$quote($$BASEDIR/assets/images/icons/ic_zoom_out.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_attach.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_attach_check.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_attach_gallery.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_attach_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_back.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_back_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_badge.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_check.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_clock.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_download.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_download_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_error.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_file.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_group.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_logout.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_map_pin.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_menu.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_more.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_more_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_mute.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_mute_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_pause.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_pause_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_play.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_scroll.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_send.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_small_arrow.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_backspace.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_backspace_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_bell.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_bell_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_car.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_car_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_flower.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_flower_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_grid.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_grid_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_recent.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_recent_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_smile.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_smile_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_sticker.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-hdpi/ic_smiles_sticker_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_attach.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_attach_check.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_attach_gallery.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_attach_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_back.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_back_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_badge.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_check.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_clock.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_download.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_download_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_error.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_file.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_group.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_logout.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_map_pin.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_menu.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_more.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_more_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_mute.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_mute_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_pause.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_pause_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_play.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_scroll.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_send.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_small_arrow.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_backspace.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_backspace_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_bell.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_bell_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_car.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_car_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_flower.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_flower_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_grid.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_grid_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_recent.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_recent_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_smile.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_smile_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_sticker.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-mdpi/ic_smiles_sticker_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_attach.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_attach_check.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_attach_gallery.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_attach_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_back.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_back_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_badge.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_check.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_clock.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_download.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_download_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_error.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_file.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_file_play.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_group.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_logout.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_map_pin.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_menu.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_more.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_more_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_mute.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_mute_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_pause.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_pause_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_scroll.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_send.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_small_arrow.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_backspace.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_backspace_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_bell.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_bell_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_car.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_car_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_flower.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_flower_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_grid.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_grid_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_recent.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_recent_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_smile.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_smile_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_sticker.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xhdpi/ic_smiles_sticker_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_attach.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_attach_check.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_attach_gallery.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_attach_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_back.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_back_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_badge.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_check.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_clock.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_download.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_download_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_error.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_file.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_file_pause_blue.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_group.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_logout.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_map_pin.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_menu.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_more.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_more_photo.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_pause.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_play.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_scroll.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_send.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_small_arrow.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_backspace.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_backspace_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_bell.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_bell_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_car.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_car_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_flower.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_flower_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_grid.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_grid_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_recent.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_recent_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_smile.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_smile_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_sticker.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/ic_smiles_sticker_active.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/mute.png) \
        $$quote($$BASEDIR/assets/images/telegram/drawable-xxhdpi/mute_blue.png) \
        $$quote($$BASEDIR/assets/images/user.jpg) \
        $$quote($$BASEDIR/assets/localization/en.xml) \
        $$quote($$BASEDIR/assets/main.qml) \
        $$quote($$BASEDIR/assets/pages/root/chatsList.qml) \
        $$quote($$BASEDIR/assets/pages/root/contactsList.qml) \
        $$quote($$BASEDIR/assets/pages/root/savedMessages.qml) \
        $$quote($$BASEDIR/assets/pages/root/settingsList.qml) \
        $$quote($$BASEDIR/assets/pages/root/startMessaging.qml) \
        $$quote($$BASEDIR/assets/pages/utils/chatView.qml) \
        $$quote($$BASEDIR/assets/pages/utils/enterCode.qml) \
        $$quote($$BASEDIR/assets/pages/utils/signIn.qml) \
        $$quote($$BASEDIR/assets/pages/utils/userpicView.qml) \
        $$quote($$BASEDIR/assets/xml/chats.xml) \
        $$quote($$BASEDIR/assets/xml/contacts.xml) \
        $$quote($$BASEDIR/assets/xml/saved.xml)
}

config_pri_source_group1 {
    SOURCES += \
        $$quote($$BASEDIR/src/applicationui.cpp) \
        $$quote($$BASEDIR/src/main.cpp)

    HEADERS += $$quote($$BASEDIR/src/applicationui.hpp)
}

INCLUDEPATH += $$quote($$BASEDIR/src)

CONFIG += precompile_header

PRECOMPILED_HEADER = $$quote($$BASEDIR/precompiled.h)

lupdate_inclusion {
    SOURCES += \
        $$quote($$BASEDIR/../src/*.c) \
        $$quote($$BASEDIR/../src/*.c++) \
        $$quote($$BASEDIR/../src/*.cc) \
        $$quote($$BASEDIR/../src/*.cpp) \
        $$quote($$BASEDIR/../src/*.cxx) \
        $$quote($$BASEDIR/../assets/*.qml) \
        $$quote($$BASEDIR/../assets/*.js) \
        $$quote($$BASEDIR/../assets/*.qs) \
        $$quote($$BASEDIR/../assets/images/*.qml) \
        $$quote($$BASEDIR/../assets/images/*.js) \
        $$quote($$BASEDIR/../assets/images/*.qs) \
        $$quote($$BASEDIR/../assets/images/chats/*.qml) \
        $$quote($$BASEDIR/../assets/images/chats/*.js) \
        $$quote($$BASEDIR/../assets/images/chats/*.qs) \
        $$quote($$BASEDIR/../assets/images/chats/incoming/*.qml) \
        $$quote($$BASEDIR/../assets/images/chats/incoming/*.js) \
        $$quote($$BASEDIR/../assets/images/chats/incoming/*.qs) \
        $$quote($$BASEDIR/../assets/images/chats/outgoing/*.qml) \
        $$quote($$BASEDIR/../assets/images/chats/outgoing/*.js) \
        $$quote($$BASEDIR/../assets/images/chats/outgoing/*.qs) \
        $$quote($$BASEDIR/../assets/images/icons/*.qml) \
        $$quote($$BASEDIR/../assets/images/icons/*.js) \
        $$quote($$BASEDIR/../assets/images/icons/*.qs) \
        $$quote($$BASEDIR/../assets/images/icons/custom/*.qml) \
        $$quote($$BASEDIR/../assets/images/icons/custom/*.js) \
        $$quote($$BASEDIR/../assets/images/icons/custom/*.qs) \
        $$quote($$BASEDIR/../assets/images/telegram/*.qml) \
        $$quote($$BASEDIR/../assets/images/telegram/*.js) \
        $$quote($$BASEDIR/../assets/images/telegram/*.qs) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-hdpi/*.qml) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-hdpi/*.js) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-hdpi/*.qs) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-mdpi/*.qml) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-mdpi/*.js) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-mdpi/*.qs) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-xhdpi/*.qml) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-xhdpi/*.js) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-xhdpi/*.qs) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-xxhdpi/*.qml) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-xxhdpi/*.js) \
        $$quote($$BASEDIR/../assets/images/telegram/drawable-xxhdpi/*.qs) \
        $$quote($$BASEDIR/../assets/localization/*.qml) \
        $$quote($$BASEDIR/../assets/localization/*.js) \
        $$quote($$BASEDIR/../assets/localization/*.qs) \
        $$quote($$BASEDIR/../assets/pages/*.qml) \
        $$quote($$BASEDIR/../assets/pages/*.js) \
        $$quote($$BASEDIR/../assets/pages/*.qs) \
        $$quote($$BASEDIR/../assets/pages/root/*.qml) \
        $$quote($$BASEDIR/../assets/pages/root/*.js) \
        $$quote($$BASEDIR/../assets/pages/root/*.qs) \
        $$quote($$BASEDIR/../assets/pages/utils/*.qml) \
        $$quote($$BASEDIR/../assets/pages/utils/*.js) \
        $$quote($$BASEDIR/../assets/pages/utils/*.qs) \
        $$quote($$BASEDIR/../assets/xml/*.qml) \
        $$quote($$BASEDIR/../assets/xml/*.js) \
        $$quote($$BASEDIR/../assets/xml/*.qs)

    HEADERS += \
        $$quote($$BASEDIR/../src/*.h) \
        $$quote($$BASEDIR/../src/*.h++) \
        $$quote($$BASEDIR/../src/*.hh) \
        $$quote($$BASEDIR/../src/*.hpp) \
        $$quote($$BASEDIR/../src/*.hxx)
}

TRANSLATIONS = $$quote($${TARGET}.ts)
