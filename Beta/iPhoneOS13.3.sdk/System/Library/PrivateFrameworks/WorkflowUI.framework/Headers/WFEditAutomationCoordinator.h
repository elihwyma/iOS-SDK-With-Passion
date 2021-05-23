/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UINavigationController, WFAutomationSummaryViewController, WFConfiguredTriggerRecord, WFDatabase, WFTrigger, WFTriggerManager, WFWorkflow, WFWorkflowReference;

@protocol WFEditAutomationCoordinatorDelegate;

@interface WFEditAutomationCoordinator : NSObject

{
    UINavigationController *_navigationController;
    id <WFEditAutomationCoordinatorDelegate> _delegate;
    WFDatabase *_database;
    WFTriggerManager *_triggerManager;
    WFConfiguredTriggerRecord *_triggerRecord;
    NSString *_triggerIdentifier;
    WFTrigger *_trigger;
    WFWorkflowReference *_workflowReference;
    WFWorkflow *_workflow;
    WFAutomationSummaryViewController *_automationSummaryViewController;
}

@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) WFConfiguredTriggerRecord *triggerRecord;
@property (copy, nonatomic, readonly) NSString *triggerIdentifier;
@property (retain, nonatomic) WFTrigger *trigger;
@property (nonatomic, readonly) WFWorkflowReference *workflowReference;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) UINavigationController *navigationController;
@property (retain, nonatomic) WFAutomationSummaryViewController *automationSummaryViewController;
@property (weak, nonatomic) id <WFEditAutomationCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)start;
- (void)finish;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)automationSummaryViewController:(id)arg1 editTrigger:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 editWorkflow:(id)arg2;
- (void)automationSummaryViewController:(id)arg1 didFinishWithTrigger:(id)arg2;
- (id)initWithDatabase:(id)arg1 triggerRecord:(id)arg2 triggerIdentifier:(id)arg3 workflowReference:(id)arg4;
- (void)updateUIForShowingViewController:(id)arg1;

@end
