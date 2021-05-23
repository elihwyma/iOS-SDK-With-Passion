/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, UIView, WFCreateAutomationCoordinator, WFDatabase, WFDatabaseResult, WFEditAutomationCoordinator, WFHomeManager, WFTriggerManager;

@interface WFAutomationListViewController : UITableViewController

{
    WFDatabase *_database;
    WFTriggerManager *_triggerManager;
    UIView *_subheadWrapperView;
    NSArray *_tableSections;
    WFDatabaseResult *_personalAutomationsDatabaseResult;
    NSArray *_sortedPersonalAutomations;
    WFHomeManager *_homeManager;
    WFCreateAutomationCoordinator *_createAutomationCoordinator;
    WFEditAutomationCoordinator *_editAutomationCoordinator;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) UIView *subheadWrapperView;
@property (retain, nonatomic) NSArray *tableSections;
@property (nonatomic, readonly) WFDatabaseResult *personalAutomationsDatabaseResult;
@property (copy, nonatomic) NSArray *sortedPersonalAutomations;
@property (retain, nonatomic) WFHomeManager *homeManager;
@property (retain, nonatomic) WFCreateAutomationCoordinator *createAutomationCoordinator;
@property (retain, nonatomic) WFEditAutomationCoordinator *editAutomationCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewLayoutMarginsDidChange;
- (id)initWithDatabase:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)homeDidUpdateName:(id)arg1;
- (void)home:(id)arg1 didAddTrigger:(id)arg2;
- (void)home:(id)arg1 didRemoveTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateNameForTrigger:(id)arg2;
- (void)home:(id)arg1 didUpdateTrigger:(id)arg2;
- (void)updateUI;
- (void)databaseResult:(id)arg1 didUpdateObjects:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2;
- (void)editAutomationCoordinatorDidFinish:(id)arg1;
- (void)editAutomationCoordinatorDidCancel:(id)arg1;
- (void)createAutomationCoordinatorDidFinish:(id)arg1;
- (void)createAutomationCoordinatorDidCancel:(id)arg1;
- (void)updateSubheadLayoutMargins;
- (void)updateTableViewLayoutMargins;
- (void)flashAutomationForTriggerID:(id)arg1;
- (void)buildTableSections;
- (void)showAddNewAutomationButton:(_Bool)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (_Bool)showEditViewForItem:(id)arg1;
- (_Bool)showPersonalAutomationEditorForConfiguredTrigger:(id)arg1;
- (void)startCreateNewAutomation:(id)arg1;
- (void)startCreateNewPersonalAutomation:(id)arg1;
- (void)startCreateNewHomeAutomation:(id)arg1;
- (void)startCreateNewAutomationFlowAtStep:(unsigned long long)arg1;
- (_Bool)showHomeAutomationEditorForTriggerItem:(id)arg1;

@end
