/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKMediaItem.h>

@class PHAsset;

@interface OKMediaPhotoKitItem : OKMediaItem

{
    PHAsset *_asset;
}

@property (retain) PHAsset *asset;

+ (id)scheme;
+ (_Bool)isRemote;
+ (id)urlForMediaObject:(id)arg1;
+ (id)urlForPHAsset:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (id)initWithPHAsset:(id)arg1;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)avAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)wantsTemporaryDiskCache;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (void)_resolveAssetIfNeeded;
- (struct CGRect)_faceAreaRect;

@end
