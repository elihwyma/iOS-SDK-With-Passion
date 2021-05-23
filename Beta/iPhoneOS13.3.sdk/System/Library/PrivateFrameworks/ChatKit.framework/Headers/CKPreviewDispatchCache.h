/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject

{
    CKDispatchCache *_dispatchCache;
    CKMultiDict *_pendingBlocks;
}

@property (retain, nonatomic) CKDispatchCache *dispatchCache;
@property (retain, nonatomic) CKMultiDict *pendingBlocks;

+ (id)detailsPreviewCache;
+ (id)transcriptPreviewCache;
+ (id)mapThumbnailQueue;
+ (id)snapshotCache;
+ (id)previewPrewarmQueue;
+ (void)_invalidateStickerPreviewCache;
+ (id)stickerPreviewCache;

- (id)init;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (void)flush;
- (id)notificationCenter;
- (void)didReceiveMemoryWarning;
- (void)systemApplicationDidSuspend;
- (id)cachedPreviewForKey:(id)arg1;
- (void)setCachedPreview:(id)arg1 key:(id)arg2;
- (_Bool)isGeneratingPreviewForKey:(id)arg1;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 withPriority:(long long)arg2;
- (void)enqueueGenerationBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (void)clearQueueAndCachedPreviews;
- (void)enqueueSaveBlock:(CDUnknownBlockType)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3;
- (void)transferRemoved:(id)arg1;
- (void)beginGeneratingForKey:(id)arg1;
- (void)endGeneratingForKey:(id)arg1;
- (id)initWithCacheLimit:(unsigned long long)arg1;
- (_Bool)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2;
- (id)mediaObjectManager;
- (void)transferFinished:(id)arg1;

@end
