/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVWeakReference, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerItemTrackInternal : NSObject

{
    AVWeakReference *weakReferenceToPlayerItem;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    _Bool figPlaybackItemIsReadyForInspection;
    AVAsset *asset;
    int trackID;
    NSString *videoFieldMode;
    NSDictionary *loudnessInfo;
    NSDictionary *videoEnhancementFilterOptions;
    _Bool enabled;
    _Bool enabledWasSet;
    _Bool disableColorMatching;
    _Bool disableColorMatchingWasSet;
    long long activeHapticChannelIndex;
    _Bool activeHapticChannelIndexWasSet;
    float hapticVolume;
    _Bool hapticVolumeWasSet;
}

@end
