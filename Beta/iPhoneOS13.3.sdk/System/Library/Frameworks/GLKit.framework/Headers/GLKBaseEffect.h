/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class GLKEffect, GLKEffectPropertyConstantColor, GLKEffectPropertyFog, GLKEffectPropertyLight, GLKEffectPropertyMaterial, GLKEffectPropertyTexture, GLKEffectPropertyTransform, NSArray, NSMutableArray, NSString;

@interface GLKBaseEffect : NSObject

{
    unsigned char _colorMaterialEnabled;
    unsigned char _fogEnabled;
    GLKEffectPropertyTransform *_transform;
    int _lightingType;
    GLKEffectPropertyLight *_light0;
    GLKEffectPropertyLight *_light1;
    GLKEffectPropertyLight *_light2;
    GLKEffectPropertyMaterial *_material;
    GLKEffectPropertyTexture *_texture2d0;
    GLKEffectPropertyTexture *_texture2d1;
    NSArray *_textureOrder;
    union _GLKVector4 _constantColor;
    GLKEffectPropertyFog *_fog;
    NSString *_label;
    unsigned char _lightModelTwoSided;
    unsigned char _useConstantColor;
    unsigned char _propertyArrayStale;
    unsigned char _effectStale;
    unsigned int _programName;
    GLKEffectPropertyConstantColor *_constantColorProp;
    NSMutableArray *_propertyArray;
    GLKEffect *_effect;
    union _GLKVector4 _lightModelAmbientColor;
}

@property (nonatomic, readonly) NSMutableArray *propertyArray;
@property (nonatomic) unsigned char effectStale;
@property (nonatomic) unsigned char propertyArrayStale;
@property (nonatomic) GLKEffect *effect;
@property (nonatomic) unsigned int programName;
@property (nonatomic, readonly) GLKEffectPropertyConstantColor *constantColorProp;
@property (nonatomic) unsigned char colorMaterialEnabled;
@property (nonatomic) unsigned char lightModelTwoSided;
@property (nonatomic) unsigned char useConstantColor;
@property (nonatomic, readonly) GLKEffectPropertyTransform *transform;
@property (nonatomic, readonly) GLKEffectPropertyLight *light0;
@property (nonatomic, readonly) GLKEffectPropertyLight *light1;
@property (nonatomic, readonly) GLKEffectPropertyLight *light2;
@property (nonatomic) int lightingType;
@property (nonatomic) union _GLKVector4 lightModelAmbientColor;
@property (nonatomic, readonly) GLKEffectPropertyMaterial *material;
@property (nonatomic, readonly) GLKEffectPropertyTexture *texture2d0;
@property (nonatomic, readonly) GLKEffectPropertyTexture *texture2d1;
@property (copy, nonatomic) NSArray *textureOrder;
@property (nonatomic) union _GLKVector4 constantColor;
@property (nonatomic, readonly) GLKEffectPropertyFog *fog;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)prepareToDraw;
- (void)updateBaseEffect;
- (_Bool)perVertexLightingEnabled;
- (_Bool)perPixelLightingEnabled;

@end
