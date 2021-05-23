/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSString, UINavigationController, UIViewController, WFDatabase, WFWizardNamePresentationManager, WFWorkflow;

@protocol WFComposeFlowControllerDelegate;

@interface WFComposeFlowController : NSObject

{
    id <WFComposeFlowControllerDelegate> _delegate;
    UIViewController *_presenter;
    UINavigationController *_navigationController;
    WFDatabase *_database;
    WFWorkflow *_workflow;
    WFWizardNamePresentationManager *_presentationManager;
}

@property (retain, nonatomic) WFWizardNamePresentationManager *presentationManager;
@property (weak, nonatomic) id <WFComposeFlowControllerDelegate> delegate;
@property (weak, nonatomic, readonly) UIViewController *presenter;
@property (weak, nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) WFDatabase *database;
@property (weak, nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) _Bool workflowHasContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finishEditing:(_Bool)arg1;
- (void)workflowWizardNameViewController:(id)arg1 didFinishWithName:(id)arg2;
- (id)initWithPresenter:(id)arg1 navigationController:(id)arg2 database:(id)arg3 workflow:(id)arg4;
- (void)startCancelFlowWithButton:(id)arg1;
- (void)startSaveFlow;

@end
