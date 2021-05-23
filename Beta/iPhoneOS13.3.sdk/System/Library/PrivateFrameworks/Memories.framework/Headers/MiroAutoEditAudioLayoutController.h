/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroAutoEditLogger, MiroMemory, NSArray, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEditAudioLayoutController : NSObject

{
    Project *_project;
    MiroMemory *_activeMemory;
    NSArray *_layoutClips;
    MiroAutoEditLogger *_logger;
    CDStruct_1b6d18a9 _lastBeatTime;
}

@property (nonatomic) CDStruct_1b6d18a9 lastBeatTime;
@property (retain, nonatomic) Project *project;
@property (nonatomic) MiroMemory *activeMemory;
@property (retain, nonatomic) NSArray *layoutClips;
@property (retain, nonatomic) MiroAutoEditLogger *logger;

- (void)applyJAndLCuts;
- (void)applyAudioFadeHandles;
- (void)rollCutsToBeats;
- (void)applyClipVolumes;
- (void)applyBackgroundAudioVolume;
- (id)_applyFrozenVolumeAndReturnRemainingItems;
- (void)_applyComputedVolumesForClips:(id)arg1;
- (void)_enumerateClipsWithAudio:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)analyzeLoudness:(id)arg1;
- (_Bool)_hasVoiceAndFacesForClip:(id)arg1 gatherLoudness:(id *)arg2 peak:(id *)arg3 voiceRanges:(id *)arg4;
- (unsigned long long)_computeMuteStateForClip:(id)arg1 hasAnalysis:(_Bool)arg2 hasVoice:(_Bool)arg3 hasVoiceAndFaces:(_Bool)arg4;
- (void)_computeVolumesForClip:(id)arg1 loudnessValues:(id)arg2 peakValues:(id)arg3 returnNormalVolume:(float *)arg4 returnDimmedVolume:(float *)arg5;
- (_Bool)_clipLimitsRoll:(id)arg1;
- (id)_onsetDrivenInterestingBeatsForTime:(CDStruct_1b6d18a9)arg1 metadataDict:(id)arg2;
- (id)_segmentAndBeatsBasedInterestingBeatsForTime:(CDStruct_1b6d18a9)arg1 metadataDict:(id)arg2;
- (id)_rollCutsToBeatsWithGranularity:(id)arg1 excludingTimes:(id)arg2;
- (id)_interestingBeatTimedMetaItemsForFlexAudioClip:(id)arg1 forFrameTime:(int)arg2 withGranularity:(id)arg3;
- (_Bool)_attemptToRollEditFromTime:(int)arg1 toTime:(int)arg2 firstClip:(id)arg3 secondClip:(id)arg4 failureReasons:(id)arg5 allowSlack:(_Bool)arg6;
- (unsigned long long)indexOfClipInLayoutClips:(id)arg1;
- (void)applyAudioPolishToProject:(id)arg1 activeMemory:(id)arg2 layoutClips:(id)arg3;
- (id)_timedMetadataItemAtTime:(CDStruct_1b6d18a9)arg1 forFlexAudioClip:(id)arg2 withIdentifier:(id)arg3;

@end
