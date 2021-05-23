/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVMutableAudioMixInputParameters, AVMutableComposition, AVMutableCompositionTrack, NSArray, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CompositionTrackGroup : NSObject

{
    NSString *m_groupLabel;
    AVMutableCompositionTrack *m_videoTrack;
    NSMutableArray *m_videoSegments;
    AVMutableAudioMixInputParameters *m_audioInputParameters;
    AVMutableCompositionTrack *m_audioTrack;
    NSMutableArray *m_audioSegments;
    CDStruct_1b6d18a9 m_cursor;
    CDStruct_1b6d18a9 m_cursorForMovieAudio;
    _Bool m_videoTrackInUse;
    _Bool m_shouldAddVolumePointsAsWorkaround;
    CDStruct_1b6d18a9 m_cursorAtLastVideoInsertion;
    CDStruct_1b6d18a9 m_timeOfLastVolumeChange;
    float m_volumeAtLastVolumeChange;
    float m_volumeChangePending;
    CDStruct_1b6d18a9 m_timeOfLastRequest;
    _Bool _isExporting;
    _Bool _seenSpeedClip;
    _Bool _seenMoreThanOneASBD;
    _Bool _isFlexMusic;
    NSDictionary *m_flexTrackInfoDict;
    NSString *_preferredAudioTimePitchAlgorithm;
    AVMutableComposition *_composition;
    NSString *_timePitchAlgorithm;
    NSMutableArray *_extraAudioTrackGroups;
    struct opaqueCMFormatDescription *_audioFormatDescription;
    CDStruct_1b6d18a9 m_fadeOutStart;
    CDStruct_1b6d18a9 m_fadeOutDuration;
    CDStruct_1b6d18a9 _lastRampToZeroEnd;
}

@property (nonatomic) NSString *timePitchAlgorithm;
@property (retain, nonatomic) NSMutableArray *extraAudioTrackGroups;
@property (retain, nonatomic) struct opaqueCMFormatDescription *audioFormatDescription;
@property (nonatomic) _Bool seenSpeedClip;
@property (nonatomic) _Bool seenMoreThanOneASBD;
@property (retain, nonatomic) AVMutableAudioMixInputParameters *audioParameters;
@property (retain, nonatomic) NSDictionary *fmTrackInfoDict;
@property (nonatomic) CDStruct_1b6d18a9 lastRampToZeroEnd;
@property (nonatomic) _Bool isFlexMusic;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) AVMutableCompositionTrack *videoTrack;
@property (nonatomic, readonly) NSArray *videoSegments;
@property (retain, nonatomic) AVMutableCompositionTrack *audioTrack;
@property (nonatomic, readonly) NSArray *audioSegments;
@property (retain, nonatomic) NSString *preferredAudioTimePitchAlgorithm;
@property (nonatomic, readonly) int actualVideoTrackID;
@property (nonatomic, readonly) int usableVideoTrackID;
@property (nonatomic, readonly) CDStruct_1b6d18a9 cursor;
@property (nonatomic, readonly) CDStruct_1b6d18a9 cursorAtLastVideoInsertion;
@property (nonatomic) CDStruct_1b6d18a9 timeOfLastVolumeChange;
@property (nonatomic) CDStruct_1b6d18a9 timeOfLastRequest;
@property (nonatomic) float volumeAtLastVolumeChange;
@property (nonatomic) float volumeChangePending;
@property (nonatomic) CDStruct_1b6d18a9 fadeOutStart;
@property (nonatomic) CDStruct_1b6d18a9 fadeOutDuration;
@property (retain, nonatomic) AVMutableComposition *composition;
@property (nonatomic) _Bool isExporting;

+ (id)visualDescriptionForSegments:(id)arg1;

- (void)dealloc;
- (id)description;
- (void)apply:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (_Bool)validate;
- (void)markDirty;
- (_Bool)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (_Bool)requestVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 fillEmptySegment:(_Bool)arg4;
- (_Bool)commitPendingVolumeToTime:(CDStruct_1b6d18a9)arg1;
- (void)applyPaddingToTime:(CDStruct_1b6d18a9)arg1;
- (void)applyAudioMixParameters:(id)arg1;
- (void)applyCompositionItemAsLoopedAudio:(id)arg1 forTimeRange:(CDStruct_e83c9415)arg2;
- (void)applyCompositionItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)removeExtraAudioTrackGroups;
- (_Bool)containsVideoSegments;
- (_Bool)containsAudioSegments;
- (void)resetVolumeState;
- (void)_updateIsFlexMusic:(id)arg1;
- (id)apply_version2_to_track:(id)arg1 withSegments:(id)arg2 assets:(id)arg3;
- (void)apply_version2:(id)arg1;
- (float)linearFadeOutValueForTime:(CDStruct_1b6d18a9)arg1;
- (float)setFadedVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (void)commitVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (_Bool)shouldCommitVolume:(float)arg1;
- (_Bool)containsSegments;
- (void)addExtraAudioTrackGroup:(id)arg1;
- (_Bool)asbd:(struct opaqueCMFormatDescription *)arg1 isEqualTo:(struct opaqueCMFormatDescription *)arg2;
- (void)applyCompositionItem:(id)arg1;
- (void)apply_version1;
- (_Bool)shouldAddVolumePointsAsWorkaround;
- (void)applyCompositionItem:(id)arg1 videoOnly:(_Bool)arg2;
- (void)applyCompositionItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 videoOnly:(_Bool)arg3;
- (void)applyFlexAudioMix:(id)arg1;
- (void)fixAVFoundationsMistake;

@end
