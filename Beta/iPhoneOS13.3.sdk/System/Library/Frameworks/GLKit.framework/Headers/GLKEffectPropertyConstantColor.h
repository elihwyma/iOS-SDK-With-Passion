/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <GLKit/GLKEffectProperty.h>

@interface GLKEffectPropertyConstantColor : GLKEffectProperty

{
    union _GLKVector4 _color;
    unsigned char _enabled;
}

@property (nonatomic) unsigned char enabled;
@property (nonatomic) union _GLKVector4 color;

+ (void)setStaticMasksWithVshRoot:(id)arg1 fshRoot:(id)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)bind;
- (void)dirtyAllUniforms;
- (void)setShaderBindings;

@end
