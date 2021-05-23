/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MiroSmartMusicUtilities : NSObject

+ (double)normalizeGainForRendition:(id)arg1;
+ (id)metadataItemAtTime:(CDStruct_1b6d18a9)arg1 fromMetadataItems:(id)arg2 findNearest:(_Bool)arg3;
+ (id)beatMetadataItemForBeatIndex:(long long)arg1 andBarIndex:(long long)arg2 nearBeatMetadataItem:(id)arg3 fromBeatMetadataItems:(id)arg4;
+ (double)averageBarDurationForFlexAudioClipInSeconds:(id)arg1;
+ (id)_peakAndLoudnessForRendition:(id)arg1;
+ (id)metadataItemAtTime:(CDStruct_1b6d18a9)arg1 fromMetadataItems:(id)arg2;
+ (CDStruct_1b6d18a9)averageBarDurationForFlexAudioClip:(id)arg1;
+ (CDStruct_1b6d18a9)durationOfOutroForFlexAudioClip:(id)arg1;
+ (CDStruct_1b6d18a9)durationOfIntroForFlexAudioClip:(id)arg1;

@end
