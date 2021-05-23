/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGPayloadTexture.h>

@class NSIndexSet, NSString, PXGCaptureSpritePayload, PXGColorProgram;

@protocol MTLTexture;

@interface PXGMetalCaptureSpriteTexture : PXGPayloadTexture

{
    long long _renderPipelineIndex;
    id <MTLTexture> _texture;
    const CDStruct_869f9c67 *_spriteGeometries;
    struct CGRect _captureRect;
}

@property (copy, nonatomic, readonly) PXGCaptureSpritePayload *payload;
@property (nonatomic) struct CGRect captureRect;
@property (retain, nonatomic) id <MTLTexture> texture;
@property (nonatomic) const CDStruct_869f9c67 *spriteGeometries;
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
@property (nonatomic, readonly) id <MTLTexture> chromaTexture;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (nonatomic) long long renderPipelineIndex;
@property (nonatomic, readonly) _Bool isAtlas;
@property (nonatomic, readonly) _Bool isCaptureTexture;
@property (nonatomic, readonly) int shaderFlags;

- (void)getTextureInfos:(CDStruct_183601bc *)arg1 forSpriteIndexes:(unsigned int *)arg2 geometries:(const CDStruct_3ab912e1 *)arg3 spriteStyles:(const CDStruct_506f5052 *)arg4 spriteInfos:(const CDStruct_9d1ebe49 *)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (void)prepareForRender:(long long)arg1;
- (void)cleanupAfterRender:(long long)arg1;
- (id)initWithPayload:(id)arg1 presentationType:(int)arg2;

@end
