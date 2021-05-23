/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetTrack, AVPlayerItemTrackInternal;

@interface AVPlayerItemTrack : NSObject

{
    AVPlayerItemTrackInternal *_playerItemTrack;
}

@property (nonatomic, readonly) AVAssetTrack *assetTrack;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) float currentVideoFrameRate;

+ (id)playerItemTrackWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(_Bool)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (int)trackID;
- (id)loudnessInfo;
- (void)setLoudnessInfo:(id)arg1;
- (void)_attachToFigPlaybackItemOfPlayerItem:(id)arg1;
- (void)_respondToFigPlaybackItemBecomingReadyForInpection;
- (id)_playerItem;
- (id)videoEnhancementFilterOptions;
- (_Bool)disableColorMatching;
- (long long)activeHapticChannelIndex;
- (float)hapticVolume;
- (id)_initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 readyForInspection:(_Bool)arg2 trackID:(int)arg3 asset:(id)arg4 playerItem:(id)arg5;
- (id)_weakReferenceToPlayerItem;
- (void)_transferEnabledToFig;
- (void)_transferLoudnessInfoToFig;
- (void)_transferVideoEnhancementOptionsToFig;
- (void)_transferDisableColorMatchingToFig;
- (void)_transferActiveHapticChannelIndexToFig;
- (void)_transferHapticVolumeToFig;
- (void)_transferCachedValuesToFig;
- (id)fallbackTrack;
- (id)effectiveLoudnessInfo;
- (void)setVideoEnhancementFilterOptions:(id)arg1;
- (void)setDisableColorMatching:(_Bool)arg1;
- (void)setActiveHapticChannelIndex:(long long)arg1;
- (void)setHapticVolume:(float)arg1;

@end
