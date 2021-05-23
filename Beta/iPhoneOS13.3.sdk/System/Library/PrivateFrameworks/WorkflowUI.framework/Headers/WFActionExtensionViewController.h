/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSDictionary, NSString, WFRunWorkflowToolbar, WFRunWorkflowViewController;

@protocol WFActionExtensionViewControllerDelegate;

@interface WFActionExtensionViewController : UIViewController <Swift>

{
    NSDictionary *_eventDictionary;
    id <WFActionExtensionViewControllerDelegate> _delegate;
    WFRunWorkflowViewController *_workflowViewController;
    WFRunWorkflowToolbar *_toolbar;
}

@property (retain, nonatomic) WFRunWorkflowViewController *workflowViewController;
@property (retain, nonatomic) WFRunWorkflowToolbar *toolbar;
@property (copy, nonatomic) NSDictionary *eventDictionary;
@property (weak, nonatomic) id <WFActionExtensionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cleanup;
- (void)loadView;
- (void)cancelPressed;
- (id)initWithWorkflow:(id)arg1;
- (void)runWithInput:(id)arg1;
- (_Bool)workflowViewController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)workflowViewController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)runWorkflowToolbarForWorkflowViewController:(id)arg1;
- (id)initWithSingleUseWorkflowToken:(id)arg1 error:(id *)arg2;
- (void)workflowCancelled;
- (void)workflowFinishedWithOutput:(id)arg1 error:(id)arg2;
- (void)handoffWithWorkflowControllerState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
