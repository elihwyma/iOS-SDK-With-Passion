/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXGColorProgram;

@protocol MTLTexture;

@protocol PXGMetalSpriteTexture <Swift>

@property (nonatomic, readonly) id <MTLTexture> texture;
@property (nonatomic, readonly) id <MTLTexture> chromaTexture;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (nonatomic) long long renderPipelineIndex;
@property (nonatomic, readonly) _Bool isAtlas;
@property (nonatomic, readonly) _Bool isCaptureTexture;
@property (nonatomic, readonly) int shaderFlags;

- (unsigned short)getTextureInfos:forSpriteIndexes:geometries:spriteStyles:spriteInfos:screenScale:count: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareForRender: /* Error: Ran out of types for this method. */;
- (unsigned short)cleanupAfterRender: /* Error: Ran out of types for this method. */;

@end
