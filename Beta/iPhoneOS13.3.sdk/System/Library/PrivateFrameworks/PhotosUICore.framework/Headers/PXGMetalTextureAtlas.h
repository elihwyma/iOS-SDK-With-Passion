/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGImageTexture.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString, PXGColorProgram;

@protocol MTLDevice, MTLTexture, OS_dispatch_queue;

@interface PXGMetalTextureAtlas : PXGImageTexture

{
    id <MTLDevice> _device;
    NSObject<OS_dispatch_queue> *_syncQueue;
    long long _cols;
    unsigned long long _bytesPerPixel;
    NSMutableIndexSet *_thumbnailIndexesUsedBySprites;
    NSMutableIndexSet *_spriteIndexesUsedBySprites;
    unsigned int *_spriteIndexByThumbnailIndex;
    NSIndexSet *_renderedSpriteIndexes;
    _Atomic short _count;
    NSMutableIndexSet *_thumbnailIndexesPendingCheckin;
    NSMutableIndexSet *_thumbnailIndexesBeingCheckedIn;
    _Atomic unsigned char _isPerformingThumbnailCheckin;
    char *_retainCountByThumbnailIndex;
    CDStruct_183601bc *_guarded_textureInfoByThumbnailIndex;
    NSMutableIndexSet *_syncQueue_availableThumbnailIndexes;
    NSMutableDictionary *_syncQueue_thumbnailsInUseByRenderPass;
    struct {
        int _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_syncQueue_pendingThumbnailRequestInfo;
    unsigned long long _syncQueue_pendingThumbnailRequestInfoCount;
    unsigned long long _syncQueue_pendingThumbnailRequestInfoCapacity;
    unsigned int _capacity;
    id <MTLTexture> _texture;
    PXGColorProgram *_colorProgram;
    long long _renderPipelineIndex;
    NSIndexSet *_skipRenderSpriteIndexes;
    unsigned long long _pixelFormat;
    struct CGSize _thumbnailSize;
}

@property (copy, nonatomic, readonly) NSIndexSet *thumbnailIndexesUsedBySprites;
@property (nonatomic, readonly) NSIndexSet *renderedSpriteIndexes;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) struct CGSize thumbnailSize;
@property (nonatomic, readonly) unsigned int capacity;
@property (nonatomic, readonly) unsigned int count;
@property (retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes;
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

+ (unsigned int)maxCapacityForThumbnailSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (void)getTextureInfos:(CDStruct_183601bc *)arg1 forSpriteIndexes:(unsigned int *)arg2 geometries:(const CDStruct_3ab912e1 *)arg3 spriteStyles:(const CDStruct_506f5052 *)arg4 spriteInfos:(const CDStruct_9d1ebe49 *)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;
- (void)prepareForRender:(long long)arg1;
- (void)cleanupAfterRender:(long long)arg1;
- (void)getSpriteIndexes:(unsigned int *)arg1 maxSpriteCount:(unsigned int)arg2;
- (_Bool)containsSpriteIndex:(unsigned int)arg1;
- (void)applyChangeDetails:(id)arg1;
- (unsigned int)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect)arg4;
- (void)processPendingThumbnailRequestIDsWithHandler:(CDUnknownBlockType)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;
- (id)initWithThumbnailSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2 capacity:(unsigned int)arg3 colorProgram:(id)arg4 device:(id)arg5;
- (void)_invalidateRenderedSpriteIndexes;
- (void)_checkinPendingThumbnailIndexesIfNeeded;
- (void)_syncQueue_retainThumbnailAtIndex:(long long)arg1;
- (void)_syncQueue_retainThumbnailsAtIndexes:(id)arg1;
- (void)_syncQueue_releaseThumbnailAtIndex:(long long)arg1;
- (void)_syncQueue_releaseThumbnailsAtIndexes:(id)arg1;
- (void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;
- (void)processPendingTextureRequestIDsWithHandler:(CDUnknownBlockType)arg1;
- (void)removeSpriteIndex:(unsigned int)arg1;
- (void)_syncQueue_resizeStorageIfNeeded;
- (unsigned int)_syncQueue_checkoutNextThumbnailIndex;
- (void)_syncQueue_checkinThumbnailIndex:(unsigned int)arg1;

@end
