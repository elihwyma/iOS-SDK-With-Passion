/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLLight.h>

@class MDLTexture, MISSING_TYPE, NSData, NSMutableData;

@protocol MDLTransformComponent;

@interface MDLLightProbe : MDLLight

{
    MDLTexture *_reflectiveTexture;
    MDLTexture *_irradianceTexture;
    NSMutableData *_sphericalHarmonicsCoefficients;
    id <MDLTransformComponent> _transform;
    unsigned long long _sphericalHarmonicsLevel;
}

@property (retain, nonatomic, readonly) MDLTexture *reflectiveTexture;
@property (retain, nonatomic, readonly) MDLTexture *irradianceTexture;
@property (nonatomic, readonly) unsigned long long sphericalHarmonicsLevel;
@property (copy, nonatomic, readonly) NSData *sphericalHarmonicsCoefficients;

+ (MISSING_TYPE *)calculateIrradianceGradientUsingSamples:(MISSING_TYPE **)arg1 ofSize:(unsigned long long)arg2 fromSH:(id)arg3 withLevel:(unsigned long long)arg4;
+ (struct CGColor *)sampleSHAt:(id)arg1 usingCoefficients:(unsigned long long)arg2 withLevel: /* Error: Ran out of types for this method. */;
+ (id)lightProbeWithTextureSize:(long long)arg1 forLocation:(id)arg2 lightsToConsider:(id)arg3 objectsToConsider:(id)arg4 reflectiveCubemap:(id)arg5 irradianceCubemap:(id)arg6;

- (id)transform;
- (void)setTransform:(id)arg1;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (id)initWithReflectiveTexture:(id)arg1 irradianceTexture:(id)arg2;
- (void)generateIrradianceTextureFromReflective;
- (void)generateSphericalHarmonicsFromIrradiance:(unsigned long long)arg1;

@end
