/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UIView.h>

@class CAAnimation, NSMutableArray, NSMutableDictionary, NSString;

@protocol NSCopying, TKVibrationRecorderStyleProvider;

@interface TKVibrationRecorderRippleView : UIView

{
    id <TKVibrationRecorderStyleProvider> _styleProvider;
    struct CGPoint _currentTouchLocation;
    double _currentTouchStartTime;
    unsigned long long _numberOfRipplesForCurrentTouch;
    _Bool _isTrackingTouch;
    NSMutableArray *_recentTouchesContextQueue;
    NSMutableArray *_reusableTouchContexts;
    double _currentSpeedCoefficient;
    _Bool _needsCurrentSpeedRefresh;
    _Bool _isAnimating;
    id <NSCopying> _displayLinkManagerObserverToken;
    NSMutableArray *_ringLayersQueue;
    NSMutableArray *_reusableRingLayers;
    NSMutableDictionary *_ringLayersByIdentifiers;
    unsigned long long _lastRingLayerIdentifier;
    CAAnimation *_ringEnlargementAnimation;
    double _fingerStillSpeed;
    double _fingerMovingSpeed;
    double _firstRippleInitialRadius;
    double _fadeOutRadius;
}

@property (nonatomic, readonly, getter=_isTouchDown) _Bool _touchDown;
@property (nonatomic) double fingerStillSpeed;
@property (nonatomic) double fingerMovingSpeed;
@property (nonatomic) double firstRippleInitialRadius;
@property (nonatomic) double fadeOutRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_stopAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (double)_currentSpeed;
- (void)_startAnimation;
- (id)initWithStyleProvider:(id)arg1;
- (void)_updateRingEnlargementAnimation;
- (void)_enqueueRingLayerWithTimeIntervalSinceCreation:(double)arg1 normalizedLocation:(struct CGPoint)arg2 speed:(double)arg3;
- (id)_reusableTouchContextObject;
- (void)_enqueueReusableTouchContextObject:(id)arg1;
- (void)_refresh:(id)arg1;
- (id)_reusableRingLayer;
- (void)_enqueueReusableRingLayer:(id)arg1;
- (void)_touchBeganAtLocation:(struct CGPoint)arg1;
- (void)_touchMovedToLocation:(struct CGPoint)arg1;
- (void)_touchEndedAtLocation:(struct CGPoint)arg1;

@end
