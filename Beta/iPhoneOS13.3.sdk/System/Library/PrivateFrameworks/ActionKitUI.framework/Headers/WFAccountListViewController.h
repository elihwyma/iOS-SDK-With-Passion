/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <WorkflowUI/WFActionSettingsViewController.h>

@class NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface WFAccountListViewController : WFActionSettingsViewController

{
    Class _accountClass;
    UITableView *_tableView;
    NSArray *_accounts;
}

@property (nonatomic, readonly) Class accountClass;
@property (weak, nonatomic, readonly) UITableView *tableView;
@property (copy, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)initWithAction:(id)arg1 definition:(id)arg2;
- (void)loginViewController:(id)arg1 didLoginWithAccount:(id)arg2;
- (void)loginViewControllerDidCancel:(id)arg1;

@end
