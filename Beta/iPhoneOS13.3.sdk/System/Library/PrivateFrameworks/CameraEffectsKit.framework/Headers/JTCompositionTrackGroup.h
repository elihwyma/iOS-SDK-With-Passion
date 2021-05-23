/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class AVMutableAudioMixInputParameters, AVMutableComposition, AVMutableCompositionTrack, NSDictionary, NSMutableArray, NSString;

@interface JTCompositionTrackGroup : NSObject

{
    _Bool _isExporting;
    _Bool _seenSpeedClip;
    _Bool _seenMoreThanOneASBD;
    _Bool _isFlexMusic;
    _Bool _videoTrackInUse;
    float _volumeAtLastVolumeChange;
    float _volumeChangePending;
    int _timeScale;
    NSString *_label;
    AVMutableCompositionTrack *_videoTrack;
    AVMutableCompositionTrack *_audioTrack;
    NSMutableArray *_audioSegments;
    AVMutableAudioMixInputParameters *_audioParameters;
    NSString *_preferredAudioTimePitchAlgorithm;
    AVMutableComposition *_composition;
    NSString *_timePitchAlgorithm;
    NSMutableArray *_extraAudioTrackGroups;
    struct opaqueCMFormatDescription *_audioFormatDescription;
    NSDictionary *_fmTrackInfoDict;
    NSMutableArray *_videoSegments;
    CDStruct_1b6d18a9 _cursor;
    CDStruct_1b6d18a9 _cursorAtLastVideoInsertion;
    CDStruct_1b6d18a9 _timeOfLastVolumeChange;
    CDStruct_1b6d18a9 _timeOfLastRequest;
    CDStruct_1b6d18a9 _fadeOutStart;
    CDStruct_1b6d18a9 _fadeOutDuration;
    CDStruct_1b6d18a9 _lastRampToZeroEnd;
    CDStruct_1b6d18a9 _cursorForMovieAudio;
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
@property (nonatomic, readonly) CDStruct_1b6d18a9 cursorForMovieAudio;
@property (nonatomic) int timeScale;
@property (nonatomic) _Bool videoTrackInUse;
@property (retain, nonatomic) NSMutableArray *videoSegments;
@property (retain, nonatomic) NSMutableArray *audioSegments;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) AVMutableCompositionTrack *videoTrack;
@property (retain, nonatomic) AVMutableCompositionTrack *audioTrack;
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
- (_Bool)validate;
- (void)markDirty;
- (id)initWithLabel:(id)arg1 timeScale:(int)arg2;
- (_Bool)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3;
- (_Bool)requestVolume:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (_Bool)requestVolumeRampFromStartVolume:(float)arg1 toEndVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 fillEmptySegment:(_Bool)arg4;
- (_Bool)commitPendingVolumeToTime:(CDStruct_1b6d18a9)arg1;
- (void)applyPaddingToTime:(CDStruct_1b6d18a9)arg1;
- (void)applyAudioMixParameters:(id)arg1;
- (void)applyCompositionItemAsLoopedAudio:(id)arg1 forTimeRange:(CDStruct_e83c9415)arg2;
- (void)applyCompositionItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)applyCompositionItem:(id)arg1 skipAudio:(_Bool)arg2;
- (void)removeExtraAudioTrackGroups;
- (_Bool)containsVideoSegments;
- (_Bool)containsAudioSegments;
- (void)resetVolumeState;
- (void)_updateIsFlexMusic:(id)arg1;
- (void)applyCompositionItem:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 skipAudio:(_Bool)arg3;
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

@end
