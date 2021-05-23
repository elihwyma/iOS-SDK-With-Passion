/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSString, UIView;

@interface CSScrollModifier : NSObject <Swift>

{
    UIView *_targetView;
    _Bool _hasDraggedSinceReset;
    _Bool _cancelled;
    struct CGPoint _firstLocation;
    struct CGPoint _lastLocation;
    double _minSwipePercentageOfScreen;
    double _inertialMultiplier;
    double _initialScrollViewOffsetX;
    double _accumulatedDrag;
    double _maxAccumulatedDragThreshold;
    _Bool _recognized;
    _Bool _cancelScrollingIfTooMuchDrag;
    double _maxScrollDistance;
    double _accumulatedDragThresholdPercentage;
    double _maxDragFromVerticalPerFrame;
    double _powerOfVerticalDirectionSine2;
    double _inertialMultiplierSigmoidBase;
    double _inertialMultiplierSigmoidRange;
    double _inertialMultiplierSigmoidPivot;
    double _inertialMultiplierSigmoidAlpha;
    double _minPercentageSigmoidBase;
    double _minPercentageSigmoidRange;
    double _minPercentageSigmoidPivot;
    double _minPercentageSigmoidAlpha;
}

@property (nonatomic, readonly) _Bool recognized;
@property (nonatomic) double maxScrollDistance;
@property (nonatomic) _Bool cancelScrollingIfTooMuchDrag;
@property (nonatomic) double accumulatedDragThresholdPercentage;
@property (nonatomic) double maxDragFromVerticalPerFrame;
@property (nonatomic) double powerOfVerticalDirectionSine2;
@property (nonatomic) double inertialMultiplierSigmoidBase;
@property (nonatomic) double inertialMultiplierSigmoidRange;
@property (nonatomic) double inertialMultiplierSigmoidPivot;
@property (nonatomic) double inertialMultiplierSigmoidAlpha;
@property (nonatomic) double minPercentageSigmoidBase;
@property (nonatomic) double minPercentageSigmoidRange;
@property (nonatomic) double minPercentageSigmoidPivot;
@property (nonatomic) double minPercentageSigmoidAlpha;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)reset;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)initWithView:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_loadFromSettings:(id)arg1;
- (double)_horizontalProgressSubtractionFromVertical:(struct CGPoint)arg1;
- (void)_updateScrollParameters;
- (_Bool)scrollFromRightToLeft;
- (struct CGPoint)scrollView:(id)arg1 adjustedOffsetForOffset:(struct CGPoint)arg2 translation:(struct CGPoint)arg3 startPoint:(struct CGPoint)arg4 locationInView:(struct CGPoint)arg5 horizontalVelocity:(inout double *)arg6 verticalVelocity:(inout double *)arg7;

@end
