/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUBridgeAndResidentDeviceListItemManager, NSString;

@interface HUBridgeAndResidentDeviceListViewController : HUItemTableViewController

@property (nonatomic, readonly) HUBridgeAndResidentDeviceListItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithHome:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (Class)_bridgeDetailsViewControllerClass;
- (id)finishPresentation:(id)arg1 animated:(_Bool)arg2;

@end
