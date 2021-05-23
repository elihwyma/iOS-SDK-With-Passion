/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSString, WFDatabase, WFWorkflow;

@protocol WFWorkflowSettingsViewDataSourceDelegate;

@interface WFWorkflowSettingsViewDataSource : NSObject

{
    id <WFWorkflowSettingsViewDataSourceDelegate> _delegate;
    NSString *_tentativeWorkflowName;
    WFWorkflow *_workflow;
    WFDatabase *_database;
    NSArray *_accessResources;
    NSMapTable *_switchToAccessResourceMapTable;
}

@property (weak, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) NSArray *accessResources;
@property (retain, nonatomic) NSMapTable *switchToAccessResourceMapTable;
@property (weak, nonatomic) id <WFWorkflowSettingsViewDataSourceDelegate> delegate;
@property (copy, nonatomic) NSString *tentativeWorkflowName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)sections;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;
- (void)registerCellsForTableView:(id)arg1;
- (_Bool)showCustomizeShortcut;
- (_Bool)showAddToHomeScreen;
- (long long)sectionWithOffsetForButtonsSection:(long long)arg1;
- (id)tableView:(id)arg1 nameCellForRow:(long long)arg2;
- (id)buttonCellTypes;
- (long long)buttonCellTypeForRow:(long long)arg1;
- (id)tableView:(id)arg1 buttonCellForRow:(long long)arg2;
- (long long)showInCellCount;
- (id)tableView:(id)arg1 showInCellForRow:(long long)arg2;
- (id)setUpShowInWidgetCell:(id)arg1;
- (id)setUpShowInShareSheetCell:(id)arg1;
- (id)setUpAcceptedTypesCell:(id)arg1;
- (long long)importQuestionsCellCount;
- (id)tableView:(id)arg1 importQuestionsCellForRow:(long long)arg2;
- (id)setUpImportQuestionsCell:(id)arg1;
- (long long)accessResourcesCellCount;
- (id)tableView:(id)arg1 accessResourcesCellForRow:(long long)arg2;
- (void)toggledAccessResourceSwitch:(id)arg1;
- (id)tableView:(id)arg1 helpCellForRow:(long long)arg2;

@end
