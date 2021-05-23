/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString;

@interface SKShader : NSObject

{
    NSMutableArray *_uniforms;
    NSArray *_attributes;
    NSMutableDictionary *_uniformData;
    NSString *_source;
    NSString *_fileName;
    _Bool _isPrecompiledMetal;
    NSString *_compileLog;
    _Bool _programDirty;
    _Bool _programWithTransformDirty;
    NSPointerArray *_targetNodes;
    _Bool _usesTimeUniform;
    _Bool _usesPathLengthUniform;
    _Bool _usesSpriteSizeUniform;
    shared_ptr_394c00aa _backingProgram;
    shared_ptr_394c00aa _backingProgramWithTransform;
    map_48758480 _attributeBuffers;
    _Bool _performFullCapture;
}

@property (readonly) NSArray *_textureUniforms;
@property (readonly) map_48758480 *_attributeBuffers;
@property (readonly) shared_ptr_394c00aa _backingProgram;
@property (readonly) shared_ptr_394c00aa _backingProgramWithTransform;
@property (readonly) shared_ptr_d7c0f433 _commands;
@property _Bool performFullCapture;
@property (copy) NSString *source;
@property (copy) NSArray *uniforms;
@property (copy, nonatomic) NSArray *attributes;

+ (_Bool)supportsSecureCoding;
+ (id)shader;
+ (id)shaderWithFileNamed:(id)arg1;
+ (id)shaderWithSource:(id)arg1 uniforms:(id)arg2;
+ (id)shaderWithSource:(id)arg1;
+ (id)precompiledMetalShaderWithFile:(id)arg1 uniforms:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id).cxx_construct;
- (id)initWithSource:(id)arg1;
- (_Bool)_usesTimeUniform;
- (void)_removeTargetNode:(id)arg1;
- (void)_addTargetNode:(id)arg1;
- (_Bool)isEqualToShader:(id)arg1;
- (id)initWithSource:(id)arg1 uniforms:(id)arg2;
- (id)_getLegacyUniformData;
- (id)_getMetalVertexOutDefinition;
- (id)_fullVertexSourceWithImplementation:(long long)arg1;
- (void)generateVertexAttributeDeclares:(id *)arg1 statements:(id *)arg2;
- (void)generateFragmentAttributeDeclares:(id *)arg1;
- (id)fragmentPrelude;
- (id)_fullMetalVertexSourceWithImplementation:(_Bool)arg1;
- (id)fragmentPreludeMetal;
- (id)_generateMetalSource;
- (shared_ptr_394c00aa)_makeBackingProgramWithImplementation:(long long)arg1;
- (id)fullMetalVertexSource;
- (id)fullMetalVertexWithTransformSource;
- (id)fullMetalFragmentSource;
- (id)fullVertexSource;
- (id)fullVertexWithTransformSource;
- (id)fullFragmentSource;
- (shared_ptr_d7c0f433)_commandsForBatchOffset:(int)arg1 count:(int)arg2;
- (id)_getMetalFragmentFunctionName;
- (void)addUniform:(id)arg1;
- (id)uniformNamed:(id)arg1;
- (void)removeUniformNamed:(id)arg1;
- (_Bool)_backingProgramIsDirty;
- (id)_getShaderCompilationLog;
- (id)_getMetalVertexShaderSource:(_Bool)arg1;
- (id)_getMetalFragmentShaderSource;
- (_Bool)_usesPathLengthUniform;
- (void)_setUniformsDirty;

@end
