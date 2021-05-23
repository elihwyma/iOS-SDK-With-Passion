/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLObject.h>

@class NSArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSOrderedSet, NUGLContext;

@interface NUGLPipeline : NUGLObject

{
    long long _buildStatus;
    NSError *_buildError;
    NUGLContext *_currentContext;
    NSMutableDictionary *_uniformValues;
    NSMutableDictionary *_uniformSamplers;
    NSMutableSet *_dirtyKeys;
    NSArray *_stages;
    NSDictionary *_uniforms;
    NSDictionary *_attributes;
    NSArray *_orderedAttributes;
    NSOrderedSet *_samplers;
}

@property (nonatomic, readonly) NSArray *stages;
@property (nonatomic, readonly) NSDictionary *uniforms;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSArray *orderedAttributes;
@property (nonatomic, readonly) NSOrderedSet *samplers;

- (id)init;
- (void)end:(id)arg1;
- (void)delete;
- (void)generate:(id)arg1;
- (void)begin:(id)arg1;
- (id)initWithStages:(id)arg1;
- (_Bool)build:(id)arg1 error:(out id *)arg2;
- (void)_build:(id)arg1;
- (void)run:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)valueForUniform:(id)arg1;
- (void)setValue:(id)arg1 forUniform:(id)arg2;
- (id)samplerForUniform:(id)arg1;
- (void)setSampler:(id)arg1 forUniform:(id)arg2;
- (void)drawVertexArray:(id)arg1 range:(struct _NSRange)arg2 mode:(long long)arg3;
- (void)_drawVertexArray:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_validate:(id)arg1;
- (void)_beginDrawing:(id)arg1;
- (void)_endDrawing:(id)arg1;

@end
