/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <QuartzCore/CALayer.h>

@class NSTimer;

@interface SBFBokehWallpaperCircle : CALayer

{
    NSTimer *_lifetimeTimer;
    long long _fillColor;
    _Bool _shouldBlink;
    _Bool _isFading;
    long long _direction;
    double _velocity;
    struct CGRect _originalFrame;
    _Bool _fadingOut;
    _Bool _shouldPause;
    _Bool _isPulsating;
    struct CGRect _superviewBounds;
}

@property (nonatomic, getter=isFadingOut) _Bool fadingOut;
@property (nonatomic) struct CGRect superviewBounds;
@property (nonatomic) _Bool shouldPause;
@property (nonatomic) _Bool isPulsating;

- (void)prepareForReuse;
- (void)setAnimationsEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 fillColor:(long long)arg2;
- (void)_timerFired;
- (double)desiredOpacity;
- (struct CGPoint)desiredPositionDeltaForX:(double)arg1 y:(double)arg2 lockScreen:(_Bool)arg3;
- (void)setCircleColor:(long long)arg1;
- (void)startPulsatingCircle;
- (void)_animateInNewCircle;
- (double)randomOpacity;
- (void)_resumeAnimations;
- (void)_pauseAnimations;

@end
