/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTUIEnvironment, AVTUIRaiseGestureManager, AVTUserInfoView, AVTView, NSString, NSTimer;

@protocol AVTFaceTrackingManagerDelegate;

@interface AVTFaceTrackingManager : NSObject

{
    _Bool _faceTrackingManagementPaused;
    _Bool _shouldRecheckLowLightAndSensorOcclusionState;
    id <AVTFaceTrackingManagerDelegate> _delegate;
    AVTUserInfoView *_userInfoView;
    AVTUIEnvironment *_environment;
    AVTUIRaiseGestureManager *_raiseGestureManager;
    AVTView *_avatarView;
    NSTimer *_lowLightAndSensorOcclusionLockoutTimer;
    NSTimer *_trackingLostMessageTimer;
    NSTimer *_pauseTrackingTimer;
    unsigned long long _interruptionType;
    NSString *_localizedDeviceName;
}

@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTUIRaiseGestureManager *raiseGestureManager;
@property (nonatomic, readonly) AVTView *avatarView;
@property (retain, nonatomic) NSTimer *lowLightAndSensorOcclusionLockoutTimer;
@property (nonatomic) _Bool shouldRecheckLowLightAndSensorOcclusionState;
@property (retain, nonatomic) NSTimer *trackingLostMessageTimer;
@property (retain, nonatomic) NSTimer *pauseTrackingTimer;
@property (nonatomic) unsigned long long interruptionType;
@property (copy, nonatomic, readonly) NSString *localizedDeviceName;
@property (nonatomic) _Bool faceTrackingManagementPaused;
@property (weak, nonatomic) id <AVTFaceTrackingManagerDelegate> delegate;
@property (nonatomic, readonly) AVTUserInfoView *userInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)desiredUserInfoLabelAlphaForFaceTrackingState:(_Bool)arg1;

- (void)dealloc;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;
- (void)raiseGestureManagerDidRecognizeRaiseGesture:(id)arg1;
- (void)resumeFaceTrackingIfNeededAnimated:(_Bool)arg1;
- (id)initWithAvatarView:(id)arg1 raiseGestureManager:(id)arg2 environment:(id)arg3;
- (id)initWithAvatarView:(id)arg1 raiseGestureManager:(id)arg2 userInfoView:(id)arg3 environment:(id)arg4;
- (void)invalidateFaceTrackingTimers;
- (void)cancelLowLightAndSensorOcclusionTimer;
- (void)startTrackingLostTimers;
- (void)updateUserInfoLabelAlphaForFaceTrackingState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)resetForResumingTrackingAnimated:(_Bool)arg1;
- (id)userInfoStringForCurrentTrackingState;
- (void)updateUserInfoLabelAlphaForFaceTrackingState:(_Bool)arg1;
- (void)updateForTrackingLost;
- (void)updateForPausingTracking;
- (void)updateUserInfoBackdropForCurrentLabel;
- (void)updateForPausingTrackingWithLabel:(_Bool)arg1;
- (void)updateInterruptionTypeIfNeeded:(unsigned long long)arg1;
- (void)resetForTrackingFoundAFaceAnimated:(_Bool)arg1;
- (void)avatarViewDidUpdateWithLowLightOrCameraOcclusionStatus;
- (void)avatarView:(id)arg1 didUpdateWithFaceTrackingStatus:(_Bool)arg2;
- (void)avatarView:(id)arg1 didUpdateWithLowLightStatus:(_Bool)arg2;
- (void)avatarView:(id)arg1 didUpdateWithSensorOcclusionStatus:(_Bool)arg2;
- (void)avatarView:(id)arg1 faceTrackingSessionFailedWithError:(id)arg2;
- (void)avatarViewFaceTrackingSessionInterruptionDidBegin:(id)arg1;
- (void)avatarViewFaceTrackingSessionInterruptionDidEnd:(id)arg1;

@end
