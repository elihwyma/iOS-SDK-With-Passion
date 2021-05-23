/*
 Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import <UIControl.h>

@class NSString;

@protocol TPDialerKeypadDelegate;

@interface TPPhonePad : UIControl

{
    long long _downKey;
    long long _highlightKey;
    id <TPDialerKeypadDelegate> _delegate;
    _Bool _playsSounds;
    double _topHeight;
    double _midHeight;
    double _bottomHeight;
    double _leftWidth;
    double _midWidth;
    double _rightWidth;
    struct __CFSet *_inflightSounds;
    struct __CFDictionary *_keyToButtonMap;
    unsigned int _incompleteSounds;
    unsigned int _delegateSoundCallbacks:1;
    unsigned int _soundsActivated:1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_delayedDeactivate;
+ (_Bool)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;
+ (_Bool)launchFieldTestIfNeeded:(id)arg1;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)cancelTouchTracking;
- (id)_highlightedImage;
- (void)movedFromWindow:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (void)_playSoundForKey:(unsigned long long)arg1;
- (void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1;
- (void)_stopSoundForKey:(unsigned long long)arg1;
- (void)setNeedsDisplayForKey:(int)arg1;
- (void)_handleKey:(id)arg1 forUIEvent:(id)arg2;
- (void)setPlaysSounds:(_Bool)arg1;
- (void)_activateSounds:(_Bool)arg1;
- (void)_stopAllSoundsForcingCallbacks:(_Bool)arg1;
- (void)_appSuspended;
- (void)_appResumed;
- (struct CGRect)_rectForKey:(unsigned long long)arg1;
- (id)_keypadImage;
- (double)_yFudge;
- (struct CGRect)_updateRect:(struct CGRect)arg1 withScale:(double)arg2;
- (struct CGPoint)_keypadOrigin;
- (id)_imageByCroppingImage:(id)arg1 toRect:(struct CGRect)arg2;
- (id)_pressedImage;
- (void)_handleKeyPressAndHoldForDownKey:(id)arg1;
- (int)_keyForPoint:(struct CGPoint)arg1;
- (void)_handleKeyPressAndHoldForKey:(long long)arg1;
- (void)highlightKeyAtIndex:(long long)arg1;
- (long long)indexForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (void)performTapActionCancelForHighlightedKey;
- (void)setButton:(id)arg1 forKeyAtIndex:(unsigned long long)arg2;
- (id)_buttonForKeyAtIndex:(unsigned long long)arg1;
- (void)_notifySoundCompletionIfNecessary:(unsigned int)arg1;

@end
