/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <NSObject.h>

@class BKSProcessAssertion, NSArray, NSString, NSUUID, NSXPCConnection, PGPictureInPictureApplication, PGPictureInPictureViewController, PGPlaybackProgress;

@protocol OS_dispatch_queue, PGPictureInPictureRemoteObjectDelegate;

__attribute__((visibility("hidden")))
@interface PGPictureInPictureRemoteObject : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    long long _controlsStyle;
    long long _currentState;
    BKSProcessAssertion *_processAssertion;
    BKSProcessAssertion *_interruptionBeganFinishTaskAssertion;
    NSUUID *_finishTaskInvalidationUUID;
    PGPictureInPictureViewController *_pictureInPictureViewController;
    _Bool _isPictureInPicturePossible;
    long long _pictureInPictureInterruptionCounter;
    _Bool _pictureInPictureShouldStartWhenEnteringBackground;
    _Bool _shouldShowAlternateActionButtonImage;
    _Bool _shouldShowLoadingIndicator;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
    unsigned long long _transitioningState;
    id <PGPictureInPictureRemoteObjectDelegate> _delegate;
    struct {
        unsigned int pictureInPictureRemoteObject_shouldAcceptSetupRequest:1;
        unsigned int pictureInPictureRemoteObject_shouldCancelActivePictureInPictureOnStart:1;
        unsigned int pictureInPictureRemoteObject_shouldUpdateCancellationPolicyOnStart:1;
        unsigned int pictureInPictureRemoteObject_didCreatePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didShowPictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_didHidePictureInPictureViewController:1;
        unsigned int pictureInPictureRemoteObject_willDestroyPictureInPictureViewController:1;
    } _delegateRespondsTo;
    PGPictureInPictureApplication *_pictureInPictureApplication;
    NSString *_sourceSceneSessionPersistentIdentifier;
    struct CGSize _preferredContentSize;
    struct CGRect _initialLayerFrame;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) PGPictureInPictureApplication *pictureInPictureApplication;
@property (weak, nonatomic) id <PGPictureInPictureRemoteObjectDelegate> delegate;
@property (nonatomic, readonly) _Bool shouldStartPictureInPictureEnteringBackground;
@property (nonatomic, readonly) _Bool canStopPictureInPicture;
@property (nonatomic, readonly) _Bool canCancelPictureInPicture;
@property (nonatomic, readonly) _Bool isStartingStoppingOrCancellingPictureInPicture;
@property (nonatomic, readonly) unsigned long long transitioningState;
@property (nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
@property (nonatomic, readonly) struct CGRect initialLayerFrame;
@property (nonatomic, readonly) struct CGSize preferredContentSize;
@property (nonatomic, readonly) NSString *sourceSceneSessionPersistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)cancel;
- (void)resume;
- (void)suspend;
- (id)initWithConnection:(id)arg1;
- (_Bool)matchesSceneSessionIdentifier:(id)arg1;
- (void)startPictureInPictureEnteringBackgroundAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopPictureInPictureAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionEnded;
- (oneway void)initializePictureInPictureWithControlsStyle:(long long)arg1 preferredContentSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)setupStartAnimated:(_Bool)arg1 hostedWindowHostingHandle:(id)arg2 sceneSessionPersistentIdentifier:(id)arg3 preferredContentSize:(struct CGSize)arg4 initialInterfaceOrientation:(long long)arg5 initialLayerFrame:(struct CGRect)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (oneway void)startPictureInPictureAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updateInitialLayerFrameForInteractiveTransitionAnimationUponBackgrounding:(struct CGRect)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updateSourceSceneSessionPersistentIdentifierForInteractiveTransitionAnimationUponBackgrounding:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)updatePreferredContentSize:(struct CGSize)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)checkActivePictureInPictureCancellationPolicyWithCompletion:(CDUnknownBlockType)arg1;
- (oneway void)rotateContentContainer:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setupStopAnimated:(_Bool)arg1 activateApplicationIfNeeded:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)stopPictureInPictureAnimated:(_Bool)arg1 withFinalInterfaceOrientation:(long long)arg2 finalLayerFrame:(struct CGRect)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (oneway void)cleanupWithCompletionHandler:(CDUnknownBlockType)arg1;
- (oneway void)setPictureInPictureShouldStartWhenEnteringBackground:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setControlsStyle:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (oneway void)setShouldShowAlternateActionButtonImage:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setShouldShowLoadingIndicator:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setPlaybackProgress:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (oneway void)setLoadedTimeRanges:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_processAssertionForProcessIdentifier:(int)arg1;
- (void)_invalidateInterruptionBeganFinishTaskAssertion;
- (id)_finishTaskAssertionForProcessIdentifier:(int)arg1;
- (void)_tearDownAndNotifyClientAboutCancellation:(_Bool)arg1;
- (void)pictureInPictureViewController:(id)arg1 updateHostedWindowSize:(struct CGSize)arg2 animationType:(long long)arg3 initialSpringVelocity:(double)arg4;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeBegan:(id)arg1;
- (void)pictureInPictureViewControllerHostedWindowSizeChangeEnded:(id)arg1;
- (void)pictureInPictureViewControllerStopButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerActionButtonTapped:(id)arg1;
- (void)pictureInPictureViewControllerCancelButtonTapped:(id)arg1;

@end
