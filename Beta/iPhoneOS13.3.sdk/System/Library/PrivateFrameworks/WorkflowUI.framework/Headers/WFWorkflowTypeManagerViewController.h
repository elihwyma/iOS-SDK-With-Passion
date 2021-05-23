/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, UIView, WFWorkflowTypeManagerResultsController;

@interface WFWorkflowTypeManagerViewController : UITableViewController <Swift>

{
    WFWorkflowTypeManagerResultsController *_resultsController;
    CDUnknownBlockType _doneHandler;
    NSString *_workflowType;
    UIView *_headerView;
}

@property (copy, nonatomic) CDUnknownBlockType doneHandler;
@property (copy, nonatomic) NSString *workflowType;
@property (nonatomic, readonly) WFWorkflowTypeManagerResultsController *resultsController;
@property (nonatomic, readonly) UIView *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)registerRequestHandler;

- (void)done;
- (void)loadView;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)initWithWorkflowType:(id)arg1;

@end
