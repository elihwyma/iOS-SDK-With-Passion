/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, PXGMetalRenderPassState;

@protocol MTLBuffer, MTLDevice;

@interface PXGMetalRenderState : NSObject

{
    CDStruct_b1513b2e _uniforms;
    long long _shaderFlagsByEffectIdCount;
    long long _shaderFlagsByEffectIdCapacity;
    id <MTLDevice> _device;
    const CDStruct_9d1ebe49 *_spriteInfos;
    const CDStruct_3ab912e1 *_originalSpriteGeometries;
    int *_shaderFlagsByEffectId;
    PXGMetalRenderPassState *_currentRenderPassState;
    NSArray *_textures;
    NSArray *_captureSpriteTextures;
    id <MTLBuffer> _spriteGeometriesBuffer;
    id <MTLBuffer> _spriteStylesBuffer;
    id <MTLBuffer> _resizableCapInsetsBuffer;
    id <MTLBuffer> _effectDataBuffer;
}

@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) CDStruct_b1513b2e *uniforms;
@property (nonatomic) const CDStruct_9d1ebe49 *spriteInfos;
@property (nonatomic) const CDStruct_3ab912e1 *originalSpriteGeometries;
@property (nonatomic, readonly) int *shaderFlagsByEffectId;
@property (nonatomic, readonly) PXGMetalRenderPassState *currentRenderPassState;
@property (retain, nonatomic) NSArray *textures;
@property (retain, nonatomic) NSArray *captureSpriteTextures;
@property (nonatomic, readonly) const CDStruct_869f9c67 *spriteGeometries;
@property (nonatomic, readonly) const CDStruct_506f5052 *spriteStyles;
@property (nonatomic, readonly) id <MTLBuffer> spriteGeometriesBuffer;
@property (nonatomic, readonly) id <MTLBuffer> spriteStylesBuffer;
@property (nonatomic, readonly) id <MTLBuffer> resizableCapInsetsBuffer;
@property (nonatomic, readonly) id <MTLBuffer> effectDataBuffer;

- (void)dealloc;
- (id)description;
- (void)prepareForReuse;
- (id)initWithDevice:(id)arg1;
- (void)prepareForCommit;
- (id)_resizedBufferIfNeeded:(id)arg1 neededLength:(long long)arg2;
- (CDStruct_869f9c67 *)spriteGeometriesBufferWithCount:(long long)arg1;
- (CDStruct_506f5052 *)spriteStylesBufferWithCount:(long long)arg1;
- (id)renderPassStateForSpriteCount:(long long)arg1;
- (CDStruct_0054b44d *)resizableCapInsetsBufferWithCount:(long long)arg1;
- (CDStruct_ee569e91 *)effectDataBufferWithCount:(long long)arg1;
- (void)setEffectData:(const CDStruct_ee569e91 *)arg1 shaderFlags:(const int *)arg2 withCount:(long long)arg3;
- (void)_setShaderFlagsByEffectId:(const int *)arg1 withCount:(long long)arg2;

@end
