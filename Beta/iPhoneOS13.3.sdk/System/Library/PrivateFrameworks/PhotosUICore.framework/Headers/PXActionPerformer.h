/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXActionPerformerDelegate, PXAnonymousViewController;

@interface PXActionPerformer : NSObject

{
    CDUnknownBlockType _completionHandler;
    _Bool _success;
    _Bool _cancellable;
    NSString *_actionType;
    id _sender;
    unsigned long long _state;
    id <PXActionPerformerDelegate> _delegate;
    struct NSObject *_presentedViewController;
    CDUnknownBlockType _viewControllerPresenter;
    CDUnknownBlockType _viewControllerDismisser;
}

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activitySystemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) _Bool success;
@property (weak, nonatomic) id sender;
@property (nonatomic, readonly, getter=isCancellable) _Bool cancellable;
@property (nonatomic, readonly) unsigned long long state;
@property (weak, nonatomic) id <PXActionPerformerDelegate> delegate;
@property (nonatomic, readonly) NSObject<PXAnonymousViewController> *presentedViewController;
@property (copy, nonatomic) CDUnknownBlockType viewControllerPresenter;
@property (copy, nonatomic) CDUnknownBlockType viewControllerDismisser;

+ (_Bool)canPerformBlacklistingOnAssetCollection:(id)arg1;

- (id)init;
- (id)activity;
- (_Bool)presentViewController:(struct NSObject *)arg1;
- (id)alertAction;
- (id)initWithActionType:(id)arg1;
- (void)performActivity:(id)arg1;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (void)completeUserInteractionTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)localizedTitleForUseCase:(unsigned long long)arg1;
- (void)performActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)performerResetsAfterCompletion;
- (_Bool)requiresUnlockedDevice;
- (void)_performUnlockIfNeeded;
- (void)_completeUnlockTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)dismissViewController:(struct NSObject *)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)completeBackgroundTaskWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_transitionToState:(unsigned long long)arg1 withSuccess:(_Bool)arg2 error:(id)arg3;
- (void)_completeStateWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
