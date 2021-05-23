/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PMLDiffPrivacyNoiseStrategy : NSObject

{
    unsigned long long _seed;
    _Bool _inplaceNorm;
    int _maxIterations;
    float _minimumMagnitude;
    CDStruct_cd4a7bf5 _noiseScaleFactors;
    long long _noiseMechanism;
}

@property CDStruct_cd4a7bf5 noiseScaleFactors;
@property float minimumMagnitude;
@property long long noiseMechanism;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)gaussianNoiseWithScaleFactor:(float)arg1 minimumMagnitude:(float)arg2 seed:(int)arg3;

- (id)toPlistWithChunks:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (void)addNoiseToSparseVector:(id)arg1;
- (void)addNoiseToSparseMatrix:(id)arg1;
- (_Bool)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(_Bool)arg2 scaleFactor:(float *)arg3;
- (id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(CDStruct_cd4a7bf5)arg2 minimumMagnitude:(float)arg3 seed:(int)arg4 noiseMechanism:(long long)arg5 inplaceNorm:(_Bool)arg6;
- (id)initWithMaxIterationCount:(int)arg1 noiseScaleFactors:(CDStruct_cd4a7bf5)arg2 minimumMagnitude:(float)arg3 noiseMechanism:(long long)arg4 inplaceNorm:(_Bool)arg5;
- (struct _PMLPreNoiseScaleFactorAndNoiseSampler)samplerWithScaleFactorFor:(id)arg1 usingNorm:(_Bool)arg2;
- (id)createDefaultSampler;
- (id)createSamplerByName:(id)arg1;

@end
