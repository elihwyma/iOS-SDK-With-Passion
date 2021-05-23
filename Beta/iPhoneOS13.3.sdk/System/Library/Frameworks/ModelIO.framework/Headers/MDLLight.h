/*
 Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

#import <ModelIO/MDLObject.h>

@class MISSING_TYPE, NSString;

@interface MDLLight : MDLObject

{
    struct RTLight *_light;
    NSString *_colorSpace;
    struct CGColorSpace *_cgColorSpace;
    unsigned long long _lightType;
}

@property (nonatomic) unsigned long long lightType;
@property (copy, nonatomic) NSString *colorSpace;

- (id)init;
- (void)dealloc;
- (MISSING_TYPE *)position;
- (void)setTransform:(id)arg1;
- (struct RTLight *)rtLight;
- (struct CGColor *)irradianceAtPoint: /* Error: Ran out of types for this method. */;
- (struct CGColor *)irradianceAtPoint:(struct CGColorSpace *)arg1 colorSpace: /* Error: Ran out of types for this method. */;

@end
