/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface JTVideoMediaUtils : NSObject

{
    _Bool _cachedAssetInformationValid;
    _Bool _cacheWillDieDuringLoad;
    float _cachedFrameRate;
    unsigned int _cachedCodec4cc;
    int _cachedDurationAt30fps;
    unsigned long long _cachedVideoTrackCount;
    unsigned long long _cachedAudioTrackCount;
    struct CGSize _cachedNaturalSize;
    CDStruct_1b6d18a9 _cachedPreciseAssetDuration;
    struct CGAffineTransform _cachedTransform;
}

@property (nonatomic) _Bool cachedAssetInformationValid;
@property (nonatomic) struct CGSize cachedNaturalSize;
@property (nonatomic) float cachedFrameRate;
@property (nonatomic) struct CGAffineTransform cachedTransform;
@property (nonatomic) unsigned int cachedCodec4cc;
@property (nonatomic) int cachedDurationAt30fps;
@property (nonatomic) CDStruct_1b6d18a9 cachedPreciseAssetDuration;
@property (nonatomic) unsigned long long cachedVideoTrackCount;
@property (nonatomic) unsigned long long cachedAudioTrackCount;
@property (nonatomic) _Bool cacheWillDieDuringLoad;

- (struct CGAffineTransform)transform;
- (float)frameRate;
- (_Bool)isUnsupportedAudio;
- (void)cacheTrackInformationWithAVAsset:(id)arg1;
- (void)requestAVAssetAsyncWithAsset:(id)arg1 needsDerivativeMedia:(_Bool)arg2 frameRate:(float)arg3 completion:(CDUnknownBlockType)arg4;
- (int)durationAt30fpsWithAssetDuration:(double)arg1;
- (_Bool)isOriginalHEVC4k;
- (_Bool)hasAudibleCharacteristicWithIsMissing:(_Bool)arg1;
- (struct CGSize)naturalSizeWithIsMissing:(_Bool)arg1 asset:(id)arg2;
- (_Bool)hasVideoTracks;
- (_Bool)hasAudioTracks;

@end
