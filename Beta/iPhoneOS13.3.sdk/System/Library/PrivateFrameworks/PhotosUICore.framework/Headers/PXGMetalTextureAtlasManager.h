/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, NSString, PXGColorProgram;

@protocol MTLDevice, OS_dispatch_queue;

@interface PXGMetalTextureAtlasManager : NSObject

{
    id <MTLDevice> _device;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    unsigned int _capacityPerAtlas;
    unsigned long long _pixelFormat;
    NSIndexSet *_skipRenderSpriteIndexes;
    PXGColorProgram *_colorProgram;
    NSArray *_atlasTextures;
    struct CGSize _thumbnailSize;
}

@property (copy) NSArray *atlasTextures;
@property (nonatomic, readonly) PXGColorProgram *colorProgram;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize thumbnailSize;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes;
@property (copy, nonatomic, readonly) NSArray *textures;

- (id)init;
- (void)applyChangeDetails:(id)arg1;
- (unsigned int)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect)arg4;
- (void)processPendingThumbnailRequestIDsWithHandler:(CDUnknownBlockType)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (void)pruneUnusedTextures;
- (id)initWithThumbnailSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2 capacityPerAtlas:(unsigned int)arg3 requestQueue:(id)arg4 colorProgram:(id)arg5 device:(id)arg6;
- (void)_updateAtlasSpriteIndexSkips;
- (void)_requestQueue_getNextAvailableAtlas:(id *)arg1 thumbnailOffset:(unsigned int *)arg2;
- (void)_getAtlas:(id *)arg1 localThumbnailIndex:(unsigned int *)arg2 forGlobalThumbnailIndex:(unsigned int)arg3;

@end
