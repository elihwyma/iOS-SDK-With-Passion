/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardScrollModifierSettings : PTSettings

{
    _Bool _cancelScrollingIfTooMuchDrag;
    long long _strategy;
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

@property (nonatomic) long long strategy;
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

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
