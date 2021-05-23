/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaItem.h>

@interface OKMediaFileSystemItem : OKMediaItem

+ (id)scheme;
+ (id)urlForMediaObject:(id)arg1;

- (id)initWithFileURL:(id)arg1;
- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (id)parseDate:(id)arg1;
- (id)_primaryURL;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)avAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)wantsTemporaryDiskCache;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (id)_secondaryURL;

@end
