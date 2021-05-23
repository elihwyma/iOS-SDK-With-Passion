/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UICubicPolyTangent : NSObject

{
    double _initialLinearGain;
    double _parabolicGain;
    double _cubicGain;
    double _quarticGain;
    double _tangentLineSpeed;
    double _tangentSqrtSpeed;
    double _tangentCbrtSpeed;
    double _tangentHyperCbrtSpeed;
}

@property (nonatomic) double initialLinearGain;
@property (nonatomic) double parabolicGain;
@property (nonatomic) double cubicGain;
@property (nonatomic) double quarticGain;
@property (nonatomic) double tangentLineSpeed;
@property (nonatomic) double tangentSqrtSpeed;
@property (nonatomic) double tangentCbrtSpeed;
@property (nonatomic) double tangentHyperCbrtSpeed;
@property (nonatomic, readonly) _Bool isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)keyboardTrackpadCurve;

- (id)init;
- (double)piecewiseCubicAcceleratedSpeed:(double)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (int)RootPowerOfEarliestTangent:(int)arg1;
- (double)tangentSpeedForPower:(int)arg1;
- (double)clipForIOFixedMath:(double)arg1 polynomialPower:(int)arg2 tangencyStartingAt:(double)arg3;
- (void)clipGainsForIOFixedMathWithTangency;
- (double)quarticDerivative:(double)arg1;
- (double)quarticFunction:(double)arg1;
- (double)quarticTangentFunction:(double)arg1 powerOfEarliestTangent:(int)arg2;
- (double)gainForPower:(int)arg1;

@end
