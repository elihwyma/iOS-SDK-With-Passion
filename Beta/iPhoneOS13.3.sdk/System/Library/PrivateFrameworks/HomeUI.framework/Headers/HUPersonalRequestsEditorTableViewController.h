/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HUPersonalRequestsDevicesModuleController, HUPersonalRequestsEditorItemManager, NSString;

@interface HUPersonalRequestsEditorTableViewController : HUItemTableViewController

{
    _Bool _onlyShowDeviceSwitches;
    HUPersonalRequestsEditorItemManager *_prEditorItemManager;
    HUPersonalRequestsDevicesModuleController *_prDevicesModuleController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HUPersonalRequestsEditorItemManager *prEditorItemManager;
@property (nonatomic, readonly) HUPersonalRequestsDevicesModuleController *prDevicesModuleController;
@property (nonatomic) _Bool onlyShowDeviceSwitches;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (id)initWithUserItem:(id)arg1 onlyShowDeviceSwitches:(_Bool)arg2;
- (_Bool)shouldHideHeaderAboveSection:(long long)arg1;
- (_Bool)shouldHideFooterBelowSection:(long long)arg1;
- (_Bool)automaticallyUpdatesViewControllerTitle;
- (id)itemModuleControllers;
- (id)initWithAccessoryGroupItem:(id)arg1;
- (id)initWithUserItem:(id)arg1 sourceMediaProfileContainer:(id)arg2 onlyShowDeviceSwitches:(_Bool)arg3;

@end
