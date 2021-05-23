/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@class MDLTexture, NSData, NSMutableData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight

{
    struct RTIESLight *_iesLight;
    NSMutableData *_sphericalHarmonicsCoefficients;
    MDLTexture *_lightCubeMap;
    unsigned long long _sphericalHarmonicsLevel;
}

@property (retain, nonatomic, readonly) MDLTexture *lightCubeMap;
@property (nonatomic, readonly) unsigned long long sphericalHarmonicsLevel;
@property (copy, nonatomic, readonly) NSData *sphericalHarmonicsCoefficients;

- (id)initWithIESProfile:(id)arg1;
- (void)generateCubemapFromLight:(unsigned long long)arg1;
- (void)generateSphericalHarmonicsFromLight:(unsigned long long)arg1;
- (void)computeLumens;
- (float)computeInnerAngle;
- (id)generateTexture:(unsigned long long)arg1;
- (void)setSphericalHarmonicsCoefficients:(id)arg1;
- (id)computeSceneKitRenderingTexture:(unsigned long long)arg1;
- (struct CGColor *)evaluatedColorFromSHVector: /* Error: Ran out of types for this method. */;

@end
