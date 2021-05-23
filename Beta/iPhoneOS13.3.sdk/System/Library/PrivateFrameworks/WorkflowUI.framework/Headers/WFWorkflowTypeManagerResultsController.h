/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowKit/WFDatabaseTableViewResultsController.h>

@class NSString;

@interface WFWorkflowTypeManagerResultsController : WFDatabaseTableViewResultsController

{
    NSString *_workflowType;
}

@property (copy, nonatomic, readonly) NSString *workflowType;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithResults:(id)arg1 forSections:(id)arg2 database:(id)arg3 inTableView:(id)arg4 withWorkflowType:(id)arg5;
- (void)_updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;

@end
