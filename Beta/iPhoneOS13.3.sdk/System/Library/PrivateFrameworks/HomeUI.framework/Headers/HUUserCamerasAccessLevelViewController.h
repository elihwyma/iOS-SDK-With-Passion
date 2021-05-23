/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HFUserItem, HUUserCamerasAccessLevelItemManager;

@interface HUUserCamerasAccessLevelViewController : HUItemTableViewController

{
    HFUserItem *_userItem;
    HUUserCamerasAccessLevelItemManager *_camerasAccessLevelItemManager;
}

@property (copy, nonatomic, readonly) HFUserItem *userItem;
@property (copy, nonatomic, readonly) HUUserCamerasAccessLevelItemManager *camerasAccessLevelItemManager;

- (void)viewDidLoad;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)initWithUserItem:(id)arg1 home:(id)arg2;

@end
