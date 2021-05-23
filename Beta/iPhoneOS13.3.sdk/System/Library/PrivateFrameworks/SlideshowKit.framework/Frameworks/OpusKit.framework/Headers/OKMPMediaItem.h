/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaItem.h>

@class MPMediaItem;

@interface OKMPMediaItem : OKMediaItem

{
    MPMediaItem *_mediaItem;
}

@property (retain) MPMediaItem *mediaItem;

+ (id)scheme;
+ (_Bool)isRemote;
+ (id)urlForMediaObject:(id)arg1;
+ (id)urlForMPAsset:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)avAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)wantsDiskCachedMetadata;
- (void)_resolveAssetIfNeeded;
- (id)initWithMPMediaItem:(id)arg1;

@end
