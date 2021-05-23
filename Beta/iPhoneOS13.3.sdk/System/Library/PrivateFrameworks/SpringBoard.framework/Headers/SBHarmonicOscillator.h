/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@interface SBHarmonicOscillator : NSObject

{
    double A;
    double Z;
    double k;
    double dk;
    double mink;
    double m;
    double dm;
    double minm;
    double psi_n;
    double psi_d;
    double zeta;
}

@property (nonatomic) double startingAmplitude;
@property (nonatomic) double endingAmplitude;
@property (nonatomic) double springStrength;
@property (nonatomic) double springDecay;
@property (nonatomic) double minimumSpringStrength;
@property (nonatomic) double mass;
@property (nonatomic) double massDecay;
@property (nonatomic) double minimumMass;

- (id)init;
- (void)updateParameters;
- (void)setSpringConstant:(double)arg1;
- (double)amplitudeForElapsedTime:(double)arg1;

@end
