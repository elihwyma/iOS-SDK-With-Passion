/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <SceneKit/SCNView.h>

@class AVTARMaskRenderer, AVTAvatar, AVTAvatarEnvironment, AVTFaceTracker, AVTHUDView, NSLock, NSTimer, SCNNode, SCNTechnique;

@protocol AVTViewFaceTrackingDelegate, SCNCaptureDeviceOutputConsumer;

@interface AVTView : SCNView

{
    unsigned long long _currentExpressionIndex[100];
    AVTAvatar *_avatar;
    SCNNode *_avatarNode;
    _Bool _lockLookAt;
    AVTAvatarEnvironment *_environment;
    AVTFaceTracker *_faceTracker;
    _Bool _enableFaceTracking;
    _Bool _faceIsTracked;
    _Bool _captureImageIsTooDark;
    _Bool _isSensorCovered;
    _Bool _directRetargetingMode;
    id <AVTViewFaceTrackingDelegate> _faceTrackingDelegate;
    _Bool _arMode;
    id <SCNCaptureDeviceOutputConsumer> _arCaptureDeviceOutputConsumer;
    SCNTechnique *_arMaskTechnique;
    AVTARMaskRenderer *_arMaskRenderer;
    struct __CVMetalTextureCache *_arMaskTextureCache;
    unsigned long long _lastTrackingUpdateTimestamp;
    unsigned long long _noTrackingFrameCount;
    double _currentlyRenderedTrackingDate;
    struct {
        struct os_unfair_lock_s lock;
        struct *head;
        int current;
        int capacity;
        _Bool reached_max_capacity;
    } _perfTimes;
    double _perfPacketUpdateTimestamp;
    _Bool _packetNeedRecording;
    _Bool _showPerfHUD;
    _Bool _enableReticle;
    int _droppedFrameCount;
    NSTimer *_perfTimeRefreshTimer;
    AVTHUDView *_debugView;
    NSLock *_lock;
    AVTAvatar *_lastRenderedAvatar;
    _Bool _faceTrackingPaused;
}

@property (retain, nonatomic) AVTAvatar *avatar;
@property (nonatomic) _Bool enableFaceTracking;
@property (nonatomic, getter=faceTrackingIsPaused) _Bool faceTrackingPaused;
@property (nonatomic, readonly) _Bool faceIsTracked;
@property (nonatomic, readonly) _Bool captureImageIsTooDark;
@property (nonatomic, readonly, getter=isSensorCovered) _Bool sensorCovered;
@property (nonatomic) _Bool arMode;
@property (nonatomic) _Bool enableReticle;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)environment;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)interfaceOrientation;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setup;
- (struct UIImage *)snapshotWithSize:(struct CGSize)arg1;
- (void)updateInterfaceOrientation;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;
- (void)updateAtTime:(double)arg1;
- (void)_UIOrientationDidChangeNotification:(id)arg1;
- (void)_renderer:(id)arg1 willRenderScene:(id)arg2 atTime:(double)arg3;
- (id)_renderer:(id)arg1 subdivDataForHash:(id)arg2;
- (void)_renderer:(id)arg1 didBuildSubdivDataForHash:(id)arg2 dataProvider:(CDUnknownBlockType)arg3;
- (void)_renderer:(id)arg1 updateAtTime:(double)arg2;
- (void)_renderer:(id)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)_drawAtTime:(double)arg1;
- (struct UIImage *)snapshotWithSize:(struct CGSize)arg1 scaleFactor:(float)arg2;
- (void)setShowPerfHUD:(_Bool)arg1;
- (void)setFaceTrackingDelegate:(id)arg1;
- (id)faceTracker;
- (void)setFaceIsTracked:(_Bool)arg1;
- (void)faceTracker:(id)arg1 sessionWasInterrupted:(id)arg2;
- (void)faceTracker:(id)arg1 sessionInterruptionEnded:(id)arg2;
- (_Bool)directRetargetingMode;
- (void)setSensorCovered:(_Bool)arg1;
- (void)faceTrackerDidUpdate:(id)arg1 trackingInfo:(id)arg2;
- (void)faceTracker:(id)arg1 session:(id)arg2 didFailWithError:(id)arg3;
- (id)arSession;
- (void)setDirectRetargetingMode:(_Bool)arg1;
- (void)_resetFaceToRandomPosition;
- (void)setupOrientation;
- (void)_avtCommonInit;
- (void)_updateFocal;
- (void)_updateAvatarForARMode:(_Bool)arg1;
- (void)_enablePhysics:(_Bool)arg1;
- (void)_animateToNoTrackingState:(_Bool)arg1;
- (void)didLostTrackingForAWhile;
- (void)willUpdateAvatarWithNewFaceTrackingData:(double)arg1;
- (_Bool)allowTrackSmoothing;
- (void)lockAvatar;
- (void)unlockAvatar;
- (void)avatarDidChange;
- (void)_fireTrackingLoss;
- (void)setCaptureImageIsTooDark:(_Bool)arg1;
- (id)faceTrackingDelegate;
- (void)_delayedTrackingLoss;
- (void)_cancelDelayedtrackingLoss;
- (void)updateForChangedFaceTrackingPaused;
- (void)_refreshPerfTimesInfo;
- (double)currentAudioTime;
- (_Bool)isDoubleBuffered;
- (_Bool)showPerfHUD;
- (void)_willRecord;
- (void)setFaceTracker:(id)arg1;
- (_Bool)faceIsFullyActive;
- (void)warmupMemoji;
- (id)transitionTexture;
- (double)currentlyRenderedTrackingDate;

@end
