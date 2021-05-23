/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMapTable;

@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUAggregateDictionaryTracer : NSObject

{
    _Bool __streamedVideoDidStartPlaying;
    NSMapTable *__browsingViewModelTracers;
    id <PUDisplayAsset> __lastViewedAsset;
    NSDate *__lastPlayStartDate;
    id <PUDisplayAsset> __lastPlayedAsset;
    long long __assetPlayCount;
    id <PUDisplayAsset> __streamedVideo;
    double __streamedVideoBeginTime;
    long long __streamedVideoStallCount;
    long long __oneUpPresentationOrigin;
    id <PUDisplayAsset> __lastViewedAssetPerOrigin;
}

@property (nonatomic, readonly) NSMapTable *_browsingViewModelTracers;
@property (weak, nonatomic, setter=_setLastViewedAsset:) id <PUDisplayAsset> _lastViewedAsset;
@property (retain, nonatomic, setter=_setLastPlayStartDate:) NSDate *_lastPlayStartDate;
@property (weak, nonatomic, setter=_setLastPlayedAsset:) id <PUDisplayAsset> _lastPlayedAsset;
@property (nonatomic, setter=_setAssetPlayCount:) long long _assetPlayCount;
@property (weak, nonatomic, setter=_setStreamedVideo:) id <PUDisplayAsset> _streamedVideo;
@property (nonatomic, setter=_setStreamedVideoDidStartPlaying:) _Bool _streamedVideoDidStartPlaying;
@property (nonatomic, setter=_setStreamedVideoBeginTime:) double _streamedVideoBeginTime;
@property (nonatomic, setter=_setStreamedVideoStallCount:) long long _streamedVideoStallCount;
@property (nonatomic) long long _oneUpPresentationOrigin;
@property (retain, nonatomic) id <PUDisplayAsset> _lastViewedAssetPerOrigin;

+ (id)sharedTracer;

- (id)init;
- (void)userStartedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)userStoppedViewingCurrentAssetOfBrowsingViewModel:(id)arg1 inContext:(id)arg2;
- (void)invalidateContext:(id)arg1;
- (void)userBrowsedOneUpFor:(double)arg1;
- (void)userViewedPhotoInOneUpFor:(double)arg1;
- (void)userViewedHDRPhotoInOneUpFor:(double)arg1;
- (void)userViewedAssetInOneUp:(id)arg1;
- (void)userWillPlayAssetInOneUp:(id)arg1;
- (void)userDidPlayAssetInOneUp:(id)arg1;
- (void)vitalityPlayedForAssetInOneUp:(id)arg1;
- (void)streamedVideoPlaybackBegan:(id)arg1;
- (void)streamedVideoPlaybackStartedActuallyPlaying:(id)arg1;
- (void)streamedVideoPlaybackStalled:(id)arg1;
- (void)streamedVideoPlaybackEnded;
- (long long)_assetTypeForAsset:(id)arg1;
- (id)_browsingViewModelTracerForBrowsingViewModel:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)userStartedViewingCollection:(id)arg1 withListViewItemSelectionTrackerKey:(struct __CFString *)arg2;
- (void)userDidEnterOneUpFromOrigin:(long long)arg1;

@end
