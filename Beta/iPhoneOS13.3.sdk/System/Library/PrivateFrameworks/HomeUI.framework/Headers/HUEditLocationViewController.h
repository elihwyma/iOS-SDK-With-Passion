/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFHomeBuilder, HUEditLocationItemManager, HUEditableTextCell, HUEditableTextViewCell, HUHomeUsersCollectionViewController, HUUserNotificationTopicListModuleController, HUWallpaperPickerInlineViewController, NSString, UIBarButtonItem;

@protocol HUEditLocationViewControllerAddLocationDelegate, HUPresentationDelegate;

@interface HUEditLocationViewController : HUItemTableViewController <Swift>

{
    id <HUPresentationDelegate> _presentationDelegate;
    HUHomeUsersCollectionViewController *_usersViewController;
    HFHomeBuilder *_homeBuilder;
    id <HUEditLocationViewControllerAddLocationDelegate> _addLocationDelegate;
    unsigned long long _context;
    HUUserNotificationTopicListModuleController *_notificationTopicModuleController;
    HUEditLocationItemManager *_homeItemManager;
    HUEditableTextCell *_nameCell;
    NSString *_editedName;
    HUEditableTextViewCell *_detailNotesCell;
    NSString *_editedNotes;
    HUWallpaperPickerInlineViewController *_wallpaperPickerViewController;
    UIBarButtonItem *_savedButtonBarItem;
}

@property (weak, nonatomic) id <HUEditLocationViewControllerAddLocationDelegate> addLocationDelegate;
@property (retain, nonatomic) HUUserNotificationTopicListModuleController *notificationTopicModuleController;
@property (weak, nonatomic) HUEditLocationItemManager *homeItemManager;
@property (weak, nonatomic) HUEditableTextCell *nameCell;
@property (retain, nonatomic) NSString *editedName;
@property (weak, nonatomic) HUEditableTextViewCell *detailNotesCell;
@property (retain, nonatomic) NSString *editedNotes;
@property (nonatomic, readonly) HUHomeUsersCollectionViewController *usersViewController;
@property (nonatomic, readonly) HUWallpaperPickerInlineViewController *wallpaperPickerViewController;
@property (retain, nonatomic) UIBarButtonItem *savedButtonBarItem;
@property (nonatomic, readonly) HFHomeBuilder *homeBuilder;
@property (nonatomic, readonly) unsigned long long context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUPresentationDelegate> presentationDelegate;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)doneButtonPressed:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (_Bool)shouldManageTextFieldForItem:(id)arg1;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (_Bool)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (void)wallpaperPickerRequestOpenWallpaperEditor:(id)arg1;
- (void)wallpaperPicker:(id)arg1 didSelectWallpaper:(id)arg2 withImage:(id)arg3;
- (void)wallpaperPicker:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperPickerDidCancel:(id)arg1;
- (void)addPeopleViewControllerDidCancel:(id)arg1;
- (id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3 context:(unsigned long long)arg4;
- (void)addButtonPressed:(id)arg1;
- (void)updateWallpaper:(id)arg1 image:(id)arg2;
- (void)wallpaperThumbnailCell:(id)arg1 didReceiveDroppedImage:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3;
- (void)scrollToNotificationTopicsAnimated:(_Bool)arg1;
- (id)presentNetworkSettings:(_Bool)arg1;

@end
