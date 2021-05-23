/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@class MISSING_TYPE;

@interface MDLAreaLight : MDLPhysicallyPlausibleLight

{
    float _areaRadius;
    float _aspect;
    MISSING_TYPE *_superEllipticPower;
}

@property (nonatomic) float areaRadius;
@property (nonatomic) MISSING_TYPE *superEllipticPower;
@property (nonatomic) float aspect;

- (id)init;

@end
