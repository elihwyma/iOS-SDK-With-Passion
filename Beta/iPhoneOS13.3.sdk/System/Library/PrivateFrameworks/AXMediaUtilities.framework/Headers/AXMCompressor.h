/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMAudioEffect.h>

@interface AXMCompressor : AXMAudioEffect

{
    double _attackMS;
    double _releaseMS;
    double _compressionRatio;
    double _gain;
    double _threshold;
    double _sampleRate;
    double _ratio;
    double _gainReduction;
    double _engagement;
    unsigned long long _emaSamples;
    double _ema;
}

@property (nonatomic) double ratio;
@property (nonatomic) double gainReduction;
@property (nonatomic) double engagement;
@property (nonatomic) unsigned long long emaSamples;
@property (nonatomic) double ema;
@property (nonatomic) double attackMS;
@property (nonatomic) double releaseMS;
@property (nonatomic) double compressionRatio;
@property (nonatomic) double gain;
@property (nonatomic) double threshold;
@property (nonatomic) double sampleRate;

+ (id)compressor;
+ (id)limiter;

- (id)initWithAttack:(double)arg1 release:(double)arg2 compressionRatio:(double)arg3 threshold:(double)arg4 sampleRate:(double)arg5;
- (void)processSamples:(unsigned long long)arg1;

@end
