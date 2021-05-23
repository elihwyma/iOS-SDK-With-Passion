/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIGestureRecognizer.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSArray, NSMutableSet, NSString, UIEvent;

@interface CSHorizontalScrollFailureRecognizer : UIGestureRecognizer <Swift>

{
    struct CGPoint _startingLocation;
    unsigned long long _maxAllowableVerticalOffset;
    double _maxAllowedTopAngle;
    double _minAllowedTopAngle;
    double _effectiveTopAngle;
    double _minAllowedBottomAngle;
    double _maxAllowedBottomAngle;
    double _effectiveBottomAngle;
    NSMutableSet *_touches;
    _Bool _tracking;
    _Bool _allowMultiTouch;
    _Bool _viewDebugArea;
    NSArray *_debugViews;
    _Bool _armed;
    _Bool _externallyEnabled;
    UIEvent *_triggeredEvent;
}

@property (nonatomic) _Bool viewDebugArea;
@property (nonatomic) _Bool allowMultiTouch;
@property (nonatomic) unsigned long long maxAllowableVerticalOffset;
@property (nonatomic) double minAllowedTopAngle;
@property (nonatomic) double maxAllowedTopAngle;
@property (nonatomic) double minAllowedBottomAngle;
@property (nonatomic) double maxAllowedBottomAngle;
@property (nonatomic, readonly) UIEvent *triggeredEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)reset;
- (_Bool)isEnabled;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)_updateEnabled;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_loadFromSettings:(id)arg1;
- (double)_effectiveTopAngle;
- (double)_effectiveBottomAngle;
- (void)_setDebugViewsVisible:(_Bool)arg1;
- (_Bool)_effectivelyEnabled;
- (void)_setDebugViewsColor:(id)arg1;
- (id)_touchesFromEvent:(id)arg1;
- (_Bool)_recognizeForMultiTouchIfNecessary:(id)arg1;
- (struct CGPoint)_averagePointFromTouches;
- (double)_computeEffectiveAngleFromMin:(double)arg1 max:(double)arg2;
- (_Bool)_isLocationOutOfBounds:(struct CGPoint)arg1;
- (void)_setArmed:(_Bool)arg1;
- (struct CGPoint)_locationOfTouch:(id)arg1 inView:(id)arg2;
- (double)_maxAllowableVerticalOffsetForPoint:(struct CGPoint)arg1;
- (_Bool)_isOutOfBoundsVertically:(struct CGPoint)arg1;
- (_Bool)_isOutOfBounds:(struct CGPoint)arg1 forAngle:(double)arg2;
- (long long)_activeTouchCountForEvent:(id)arg1;

@end
