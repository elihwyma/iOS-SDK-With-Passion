/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXCMMViewController, UINavigationController;

@protocol PXCMMWorkflowCoordinatorDelegate;

@interface PXCMMWorkflowCoordinator : NSObject

{
    UINavigationController *_navigationController;
    PXCMMViewController *_rootWorkflowViewController;
    PXCMMViewController *_sendBackWorkflowViewController;
    id <PXCMMWorkflowCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic) id <PXCMMWorkflowCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_presentAlertController:(id)arg1;
- (_Bool)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct NSObject *)workflowViewControllerWithContext:(id)arg1;
- (void)cancelWorkflow;
- (id)completeMyMomentViewController:(id)arg1 performActionForSession:(id)arg2;
- (id)completeMyMomentViewController:(id)arg1 performSendBackActionForSession:(id)arg2;
- (void)startPreloadingTasksForCompleteMyMomentViewController:(id)arg1;
- (void)didCancelCompleteMyMomentViewController:(id)arg1;
- (void)completeMyMomentViewController:(id)arg1 showPhotoPickerForSession:(id)arg2;
- (id)workflowViewControllerWithContext:(id)arg1 embedInNavigationControllerOfClass:(Class)arg2;
- (id)_performActionWithType:(id)arg1 forSession:(id)arg2;
- (id)_performPublishActionForSession:(id)arg1;
- (id)_performDeleteActionForSession:(id)arg1;
- (void)_performMessageComposeActionForSession:(id)arg1 shareURL:(id)arg2;
- (void)_performPhotosPickerActionForSession:(id)arg1 gridPresentation:(id)arg2;
- (id)_performReceiveActionForSession:(id)arg1;
- (void)_performCleanupActionForSession:(id)arg1;
- (void)_performNotifyIfNeededActionForSession:(id)arg1;
- (void)_performSendBackActionForSession:(id)arg1;
- (void)_didFinishSession:(id)arg1 withState:(unsigned long long)arg2;
- (void)_didFinishSession:(id)arg1 withState:(unsigned long long)arg2 avoidDismissal:(_Bool)arg3;
- (void)_presentSendBackFlowWithContext:(id)arg1;
- (void)_completePublishForSession:(id)arg1 withURL:(id)arg2 error:(id)arg3;
- (void)_completePhotosPickerActionForSession:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_completeMessageComposeActionForSession:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_completeSendBackActionForSession:(id)arg1 withContext:(id)arg2 error:(id)arg3;
- (void)_completeActionForSession:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_session:(id)arg1 finishedAccepting:(_Bool)arg2 withError:(id)arg3;
- (id)_createWorkflowViewControllerWithContext:(id)arg1;
- (id)_presentingViewControllerForViewController:(id)arg1;
- (id)_alertControllerForSession:(id)arg1 withSuccess:(_Bool)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
