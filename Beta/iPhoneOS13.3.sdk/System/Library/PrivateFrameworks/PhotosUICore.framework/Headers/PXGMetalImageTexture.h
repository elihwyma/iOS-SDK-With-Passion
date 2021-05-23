/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGImageTexture.h>

@class MISSING_TYPE, NSIndexSet, NSString, PXGColorProgram;

@protocol MTLTexture;

@interface PXGMetalImageTexture : PXGImageTexture

{
    _Bool _isOpaque;
    int _shaderFlags;
    id <MTLTexture> _texture;
    id <MTLTexture> _chromaTexture;
    PXGColorProgram *_colorProgram;
    long long _renderPipelineIndex;
    MISSING_TYPE *_orientationTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int spriteCount;
@property (nonatomic, readonly) NSIndexSet *spriteIndexes;
@property (nonatomic, readonly) long long estimatedByteSize;
@property (nonatomic, readonly) int presentationType;
@property (nonatomic, readonly) struct CGImage *imageRepresentation;
@property (nonatomic, readonly) struct CGSize pixelSize;
@property (nonatomic, readonly) _Bool isOpaque;
@property (nonatomic, readonly) id <MTLTexture> texture;
@property (nonatomic, readonly) id <MTLTexture> chromaTexture;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (nonatomic) long long renderPipelineIndex;
@property (nonatomic, readonly) _Bool isAtlas;
@property (nonatomic, readonly) _Bool isCaptureTexture;
@property (nonatomic, readonly) int shaderFlags;

- (id)init;
- (void)prepareForRender:(long long)arg1;
- (void)cleanupAfterRender:(long long)arg1;
- (MISSING_TYPE *)orientationTransform;
- (id)initWithTexture:(id)arg1 colorProgram:(id)arg2 isOpaque:(_Bool)arg3 shaderFlags:(int)arg4 orientationTransform: /* Error: Ran out of types for this method. */;
- (id)initWithTexture:(id)arg1 chromaTexture:(id)arg2 colorProgram:(id)arg3 isOpaque:(_Bool)arg4 shaderFlags:(int)arg5 orientationTransform: /* Error: Ran out of types for this method. */;

@end
