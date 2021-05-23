/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUItemTableViewController.h>

@class HMHome, HUMediaAccessControlEditorModuleController, NSString;

@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController

{
    HMHome *_home;
    HUMediaAccessControlEditorModuleController *_accessControlEditorModuleController;
}

@property (nonatomic, readonly) HUMediaAccessControlEditorModuleController *accessControlEditorModuleController;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)initWithHome:(id)arg1;
- (id)itemModuleControllers;
- (void)accessControlEditorModuleController:(id)arg1 didUpdateAccessControl:(id)arg2;
- (void)_updateFooterView:(id)arg1 forSection:(long long)arg2;

@end
