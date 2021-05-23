/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLTexture.h>

@class MISSING_TYPE;

@interface MDLSkyCubeTexture : MDLTexture

{
    float _turbidity;
    float _sunElevation;
    float _sunAzimuth;
    float _upperAtmosphereScattering;
    float _groundAlbedo;
    float _gamma;
    float _exposure;
    float _brightness;
    float _contrast;
    float _saturation;
    MISSING_TYPE *_highDynamicRangeCompression;
    float _highDynamicRangeCompressionLimit;
    struct CGColor *_groundColor;
    struct SkyDescriptor *_sky;
    float _horizonElevation;
}

@property (nonatomic) float turbidity;
@property (nonatomic) float sunElevation;
@property (nonatomic) float sunAzimuth;
@property (nonatomic) float upperAtmosphereScattering;
@property (nonatomic) float groundAlbedo;
@property (nonatomic) float horizonElevation;
@property (nonatomic) struct CGColor *groundColor;
@property (nonatomic) float gamma;
@property (nonatomic) float exposure;
@property (nonatomic) float brightness;
@property (nonatomic) float contrast;
@property (nonatomic) float saturation;
@property (nonatomic) MISSING_TYPE *highDynamicRangeCompression;

- (void)dealloc;
- (void)updateTexture;
- (id)initWithName:(id)arg1 channelEncoding:(long long)arg2 textureDimensions:(float)arg3 turbidity:(float)arg4 sunElevation:(float)arg5 sunAzimuth:(float)arg6 upperAtmosphereScattering:(float)arg7 groundAlbedo: /* Error: Ran out of types for this method. */;
- (id)initWithName:(id)arg1 channelEncoding:(long long)arg2 textureDimensions:(float)arg3 turbidity:(float)arg4 sunElevation:(float)arg5 upperAtmosphereScattering:(float)arg6 groundAlbedo: /* Error: Ran out of types for this method. */;

@end
