/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaItem.h>

@interface OKMediaImportedItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)arg1;

- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateDiskCachedThumbnailImages;
- (id)diskCachedMetadata;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)diskCachedThumbnailImageForResolution:(unsigned long long)arg1;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDiskCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2;
- (_Bool)wantsTemporaryDiskCache;
- (_Bool)wantsMemoryCachedMetadata;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (_Bool)hasDiskCachedMetadata:(id *)arg1;
- (_Bool)hasDiskCachedThumbnailImage:(id *)arg1 forResolution:(unsigned long long)arg2;
- (id)initWithImportedResourceURL:(id)arg1;

@end
