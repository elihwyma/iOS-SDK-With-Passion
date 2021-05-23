/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSTimer, UIPanGestureRecognizer, UITapGestureRecognizer, UIViewController, _TVNonFocusSwipeUpCapture;

@protocol TVMediaController, TVMediaPlaybackManagerDelegate;

@interface TVMediaPlaybackManager : NSObject

{
    int _mediaPlaybackState;
    int _mediaPlaybackTrigger;
    unsigned long long _mediaPlaybackStateModifier;
    unsigned long long _mediaPlaybackTriggerModifier;
    NSTimer *_backgroundedTimer;
    _TVNonFocusSwipeUpCapture *_swipeUpCapture;
    struct {
        _Bool hasShouldEnableUIModeImplicitly;
        _Bool hasEvaluateSwipeUpMessage;
        _Bool hasPresentPlaybackController;
    } _delegateFlags;
    _Bool _isFirstAppearance;
    _Bool _goesToForegroundOnFirstAppear;
    UIViewController<TVMediaController> *_mediaController;
    id <TVMediaPlaybackManagerDelegate> _delegate;
    UITapGestureRecognizer *_menuGestureRecognizer;
    double _showcaseFactor;
}

@property (nonatomic, readonly) UIViewController<TVMediaController> *mediaController;
@property (weak, nonatomic) id <TVMediaPlaybackManagerDelegate> delegate;
@property (nonatomic, readonly) UITapGestureRecognizer *menuGestureRecognizer;
@property (nonatomic, readonly) UIPanGestureRecognizer *swipeUpGestureRecognizer;
@property (nonatomic) double showcaseFactor;
@property (nonatomic, readonly) _Bool shouldHideUI;
@property (nonatomic, readonly) long long currentUIMode;
@property (nonatomic) _Bool goesToForegroundOnFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)onAppear;
- (void)onDisappear;
- (_Bool)_shouldPause;
- (void)_onMenu;
- (void)_onSwipeUp;
- (void)_processTrigger;
- (void)_onShowcaseFactorDidChange;
- (int)_processUndefinedStateTriggers;
- (int)_processBackgroundedStateTriggers;
- (int)_processForegroundedStateTriggers;
- (int)_processWaitingForTimeoutStateTriggers;
- (int)_processWillBeBackgroundedStateTriggers;
- (int)_processWillBeForegroundedStateTriggers;
- (int)_processPausedStateTriggers;
- (void)_processStateExit;
- (void)_processStateEnter;
- (_Bool)_canMenu;
- (_Bool)_canSwipeUp;
- (void)_scheduleBackgroundedTimer;
- (void)_onTimeout;
- (id)initWithMediaController:(id)arg1;
- (void)onEvent;
- (void)onMediaControllerStateDidChange;
- (_Bool)onSupplementaryUIShouldPresent;
- (void)onSupplementaryUIShouldDismiss;

@end
