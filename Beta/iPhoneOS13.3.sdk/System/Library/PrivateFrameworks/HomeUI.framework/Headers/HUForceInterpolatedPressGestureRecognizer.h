/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UILongPressGestureRecognizer.h>

@class NSMutableSet;

@interface HUForceInterpolatedPressGestureRecognizer : UILongPressGestureRecognizer

{
    NSMutableSet *_hu_activeTouches;
    double _currentSampleForceMultiplier;
    double _currentSampleTimestamp;
    double _overallForceMultiplierExcludingCurrentSample;
    double _touchStartTime;
}

@property (nonatomic, readonly) NSMutableSet *hu_activeTouches;
@property (nonatomic) double currentSampleForceMultiplier;
@property (nonatomic) double currentSampleTimestamp;
@property (nonatomic) double overallForceMultiplierExcludingCurrentSample;
@property (nonatomic) double touchStartTime;
@property (nonatomic, readonly) double currentForceMultiplier;
@property (nonatomic, readonly) double overallForceMultiplier;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetForceSamples;
- (void)_logForceMultiplierSample;
- (double)_forceMultiplierIncludingCurrentSample;

@end
