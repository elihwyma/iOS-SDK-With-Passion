/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class AVMutableAudioMix, AVMutableComposition, AVMutableVideoComposition, AVPlayerItem, JTClip, JTCompositionDuckingTimes, JTCompositionTrackGroup, NSMapTable, NSMutableArray, NSMutableDictionary;

@protocol JTCompositionClipsDataSource;

@interface JTComposition : NSObject

{
    NSMapTable *_clipCustomRendererMapTable;
    _Bool _needsUpdate;
    float _globalAudioVolume;
    AVMutableComposition *_avComposition;
    AVMutableVideoComposition *_videoComposition;
    AVMutableAudioMix *_audioMix;
    JTCompositionDuckingTimes *_compositionDuckingTimes;
    AVPlayerItem *_playerItem;
    AVPlayerItem *_avPlayerItem;
    JTCompositionTrackGroup *_trackGroupA;
    JTCompositionTrackGroup *_trackGroupB;
    NSMutableArray *_backgroundAudioTracks;
    NSMutableArray *_foregroundAudioTracks;
    NSMutableArray *_audioMixParameters;
    id <JTCompositionClipsDataSource> _clipsDataSource;
    NSMutableArray *_videoCompositionInstructions;
    long long _backgroundAudioTrackCount;
    long long _foregroundAudioTrackCount;
    JTClip *_liveTransformClip;
    NSMutableDictionary *_assetsUsed;
    struct CGSize _viewSize;
    struct CGSize _previousRenderSize;
    CDStruct_1b6d18a9 _duration;
    struct PVTransformAnimationInfo _liveCompositionTransform;
}

@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (retain, nonatomic) AVMutableComposition *avComposition;
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition;
@property (retain, nonatomic) AVMutableAudioMix *audioMix;
@property (nonatomic) CDStruct_1b6d18a9 duration;
@property (retain, nonatomic) AVPlayerItem *avPlayerItem;
@property (retain, nonatomic) JTCompositionTrackGroup *trackGroupA;
@property (retain, nonatomic) JTCompositionTrackGroup *trackGroupB;
@property (retain, nonatomic) NSMutableArray *backgroundAudioTracks;
@property (retain, nonatomic) NSMutableArray *foregroundAudioTracks;
@property (retain, nonatomic) NSMutableArray *audioMixParameters;
@property (retain, nonatomic) id <JTCompositionClipsDataSource> clipsDataSource;
@property (retain, nonatomic) NSMutableArray *videoCompositionInstructions;
@property (nonatomic) struct CGSize previousRenderSize;
@property (nonatomic) long long backgroundAudioTrackCount;
@property (nonatomic) long long foregroundAudioTrackCount;
@property (nonatomic) _Bool needsUpdate;
@property (retain, nonatomic) JTClip *liveTransformClip;
@property (nonatomic) struct PVTransformAnimationInfo liveCompositionTransform;
@property (retain, nonatomic) NSMutableDictionary *assetsUsed;
@property (nonatomic) float globalAudioVolume;
@property (retain, nonatomic) JTCompositionDuckingTimes *compositionDuckingTimes;
@property (nonatomic) struct CGSize viewSize;

