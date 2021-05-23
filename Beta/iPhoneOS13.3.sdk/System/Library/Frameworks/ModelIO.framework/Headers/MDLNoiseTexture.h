/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLTexture.h>

@interface MDLNoiseTexture : MDLTexture

{
    _Bool _vectorNoise;
    float _smoothness;
    _Bool _grayScale;
    float _frequency;
    int _noiseMode;
}

- (id)generateDataAtLevel:(long long)arg1;
- (id)_generateCellularNoiseAtLevel:(long long)arg1;
- (id)initVectorNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 channelEncoding: /* Error: Ran out of types for this method. */;
- (id)initScalarNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(_Bool)arg5 grayscale: /* Error: Ran out of types for this method. */;
- (id)initCellularNoiseWithFrequency:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 channelEncoding: /* Error: Ran out of types for this method. */;

@end
