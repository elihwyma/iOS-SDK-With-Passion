/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTAssetMediaItem.h>

@class AVAsset, JTThumbnailGenerator, JTVideoMediaUtils;

@interface JTVideoMediaItem : JTAssetMediaItem

{
    _Bool _isHighFrameRate;
    _Bool _capturedByInAppCamera;
    _Bool _originalIsHEVC4k;
    int _mediaStartOffset;
    AVAsset *_avAsset;
    JTThumbnailGenerator *_thumbnailGenerator;
    JTVideoMediaUtils *_videoMediaItemUtils;
}

@property (retain, nonatomic) AVAsset *avAsset;
@property (retain, nonatomic) JTThumbnailGenerator *thumbnailGenerator;
@property (retain, nonatomic) JTVideoMediaUtils *videoMediaItemUtils;
@property (nonatomic) _Bool originalIsHEVC4k;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic, readonly) struct CGAffineTransform transform;
@property (nonatomic, readonly) struct CGSize naturalSizeWithTransform;
@property (nonatomic) int mediaStartOffset;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic, readonly) _Bool isHighFrameRate;
@property (nonatomic, readonly) _Bool hasVideoTracks;
@property (nonatomic, readonly) _Bool hasAudioTracks;
@property (nonatomic) _Bool capturedByInAppCamera;
@property (nonatomic, readonly) _Bool needsDerivativeMedia;
@property (nonatomic, readonly) _Bool isUnsupportedAudio;

+ (void)videoMediaItemWithAssetIdentifier:(id)arg1 progressHandlerBlock:(CDUnknownBlockType)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)videoMediaItemWithLocalURL:(id)arg1 delegate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)info;
- (void)commonInit;
- (id)assetURL;
- (int)durationAt30fps;
- (id)initWithInfo:(id)arg1 delegate:(id)arg2;
- (_Bool)hasAudibleCharacteristic;
- (void)mediaserverdCrashed;
- (_Bool)canBeAddedToSequence;
- (_Bool)hasVisualCharacteristic;
- (void)cacheAssetInformation;
- (void)loadAVAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)generateThumbnailWithProgressHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAssetIs4kHEVC:(_Bool)arg1;
- (struct CGAffineTransform)transform:(struct CGSize)arg1 fillDest:(_Bool)arg2;

@end
