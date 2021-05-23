/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/Movie.h>

#import <Memories/Swift-Protocol.h>

@class AVAsset, NSURL;

__attribute__((visibility("hidden")))
@interface VideoMovie : Movie <Swift>

{
    _Bool _audioProxyExists;
    _Bool _cachedAssetInformationValid;
    _Bool _cacheMovieIsPlayable;
    _Bool _cacheWillDieDuringLoad;
    float _cachedFrameRate;
    unsigned int _cachedCodec4cc;
    int _cachedDuration;
    NSURL *_audioProxyURL;
    unsigned long long _cachedVideoTrackCount;
    unsigned long long _cachedAudioTrackCount;
    unsigned long long _cachedAudioTrackChannels;
    AVAsset *_weakAVAsset;
    struct CGSize _cachedNaturalSize;
    struct CGSize _cachedEncodedPixelSize;
    CDStruct_1b6d18a9 _cachedPreciseAssetDuration;
    struct CGAffineTransform _cachedTransform;
}

@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic) struct CGSize cachedNaturalSize;
@property (nonatomic) struct CGSize cachedEncodedPixelSize;
@property (nonatomic) float cachedFrameRate;
@property (nonatomic) struct CGAffineTransform cachedTransform;
@property (nonatomic) unsigned int cachedCodec4cc;
@property (nonatomic) int cachedDuration;
@property (nonatomic) CDStruct_1b6d18a9 cachedPreciseAssetDuration;
@property (nonatomic) unsigned long long cachedVideoTrackCount;
@property (nonatomic) unsigned long long cachedAudioTrackCount;
@property (nonatomic) unsigned long long cachedAudioTrackChannels;
@property (nonatomic) _Bool cachedAssetInformationValid;
@property (nonatomic) _Bool cacheMovieIsPlayable;
@property (nonatomic) _Bool cacheWillDieDuringLoad;
@property (retain, nonatomic) AVAsset *weakAVAsset;
@property (copy, nonatomic) NSURL *audioProxyURL;
@property (nonatomic) _Bool audioProxyExists;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (int)duration;
- (unsigned int)videoCodec;
- (id)avAsset;
- (double)durationInSeconds;
- (void)updateMetadata;
- (void)updateLocation;
- (_Bool)isMono;
- (struct CGSize)naturalSizeWithTransform;
- (_Bool)hasVideoTracks;
- (_Bool)hasAudioTracks;
- (void)mediaserverdCrashed;
- (void)cacheAssetInformation;
- (void)loadAVAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)loadAVAsset;
- (void)loadAVPlayerItemWithCompletionHander:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 networkAccessAllowed:(_Bool)arg3;
- (void)updateAssetAvailability;
- (id)initWithIdentifierURL:(id)arg1;
- (_Bool)isUnsupportedFormat;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2 userInfo:(id)arg3;
- (void)cacheVideoTrackInformationOfAsset:(id)arg1;
- (void)cacheAudioTrackFormatInformationOfAsset:(id)arg1;
- (void)resetCachedAssetInformation;
- (struct CGSize)encodedPixelSize;
- (_Bool)renderedAdjustmentsExist;
- (void)updateCreationDate;
- (id)initWithIdentifierURL:(id)arg1 asset:(id)arg2;
- (id)thumbnailImageWithSize:(struct CGSize)arg1;
- (void)cacheAssetInformationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (struct CGSize)encodedPixelSizeWithTransform;

@end
