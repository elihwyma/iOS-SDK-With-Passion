/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLTexture.h>

@interface MDLColorSwatchTexture : MDLTexture

{
    float _colorTemperature1;
    float _colorTemperature2;
    struct CGColor *_color1;
    struct CGColor *_color2;
    int _type;
}

- (id)generateDataAtLevel:(long long)arg1;
- (id)initWithColorTemperatureGradientFrom:(float)arg1 toColorTemperature:(float)arg2 name:(id)arg3 textureDimensions: /* Error: Ran out of types for this method. */;
- (id)initWithColorGradientFrom:(struct CGColor *)arg1 toColor:(struct CGColor *)arg2 name:(id)arg3 textureDimensions: /* Error: Ran out of types for this method. */;

@end
