/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMADSREnvelope : NSObject

{
    double _attackMS;
    double _attackLevel;
    double _decayMS;
    double _sustainMS;
    double _sustainLevel;
    double _releaseMS;
}

@property (nonatomic) double attackMS;
@property (nonatomic) double attackLevel;
@property (nonatomic) double decayMS;
@property (nonatomic) double sustainMS;
@property (nonatomic) double sustainLevel;
@property (nonatomic) double releaseMS;
@property (nonatomic, readonly) double lengthMS;

+ (id)defaultEnvelope;

- (id)init;
- (id)copy;
- (double)levelForTime:(double)arg1;
- (id)initWithAttackDuration:(double)arg1 attackLevel:(double)arg2 decayDuration:(double)arg3 sustainDuration:(double)arg4 sustainLevel:(double)arg5 releaseDuration:(double)arg6;

@end
