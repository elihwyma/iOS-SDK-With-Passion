/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, TKVibrationRecorderProgressView, TKVibrationRecorderTouchSurface, UILabel, UIToolbar;

@protocol NSCopying, TKVibrationRecorderStyleProvider, TKVibrationRecorderViewDelegate;

@interface TKVibrationRecorderView : UIView

{
    id <TKVibrationRecorderStyleProvider> _styleProvider;
    UILabel *_instructionsLabel;
    UIToolbar *_bottomLineToolbar;
    UIToolbar *_controlsToolbar;
    TKVibrationRecorderProgressView *_progressView;
    TKVibrationRecorderTouchSurface *_touchSurface;
    NSLayoutConstraint *_bottomLineToolbarBottomConstraint;
    NSLayoutConstraint *_controlsToolbarTopConstraint;
    NSLayoutConstraint *_progressToolbarBottomConstraint;
    NSLayoutConstraint *_touchSurfaceTopConstraint;
    _Bool _isReplayModeEnabled;
    int _leftButtonIdentifier;
    int _rightButtonIdentifier;
    double _vibrationPatternMaximumDuration;
    double _currentVibrationProgressDidStartTimestamp;
    double _currentVibrationComponentDidStartTimestamp;
    _Bool _isWaitingForEndOfCurrentVibrationComponent;
    _Bool _isAnimatingProgress;
    id <NSCopying> _displayLinkManagerObserverToken;
    id <TKVibrationRecorderViewDelegate> _delegate;
}

@property (weak, nonatomic) id <TKVibrationRecorderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)safeAreaInsetsDidChange;
- (void)didMoveToWindow;
- (void)_updateProgress:(id)arg1;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)startAnimatingProgress;
- (void)enterReplayModeWithVibrationPattern:(id)arg1;
- (void)enterRecordingMode;
- (void)exitRecordingModeWithPlayButtonEnabled:(_Bool)arg1;
- (void)exitReplayMode;
- (void)stopAnimatingProgress;
- (void)_enterWaitingModeWithAnimation:(_Bool)arg1 enablePlayButton:(_Bool)arg2;
- (void)_handleScreenPeripheryInsetsDidChangeNotification:(id)arg1;
- (id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1;
- (void)_handleLeftButtonTapped:(id)arg1;
- (void)_handleRightButtonTapped:(id)arg1;
- (void)_setLeftButtonIdentifier:(int)arg1 enabled:(_Bool)arg2 rightButtonIdentifier:(int)arg3 enabled:(_Bool)arg4 animated:(_Bool)arg5;
- (void)_exitWaitingModeWithAnimation:(_Bool)arg1;
- (void)_updateBottomLineToolbarForPeripheryInsetsChange;
- (_Bool)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1;
- (void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1;

@end
