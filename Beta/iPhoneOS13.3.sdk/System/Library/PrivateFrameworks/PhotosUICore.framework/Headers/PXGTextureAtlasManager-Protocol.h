/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSIndexSet;

@protocol PXGTextureAtlasManager <Swift>

@property (nonatomic, readonly) struct CGSize thumbnailSize;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes;
@property (copy, nonatomic, readonly) NSArray *textures;

- (unsigned short)applyChangeDetails: /* Error: Ran out of types for this method. */;
- (unsigned short)addSpriteWithTextureRequestID:thumbnailData:bytesPerRow:contentsRect: /* Error: Ran out of types for this method. */;
- (unsigned short)processPendingThumbnailRequestIDsWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeSpriteIndex:atThumbnailIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)pruneUnusedTextures;

@end
