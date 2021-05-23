/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class AVAudioSession, AVPlayerItem, AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, NSObject, NSString, SUICFlamesView, SiriUIConfiguration, UILongPressGestureRecognizer, UIScreen;

@protocol OS_dispatch_queue, SiriUISiriStatusViewAnimationDelegate, SiriUISiriStatusViewDelegate;

@interface SiriUISiriStatusView : UIView

{
    UIView *_touchInputView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_flamesContainerView;
    SUICFlamesView *_flamesView;
    UIView *_glyphView;
    AVPlayerLayer *_glyphLayer;
    AVPlayerLooper *_glyphPlayerLooper;
    AVQueuePlayer *_glyphQueuePlayer;
    AVPlayerItem *_glyphPlayerItem;
    AVAudioSession *_glyphAudioSession;
    NSObject<OS_dispatch_queue> *_glyphConfigurationQueue;
    double _lastStateChangeTime;
    UIScreen *_screen;
    long long _deferredFlamesViewState;
    SiriUIConfiguration *_configuration;
    _Bool _textInputEnabled;
    _Bool _siriGlyphHidden;
    _Bool _flamesViewDeferred;
    _Bool _inUITrackingMode;
    _Bool _paused;
    long long _mode;
    double _disabledMicOpacity;
    id <SiriUISiriStatusViewDelegate> _delegate;
    double _flamesViewWidth;
    id <SiriUISiriStatusViewAnimationDelegate> _animationDelegate;
}

@property (weak, nonatomic) id <SiriUISiriStatusViewAnimationDelegate> animationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long mode;
@property (nonatomic) double flamesViewWidth;
@property (nonatomic) double disabledMicOpacity;
@property (weak, nonatomic) id <SiriUISiriStatusViewDelegate> delegate;
@property (nonatomic, readonly) UIView *flamesContainerView;
@property (nonatomic) _Bool flamesViewDeferred;
@property (nonatomic, getter=isInUITrackingMode) _Bool inUITrackingMode;
@property (nonatomic) _Bool paused;
@property (nonatomic, readonly) double statusViewHeight;

+ (double)glyphHeightForScreen:(id)arg1;
+ (struct CGRect)activeFrameForScreen:(id)arg1 frame:(struct CGRect)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;

- (void)dealloc;
- (struct UIEdgeInsets)safeAreaInsets;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)safeAreaInsetsDidChange;
- (float)audioLevelForFlamesView:(id)arg1;
- (id)_flamesView;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)fadeOutCurrentAura;
- (void)_micButtonTapped:(id)arg1;
- (void)_micButtonHeld:(id)arg1;
- (void)_handleKeyboardDidShowNotification:(id)arg1;
- (double)_statusViewHeight;
- (void)_animateSiriGlyphHidden:(_Bool)arg1;
- (void)_setupOrbIfNeeded:(CDUnknownBlockType)arg1;
- (struct CGRect)_flamesViewFrame;
- (void)_layoutFlamesViewIfNeeded;
- (struct CGRect)_flamesFrame;
- (void)_setFlamesViewState:(long long)arg1;
- (void)_attachFlamesViewIfNeeded;
- (struct CGRect)_siriGlyphTappableRect;
- (void)setupOrbIfNeeded;
- (void)forceMicVisible:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 textInputEnabled:(_Bool)arg3 configuration:(id)arg4;

@end
