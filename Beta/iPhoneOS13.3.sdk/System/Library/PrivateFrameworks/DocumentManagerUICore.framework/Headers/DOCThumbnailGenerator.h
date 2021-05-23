/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <Foundation/NSObject.h>

@class DOCThumbnailCache, QLThumbnailGenerator;

@interface DOCThumbnailGenerator : NSObject

{
    DOCThumbnailCache *_thumbnailCache;
    QLThumbnailGenerator *_thumbnailGenerator;
}

@property (nonatomic, readonly) QLThumbnailGenerator *thumbnailGenerator;

+ (id)sharedGenerator;
+ (void)setMaximumCachedThumbnailCount:(unsigned long long)arg1;

- (id)init;
- (void)performInBatch:(CDUnknownBlockType)arg1;
- (void)markThumbnailAsRecentlyUsed:(id)arg1;
- (id)thumbnailForItem:(id)arg1 descriptor:(id)arg2;
- (id)thumbnailForItem:(id)arg1 descriptor:(id)arg2 forceFetch:(_Bool)arg3;
- (id)_thumbnailForItem:(id)arg1 descriptor:(id)arg2 forceFetch:(_Bool)arg3;
- (id)_thumbnailFallbackForItem:(id)arg1 descriptor:(id)arg2 currentThumbnail:(id)arg3;
- (id)iconForItem:(id)arg1 descriptor:(id)arg2;
- (id)_currentItemThumbnailsBatch;
- (id)startBatching;
- (void)endBatching:(id)arg1;
- (id)_endCurrentThumbnailsBatch;
- (id)iconForURL:(id)arg1 descriptor:(id)arg2;

@end
