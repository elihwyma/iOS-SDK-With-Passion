/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLLight.h>

@interface MDLPhysicallyPlausibleLight : MDLLight

{
    float _lumens;
    float _innerConeAngle;
    float _outerConeAngle;
    float _attenuationStartDistance;
    float _attenuationEndDistance;
    float _attenuationFalloffExponent;
}

@property (nonatomic) float attenuationFalloffExponent;
@property (nonatomic) struct CGColor *color;
@property (nonatomic) float lumens;
@property (nonatomic) float innerConeAngle;
@property (nonatomic) float outerConeAngle;
@property (nonatomic) float attenuationStartDistance;
@property (nonatomic) float attenuationEndDistance;

- (id)init;
- (void)setColorByTemperature:(float)arg1;

@end
