/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <UIKit/UIView.h>

@class AVPlayerLayer, DTSSceneView, ETAngerMessage, ETGLSketchView, ETHeartbeatMessage, ETKissMessage, ETMessage, ETTapMessage, NSMutableDictionary, NSMutableSet, NSString, NSTimer, SKScene, UIColor, UIImageView, UILongPressGestureRecognizer, UITapGestureRecognizer, UITouch;

@protocol ETCanvasViewDelegate, ETMessageTimeSource;

@interface ETCanvasView : UIView

{
    NSMutableSet *_playingMessages;
    ETGLSketchView *_currentSketchView;
    ETTapMessage *_currentTaps;
    ETHeartbeatMessage *_currentHeartbeat;
    NSTimer *_heartbeatDurationTimer;
    UILongPressGestureRecognizer *_heartbeatRecognizer;
    struct CGPoint _heartbeatStartCenter;
    double _lastActivityTimestamp;
    double _touchesBeganTimestamp;
    NSTimer *_sendMessageTimer;
    NSTimer *_idleTimer;
    _Bool _setAlwaysPaused;
    unsigned short _messageType;
    struct CGPoint _lastPt;
    UITouch *_drawingTouch;
    _Bool _drawingTouchStartedStroke;
    double _drawingTouchMovedDistance;
    struct CGRect _ignoredTouchesRect;
    _Bool _didIgnoreTouchesBegan;
    _Bool _ignoreTouchesUntilAllTouchesEnded;
    NSMutableSet *_touchesDown;
    NSMutableDictionary *_messageIdentifierToDoodleView;
    UITapGestureRecognizer *_tapRecognizer;
    NSTimer *_fastTapAllowableMovementTimer;
    double _lastFastTapTimestamp;
    UITapGestureRecognizer *_kissRecognizer;
    ETKissMessage *_currentKissMessage;
    UILongPressGestureRecognizer *_angerRecognizer;
    ETAngerMessage *_currentAnger;
    NSTimer *_angerDurationLimitTimer;
    double _wispDelay;
    _Bool _sketchDidReachSizeLimit;
    SKScene *_scene;
    DTSSceneView *_sceneView;
    UIImageView *_photoView;
    UIView *_videoView;
    AVPlayerLayer *_videoLayer;
    _Bool _canComposeHeartbeat;
    _Bool _canComposeTap;
    _Bool _canComposeKiss;
    _Bool _canComposeAnger;
    _Bool _isComposing;
    _Bool _usesMediaAppearance;
    _Bool _paused;
    _Bool _useFastVerticalWisp;
    _Bool _angerUsesForceTouch;
    id <ETCanvasViewDelegate> _canvasDelegate;
    id <ETMessageTimeSource> _timeSource;
    UIColor *_drawingColor;
    ETMessage *_parentMessage;
}

@property (weak, nonatomic) id <ETCanvasViewDelegate> canvasDelegate;
@property (weak, nonatomic) id <ETMessageTimeSource> timeSource;
@property (retain, nonatomic) UIColor *drawingColor;
@property (nonatomic) _Bool canComposeHeartbeat;
@property (nonatomic) _Bool canComposeTap;
@property (nonatomic) _Bool canComposeKiss;
@property (nonatomic) _Bool canComposeAnger;
@property (nonatomic, readonly) _Bool isComposing;
@property (nonatomic) _Bool usesMediaAppearance;
@property (retain, nonatomic) ETMessage *parentMessage;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) _Bool useFastVerticalWisp;
@property (nonatomic) _Bool angerUsesForceTouch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)_tapRecognized:(id)arg1;
- (void)_updateVideoViewFrame;
- (void)messageWillReachSizeLimit:(id)arg1;
- (void)messageWillStopPlaying:(id)arg1;
- (void)messageDidStopPlaying:(id)arg1;
- (void)_heartbeatRecognized:(id)arg1;
- (void)_kissRecognized:(id)arg1;
- (void)setForceTouchEnabled:(_Bool)arg1;
- (void)_configureAngerRecognizer;
- (void)_updatePhotoViewFrame;
- (_Bool)_sketchInProgress;
- (void)_createSketchViewWithColor:(id)arg1 time:(double)arg2 message:(id)arg3;
- (void)_setIsComposingMessageOfType:(unsigned short)arg1;
- (void)endMessageComposition;
- (void)_startDoodleMessageCompositionAtTime:(double)arg1;
- (void)_startCheckForIdleTimer;
- (void)_updateRecognizersAtEndOfComposition;
- (void)_stopCheckForIdleTimer;
- (void)_clearSendMessageTimer;
- (void)_startSendMessageTimer;
- (void)_setSketchesPaused:(_Bool)arg1;
- (void)clearCanvasAnimated:(_Bool)arg1;
- (void)_animateOutSketchView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_clearDoodleViewForMessage:(id)arg1;
- (void)_checkForIdle;
- (_Bool)_isTapTooRecentAfterKissGesture;
- (_Bool)_canComposeExclusiveMessage;
- (void)_fastTapAllowableMovementTimerFired;
- (void)_startFastTapAllowableMovementTimer;
- (struct CGPoint)_viewPointNormalizedInSceneSpace:(struct CGPoint)arg1;
- (void)_endMessage:(id)arg1 withSend:(_Bool)arg2;
- (void)_sendAnger;
- (struct CGPoint)_normalizedGesturePoint:(id)arg1;
- (void)_showAngerAtPoint:(struct CGPoint)arg1;
- (void)_hideAnger;
- (void)_angerDurationLimitTimerFired;
- (void)_sendKiss;
- (double)_angleOfRotationBetweenTwoFingers:(id)arg1;
- (_Bool)_tapsInProgress;
- (void)handleTapAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(_Bool)arg5;
- (_Bool)_areRecognizersTrackingMultipleFingers;
- (void)_sendTaps;
- (void)handlePanAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 state:(long long)arg5 isRemote:(_Bool)arg6;
- (void)_doodleEndedWithTouches:(id)arg1 cancelled:(_Bool)arg2;
- (_Bool)isComposingHeartbeat;
- (void)handleDotAtX:(float)arg1 Y:(float)arg2 color:(id)arg3 time:(double)arg4 isRemote:(_Bool)arg5;
- (void)sendCurrentMessage;
- (_Bool)_sendMessageTimerFired;
- (void)_sendHeartbeat;
- (void)_sendSketch;
- (void)_showHeartbeatAtNormalizedPoint:(struct CGPoint)arg1 rotation:(double)arg2;
- (void)_hideHeartbeat;
- (void)_hideHeartbeatTimerFired;
- (void)_angerRecognized:(id)arg1;
- (void)showPhotoForImage:(id)arg1;
- (void)hidePhoto;
- (void)showVideoForPlayer:(id)arg1;
- (void)hideVideo;
- (_Bool)isComposingSketch;
- (void)startDoodleMessageComposition;
- (_Bool)_sketchesPaused;
- (void)setAlwaysPaused:(_Bool)arg1;
- (void)wispVisibleSketchViewsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateIgnoredTouchesRectForStatusBarSize:(struct CGSize)arg1;
- (id)composedSketchMessage;
- (void)updateCurrentMessageWithHeartRate:(unsigned long long)arg1;
- (void)playTestStrokeWithColor:(id)arg1 duration:(double)arg2;
- (void)playMessage:(id)arg1;

@end
