/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, PHAsset, PHAssetResource;

__attribute__((visibility("hidden")))
@interface PHAssetRepresentation : NSObject

{
    _Bool _isAvailable;
    _Bool _adjustedVersion;
    unsigned long long _lastKnownPersistenceState;
    PHAssetResource *_mostUsefulResource;
    NSString *_localIdentifier;
    NSDate *_modificationDate;
    unsigned long long _downloadState;
    double _downloadProgress;
    NSDate *_downloadRequestDate;
    PHAsset *_asset;
    long long _mediaType;
}

@property (retain, nonatomic) PHAsset *asset;
@property (retain, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) NSDate *modificationDate;
@property (nonatomic) long long mediaType;
@property (nonatomic) unsigned long long lastKnownPersistenceState;
@property (nonatomic) unsigned long long downloadState;
@property (nonatomic) double downloadProgress;
@property (retain, nonatomic) NSDate *downloadRequestDate;
@property (nonatomic, getter=isAdjustedVersion) _Bool adjustedVersion;
@property (readonly) PHAssetResource *mostUsefulResource;
@property (nonatomic, readonly) NSString *derivativeFilePath;

+ (void)initialize;
+ (void)clearStaticCache;
+ (id)assetRepresentationWithAsset:(id)arg1 adjustedVersion:(_Bool)arg2;
+ (id)assetRepresentationWithIdentifierURL:(id)arg1;
+ (void)createStaticCache;
+ (id)_cachedAssetRepresentationWithIdentifier:(id)arg1 adjustedVersion:(_Bool)arg2;
+ (void)_cacheAssetRepresentation:(id)arg1;
+ (id)assetRepresentationWithPhotosIdentifierURL:(id)arg1;
+ (id)assetRepresentationWithAssetsLibraryPersistentURL:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)image;
- (struct CGSize)imageSize;
- (_Bool)isDownloading;
- (id)imageData;
- (id)thumbnailImage;
- (_Bool)isHEIF;
- (id)privateFileURL;
- (id)avAsset;
- (id)imageWithSize:(struct CGSize)arg1;
- (id)identifierURL;
- (void)queryLastKnownPersistenceState;
- (int)requestVideoWithResultHandler:(CDUnknownBlockType)arg1;
- (int)requestPlayerItemWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 networkAccessAllowed:(_Bool)arg3;
- (id)privateFileURLForResource:(id)arg1;
- (id)initWithAsset:(id)arg1 adjustedVersion:(_Bool)arg2;
- (id)initWithLocalIdentifier:(id)arg1 adjustedVersion:(_Bool)arg2 modificationDate:(id)arg3 mediaType:(long long)arg4;
- (id)initWithAsset:(id)arg1 localIdentifier:(id)arg2 adjustedVersion:(_Bool)arg3 modificationDate:(id)arg4 mediaType:(long long)arg5;
- (int)requestThumbnailWithResultHandler:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2 networkAccessAllowed:(_Bool)arg3;
- (int)requestImageDataWithResultHandler:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (id)imageWithSize:(struct CGSize)arg1 imageManager:(id)arg2;
- (struct CGImage *)cgimageWithSize:(struct CGSize)arg1 imageManager:(id)arg2;
- (int)requestImageDataWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 synchronous:(_Bool)arg3;
- (int)requestVideoWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (int)requestVideoWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 imageManager:(id)arg3;
- (id)privateVideoFileURL;
- (id)handleVideoRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;
- (int)requestImageWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 imageManager:(id)arg3;
- (_Bool)isDerivativeFilePathPointingToJPEGorRAWorHEIFFile;
- (struct CGImage *)cgimageWithSize:(struct CGSize)arg1;
- (unsigned long long)estimatedFileSize;
- (int)requestMediaWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (int)requestExportSessionWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (int)requestImageDataWithResultHandler:(CDUnknownBlockType)arg1;
- (int)requestImageWithResultHandler:(CDUnknownBlockType)arg1;
- (int)requestImageWithResultHandler:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2;
- (id)handlePlayerItemRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;
- (id)handleRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3;

@end
