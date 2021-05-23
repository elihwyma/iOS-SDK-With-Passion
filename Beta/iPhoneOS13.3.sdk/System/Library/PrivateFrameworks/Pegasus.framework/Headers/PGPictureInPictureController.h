/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <NSObject.h>

@class NSMutableSet, NSSet, NSString, NSXPCListener, PGPictureInPictureApplication, PGPictureInPictureRemoteObject;

@protocol OS_dispatch_queue, PGPictureInPictureControllerDelegate;

@interface PGPictureInPictureController : NSObject

{
    NSMutableSet *_pictureInPictureRemoteObjects;
    NSMutableSet *_pictureInPictureRemoteObjectsSupportingActiveSessionCancellationOnStart;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    PGPictureInPictureRemoteObject *_activePictureInPictureRemoteObject;
    PGPictureInPictureRemoteObject *_suspendedPictureInPictureRemoteObject;
    id <PGPictureInPictureControllerDelegate> _delegate;
    struct {
        unsigned int pictureInPictureController_didCreatePictureInPictureViewController:1;
        unsigned int pictureInPictureController_willDestroyPictureInPictureViewController:1;
        unsigned int pictureInPictureController_willHidePictureInPictureViewController:1;
        unsigned int pictureInPictureController_didHidePictureInPictureViewController:1;
        unsigned int pictureInPictureController_shouldCancelPictureInPictureForApplication_whenStartingPictureInPictureForApplication:1;
        unsigned int pictureInPictureController_shouldDenyNewConnection:1;
    } _delegateRespondsTo;
    _Bool _pictureInPictureActive;
    NSSet *_pictureInPictureApplications;
    PGPictureInPictureApplication *_activePictureInPictureApplication;
}

@property (nonatomic, readonly, getter=isPictureInPictureActive) _Bool pictureInPictureActive;
@property (nonatomic, readonly) NSSet *pictureInPictureApplications;
@property (nonatomic, readonly) PGPictureInPictureApplication *activePictureInPictureApplication;
@property (nonatomic, readonly) _Bool isStartingStoppingOrCancellingPictureInPicture;
@property (nonatomic, readonly) _Bool isStoppingPictureInPictureForAlert;
@property (weak, nonatomic) id <PGPictureInPictureControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isPictureInPictureSupported;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)_pictureInPictureRemoteObjectIsFaceTime:(id)arg1;
- (struct CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (struct CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (_Bool)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelPictureInPictureForApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2;
- (id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id *)arg3;
- (id)_remoteObjectThatCanStopPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id *)arg3;
- (id)_remoteObjectThatCanCancelPictureInPictureApplication:(id)arg1 sceneSessionPersistentIdentifier:(id)arg2 error:(id *)arg3;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionEnded;
- (id)_remoteObjectsForPictureInPictureApplication:(id)arg1;
- (id)_remoteObjectForPictureInPictureApplication:(id)arg1 passingTest:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)pictureInPictureRemoteObjectShouldAcceptSetupRequest:(id)arg1;
- (_Bool)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:(id)arg1;
- (_Bool)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:(id)arg1;
- (void)pictureInPictureRemoteObject:(id)arg1 didCreatePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willShowPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didShowPictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 didHidePictureInPictureViewController:(id)arg2;
- (void)pictureInPictureRemoteObject:(id)arg1 willDestroyPictureInPictureViewController:(id)arg2;
- (struct CGRect)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
- (struct CGSize)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:(id)arg1;
- (_Bool)shouldStartPictureInPictureForApplicationEnteringBackground:(id)arg1;
- (void)startPictureInPictureForApplicationEnteringBackground:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stopPictureInPictureForApplication:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelPictureInPictureForApplication:(id)arg1;

@end
