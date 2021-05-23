/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <UIKit/UITableViewController.h>

@class NSString, PTModule, PTSettings;

@interface PTUIModuleController : UITableViewController

{
    PTModule *_module;
}

@property (nonatomic, readonly) PTSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSettings:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)module:(id)arg1 didInsertRows:(id)arg2 deleteRows:(id)arg3;
- (void)moduleDidReload:(id)arg1;
- (void)module:(id)arg1 didInsertSections:(id)arg2 deleteSections:(id)arg3;
- (id)initWithSettings:(id)arg1 presentingRow:(id)arg2;
- (void)_reloadModule;
- (void)showActionsForRowTableViewCell:(id)arg1;

@end
