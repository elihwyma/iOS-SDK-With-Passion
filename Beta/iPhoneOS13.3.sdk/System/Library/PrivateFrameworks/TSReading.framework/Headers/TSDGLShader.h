/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface TSDGLShader : NSObject

{
    NSMutableDictionary *_uniforms;
    NSMutableSet *_uniformsNeedingUpdate;
    NSMutableDictionary *_attributeLocations;
    _Bool _isActive;
    unsigned int _programObject;
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) unsigned int programObject;
@property (nonatomic, readonly) _Bool isActive;

+ (id)defaultVelocityVisualizerFragmentShaderString;

- (void)dealloc;
- (id)description;
- (void)teardown;
- (void)activate;
- (void)deactivate;
- (int)locationForAttribute:(id)arg1;
- (id)initWithVertexShaderFileName:(id)arg1 fragmentShaderFileName:(id)arg2 bundle:(id)arg3 uniforms:(id)arg4 attributes:(id)arg5 defines:(id)arg6;
- (void)setGLint:(int)arg1 forUniform:(id)arg2;
- (void)setGLFloat:(float)arg1 forUniform:(id)arg2;
- (void)setPoint4D:(CDStruct_f2e236b6)arg1 forUniform:(id)arg2;
- (id)initWithShaderFileName:(id)arg1 bundle:(id)arg2 uniforms:(id)arg3 attributes:(id)arg4 defines:(id)arg5;
- (id)p_contentsOfShader:(id)arg1 extension:(id)arg2 bundle:(id)arg3;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2 uniforms:(id)arg3 attributes:(id)arg4 defines:(id)arg5;
- (_Bool)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 defines:(id)arg3;
- (int)locationForUniform:(id)arg1;
- (_Bool)p_compileShader:(unsigned int *)arg1 withType:(unsigned int)arg2 shaderString:(id)arg3 defines:(id)arg4;
- (id)p_qualifierForUniform:(id)arg1 class:(Class)arg2;
- (void)p_setQualifiersIfNecessary;
- (void)setGLint:(int)arg1 forShaderQualifier:(id)arg2;
- (id)shaderQualifierForUniform:(id)arg1 type:(long long)arg2;
- (void)setGLFloat:(float)arg1 forShaderQualifier:(id)arg2;
- (void)setPoint2D:(CDStruct_6e3f967a)arg1 forShaderQualifier:(id)arg2;
- (void)setPoint2D:(CDStruct_6e3f967a)arg1 forUniform:(id)arg2;
- (void)setPoint3D:(CDStruct_03942939)arg1 forShaderQualifier:(id)arg2;
- (void)setPoint4D:(CDStruct_f2e236b6)arg1 forShaderQualifier:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform)arg1 forShaderQualifier:(id)arg2;
- (void)setMat4WithTransform3D:(struct CATransform3D)arg1 forShaderQualifier:(id)arg2;
- (id)initWithDefaultTextureShader;
- (id)initWithDefaultTextureCoordinatesShader;
- (id)initWithDefaultTextureAndOpacityShader;
- (id)initWithDefaultRandomColorShader;
- (id)initWithDefaultRandomColorTextureShader;
- (id)initWithDefaultVelocityShader;
- (id)initWithDefaultVelocityMeshShader;
- (id)initWithDefaultVelocityCollectionShader;
- (id)initWithDefaultVelocityVisualizerShader;
- (id)initWithDefaultVerticalBlurShader;
- (id)initWithDefaultHorizontalBlurShader;
- (id)initWithDefaultUniformMotionBlurShader;
- (id)initWithShaderFileName:(id)arg1 bundle:(id)arg2;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (void)setInteger:(long long)arg1 forShaderQualifier:(id)arg2;
- (void)setInteger:(long long)arg1 forUniform:(id)arg2;
- (void)setCGFloat:(double)arg1 forShaderQualifier:(id)arg2;
- (void)setCGFloat:(double)arg1 forUniform:(id)arg2;
- (void)setLifeSpan:(CDStruct_6e3f967a)arg1 forShaderQualifier:(id)arg2;
- (void)setLifeSpan:(CDStruct_6e3f967a)arg1 forUniform:(id)arg2;
- (void)setPoint3D:(CDStruct_03942939)arg1 forUniform:(id)arg2;
- (void)setColor:(CDStruct_f2e236b6)arg1 forShaderQualifier:(id)arg2;
- (void)setColor:(CDStruct_f2e236b6)arg1 forUniform:(id)arg2;
- (void)setMat3WithAffineTransform:(struct CGAffineTransform)arg1 forUniform:(id)arg2;
- (void)setMat4WithTransform3D:(struct CATransform3D)arg1 forUniform:(id)arg2;
- (_Bool)validateUniforms;

@end
