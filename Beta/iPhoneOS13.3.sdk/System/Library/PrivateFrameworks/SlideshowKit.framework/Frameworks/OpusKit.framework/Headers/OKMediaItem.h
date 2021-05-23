/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, OKPresentation;

@interface OKMediaItem : NSObject

{
    OKPresentation *_presentation;
    NSURL *_uniqueURL;
    NSString *_uniqueURLNormalisedString;
    unsigned long long _uniqueURLHash;
}

@property (nonatomic) OKPresentation *presentation;
@property (copy, nonatomic, readonly) NSString *uniqueURLNormalisedString;
@property (copy, nonatomic, readonly) NSURL *uniqueURL;

+ (id)scheme;
+ (_Bool)isRemote;
+ (id)urlForMediaObject:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (id)resourceURL;
- (id)metadata;
- (id)avAsset;
- (id)mediaObject;
- (void)setMediaObject:(id)arg1;
- (id)uniquePath;
- (id)prepareCaches:(_Bool)arg1 colorSpace:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)metadataWithCompletionHandler:(CDUnknownBlockType)arg1 force:(_Bool)arg2 cache:(_Bool)arg3;
- (id)detectRegionsOfInterestWithCompletionHandler:(CDUnknownBlockType)arg1 force:(_Bool)arg2 cache:(_Bool)arg3 colorSpace:(id)arg4;
- (id)thumbnailImageForResolution:(unsigned long long)arg1 aspectRatio:(double)arg2 scale:(double)arg3 quality:(double)arg4 colorSpace:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 force:(_Bool)arg7 cache:(_Bool)arg8;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidateDiskCachedMetadata;
- (void)invalidateDiskCachedThumbnailImages;
- (void)invalidateMemoryCachedMetadata;
- (void)invalidateMemoryCachedThumbnailImages;
- (id)memoryCachedMetadata;
- (id)diskCachedMetadata;
- (void)setMemoryCachedMetadata:(id)arg1;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDiskCachedMetadata:(id)arg1;
- (id)operationWithBlock:(CDUnknownBlockType)arg1 completionHandlerWithObject:(CDUnknownBlockType)arg2;
- (id)metadataWithProgress:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)memoryCachedThumbnailImageForResolution:(unsigned long long)arg1;
- (id)diskCachedThumbnailImageForResolution:(unsigned long long)arg1;
- (void)setMemoryCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDiskCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2;
- (id)avAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)wantsTemporaryDiskCache;
- (_Bool)wantsMemoryCachedMetadata;
- (id)_resourcesDiskCacheManager;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsMemoryCachedThumbnailForResolution:(unsigned long long)arg1;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (id)initWithUniqueURL:(id)arg1;
- (id)thumbnailImageForResolution:(unsigned long long)arg1 aspectRatio:(double)arg2 scale:(double)arg3 quality:(double)arg4 colorSpace:(id)arg5;
- (id)regionsOfInterestWithColorSpace:(id)arg1;
- (_Bool)hasDiskCachedMetadata:(id *)arg1;
- (_Bool)hasDiskCachedThumbnailImage:(id *)arg1 forResolution:(unsigned long long)arg2;

@end