- (void)dealloc;
- (void)update;
- (_Bool)validate;
- (void)playerItemDidReachEnd:(id)arg1;
- (id)initWithClipsDataSource:(id)arg1;
- (void)markDirty;
- (void)applyPlayerItemProperties;
- (void)noteEffectChangeForClip:(id)arg1;
- (void)useLiveTransformForClip:(id)arg1;
- (void)updateLiveTransformForClip:(id)arg1;
- (float)JT_preferredRenderScale;
- (_Bool)clipIsForegroundAudio:(id)arg1;
- (id)newInstructionGraphNodeForClip:(id)arg1 clipTransform:(struct CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(_Bool *)arg4 isContainedClip:(_Bool)arg5;
- (struct CGAffineTransform)clipTransform:(id)arg1;
- (id)instructionToShowClip:(id)arg1 withTrackID:(int)arg2 withTransform:(struct CGAffineTransform)arg3 timeRange:(CDStruct_e83c9415)arg4 requiresCARendering:(_Bool)arg5;
- (float)volumeForClip:(id)arg1;
- (id)instructionToShowImageWithClip:(id)arg1 withTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3 requiresCARendering:(_Bool)arg4;
- (id)makeAudioPointsArrayForClip:(id)arg1 shouldUseDuckingArrays:(_Bool)arg2;
- (CDStruct_e83c9415)sourceTimeRangeForClip:(id)arg1 endOfComposition:(CDStruct_1b6d18a9)arg2 projectStartTime:(CDStruct_1b6d18a9 *)arg3;
- (void)assetUsed:(id)arg1;
- (_Bool)addVolumeRampToTrackGroup:(id)arg1 forClip:(id)arg2 shouldUseDucking:(_Bool)arg3;
- (CDStruct_e83c9415)sourceTimeRangeForAudioClip:(id)arg1 endOfComposition:(CDStruct_1b6d18a9)arg2;
- (_Bool)assembleAudioCompositionTrackGroups:(id)arg1 audioItem:(id)arg2 clip:(id)arg3 shouldUseDucking:(_Bool)arg4 shouldLoopClipContents:(_Bool)arg5;
- (_Bool)writeVolumeRampToCompositionFromTrackGroup:(id)arg1 endOfComposition:(CDStruct_1b6d18a9)arg2;
- (_Bool)clipHasEnabledVoiceover:(id)arg1;
- (_Bool)emptySegments:(id)arg1;
- (void)removeTrackFromAudioMix:(int)arg1;
- (_Bool)removeTrackIfEmpty:(id)arg1;
- (void)logRemovedTrack:(id)arg1 trackID:(int)arg2;
- (void)setRenderScale;
- (void)logAddedTrack:(id)arg1 trackID:(int)arg2;
- (id)buildClipList;
- (id)foregroundAudioClips:(id)arg1;
- (void)addBackTracksIfRemoved;
- (void)updateCustomRendererMapForClip:(id)arg1;
- (_Bool)CARenderingRequiredForClip:(id)arg1;
- (CDStruct_e83c9415)compositionItemsForState:(id)arg1 compositionItem:(id *)arg2 backfillCompositionItem:(id *)arg3;
- (id)updateVideoAndAudioInstructionForState:(id)arg1 previousInstructions:(id)arg2 waitingForResource:(_Bool)arg3;
- (id)dissolveGraphNode:(CDStruct_e83c9415)arg1 from:(id)arg2 to:(id)arg3;
- (void)burnInPlaybackSettings:(id)arg1;
- (id)instructionToHideTrackID:(int)arg1 whileHidingTrackID:(int)arg2 timeRange:(CDStruct_e83c9415)arg3 requiresCARendering:(_Bool)arg4;
- (void)updateBackgroundAudioCompositionTracks:(CDStruct_1b6d18a9)arg1;
- (void)updateForegroundAudioCompositionTracks:(CDStruct_1b6d18a9)arg1 withClips:(id)arg2;
- (id)animojiCustomRendererPropsForClip:(id)arg1 currentCustomProperties:(id)arg2;
- (id)faceTrackingCustomRendererPropsForClip:(id)arg1 currentCustomProperties:(id)arg2;
- (void)rebuildCompositionInstructionsForVideoStillTitleCard:(id)arg1;
- (void)removeEmptyTracks;
- (void)updateRenderSizeIfNeeded;
- (void)refreshAVComposition;
- (void)finalizeVideoComposition;
- (void)setupVideoCompositionContext:(id)arg1;
- (CDStruct_e83c9415)timeRangeForClip:(id)arg1;
- (void)refreshCompositionInstructionsWithinRange:(CDStruct_e83c9415)arg1;
- (int)outputFrameRate;
- (struct CGSize)naturalSizeForClipAfterTransform:(id)arg1;
- (void)addAudioPointsToArray:(id)arg1 atFrameTime:(int)arg2 volume:(double)arg3;
- (id)AVComposition;
- (void)applyExportProperties;
- (void)clearPlayerItemProperties;
- (void)refreshEffectParameters:(id)arg1;

@end
