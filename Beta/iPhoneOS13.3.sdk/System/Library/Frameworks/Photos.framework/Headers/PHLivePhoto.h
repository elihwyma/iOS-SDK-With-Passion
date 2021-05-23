/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

#import <Photos/Swift-Protocol.h>

@class AVAsset, AVVideoComposition, NSString, NSURL, PHAsset, PHImageManager, PHSandboxExtensionWrapper;

@interface PHLivePhoto : NSObject <Swift>

{
    PHAsset *_asset;
    struct NSObject *_plImage;
    float _audioVolume;
    NSString *_uniqueIdentifier;
    NSString *_assetUUID;
    AVAsset *_videoAsset;
    unsigned long long _options;
    AVVideoComposition *_videoComposition;
    NSString *_assetLocalIdentifier;
    NSURL *_imageURL;
    PHSandboxExtensionWrapper *_imageURLSandboxExtensionWrapper;
    NSURL *_videoURL;
    PHSandboxExtensionWrapper *_videoURLSandboxExtensionWrapper;
    long long _contentMode;
    PHImageManager *_imageManager;
    struct CGSize _size;
    struct CGSize _targetSize;
    CDStruct_1b6d18a9 _photoTime;
}

@property (copy, nonatomic, readonly) NSString *assetUUID;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly) CDStruct_1b6d18a9 photoTime;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) AVVideoComposition *videoComposition;
@property (nonatomic, readonly) PHAsset *asset;
@property (copy, nonatomic, readonly) NSString *assetLocalIdentifier;
@property (readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) PHSandboxExtensionWrapper *imageURLSandboxExtensionWrapper;
@property (nonatomic, readonly) NSURL *videoURL;
@property (nonatomic, readonly) PHSandboxExtensionWrapper *videoURLSandboxExtensionWrapper;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic, readonly) NSString *imageTypeIdentifier;
@property (nonatomic, readonly) NSString *videoTypeIdentifier;
@property (copy, nonatomic, readonly) CDUnknownBlockType imageFileLoader;
@property (copy, nonatomic, readonly) CDUnknownBlockType videoFileLoader;
@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic, readonly) long long contentMode;
@property (nonatomic) float audioVolume;
@property (weak, nonatomic) PHImageManager *imageManager;
@property (nonatomic, readonly) struct CGSize size;

+ (_Bool)supportsSecureCoding;
+ (CDStruct_1b6d18a9)_photoTimeForLivePhotoWithImageURL:(id)arg1 videoURL:(id)arg2;
+ (int)requestLivePhotoWithResourceFileURLs:(id)arg1 placeholderImage:(id)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4 resultHandler:(CDUnknownBlockType)arg5;
+ (void)cancelLivePhotoRequestWithRequestID:(int)arg1;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 error:(id *)arg2;
+ (id)loopingLivePhotoWithResourceFileURLs:(id)arg1 error:(id *)arg2;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 error:(id *)arg4;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 skipValidation:(_Bool)arg4 error:(id *)arg5;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 skipValidation:(_Bool)arg4 isLooping:(_Bool)arg5 error:(id *)arg6;
+ (_Bool)_identifyResourceURLs:(id)arg1 outImageURL:(id *)arg2 outVideoURL:(id *)arg3 error:(id *)arg4;
+ (_Bool)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id *)arg2;
+ (_Bool)_canCreateLoopingLivePhotoWithURLs:(id)arg1 outError:(id *)arg2;
+ (_Bool)_validateFileURLs:(id)arg1 withValidationOptions:(unsigned long long)arg2 outError:(id *)arg3;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)image;
- (id)initWithBundleAtURL:(id)arg1;
- (id)videoComplement;
- (_Bool)hasPhotoColorAdjustments;
- (id)_imageManager;
- (id)initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 asset:(id)arg5 options:(unsigned long long)arg6;
- (id)initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 asset:(id)arg5;
- (id)_initWithImageURL:(id)arg1 videoURL:(id)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4;
- (id)initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 asset:(id)arg5 options:(unsigned long long)arg6 videoComposition:(id)arg7;
- (id)initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 assetUUID:(id)arg5 options:(unsigned long long)arg6 videoComposition:(id)arg7;
- (id)_initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 asset:(id)arg5 assetUUID:(id)arg6 options:(unsigned long long)arg7 videoComposition:(id)arg8;
- (_Bool)_synchronouslyLoadImageURL:(id *)arg1 videoURL:(id *)arg2 error:(id *)arg3;
- (void)_ensureConstituentData;
- (void)_loadConstituentURLsWithNetworkAccessAllowed:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveToPhotoLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
