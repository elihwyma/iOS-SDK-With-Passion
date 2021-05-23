/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXCMMWorkflowCoordinator, PXGadgetNavigationHelper;

@interface PXCMMWorkflowCoordinatorPresenter : NSObject

{
    PXGadgetNavigationHelper *_navigationHelper;
    PXCMMWorkflowCoordinator *_workflowCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)shareOriginForSession:(id)arg1 workflowCoordinator:(id)arg2;
- (void)workflowCoordinator:(id)arg1 workflowViewController:(id)arg2 didFinishSession:(id)arg3 withActivityState:(unsigned long long)arg4;
- (struct NSObject *)workflowViewControllerWithContext:(id)arg1;
- (void)cancelWorkflow;
- (id)initWithNavigationHelper:(id)arg1;

@end
