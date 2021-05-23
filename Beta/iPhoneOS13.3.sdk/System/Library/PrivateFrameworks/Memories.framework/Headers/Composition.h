/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class AVMutableAudioMix, AVMutableComposition, AVMutableCompositionTrack, AVMutableVideoComposition, AVPlayerItem, CompositionDuckingTimes, CompositionTrackGroup, NSArray, NSMutableArray, NSMutableDictionary, Project;

__attribute__((visibility("hidden")))
@interface Composition : NSObject

{
    Project *m_project;
    NSArray *m_editList;
    AVMutableComposition *m_avComposition;
    AVPlayerItem *m_avPlayerItem;
    CompositionTrackGroup *m_trackGroupA;
    CompositionTrackGroup *m_trackGroupB;
    CompositionTrackGroup *m_backgroundAudioTrackGroup[1];
    CompositionTrackGroup *m_foregroundAudioTrackGroup[3];
    CompositionTrackGroup *m_transitionAudioTrackGroup;
    CompositionTrackGroup *m_cutawayTrackGroup;
    CompositionTrackGroup *m_alternativeTrackGroupA;
    CompositionTrackGroup *m_alternativeTrackGroupB;
    AVMutableCompositionTrack *m_audioWorkaroundEmptyTrack;
    NSArray *m_transitionInputs;
    AVMutableVideoComposition *m_videoComposition;
    NSMutableArray *m_videoCompositionInstructions;
    NSMutableArray *m_audioMixParameters;
    AVMutableAudioMix *m_audioMix;
    float m_globalAudioVolume;
    CompositionDuckingTimes *m_compositionDuckingTimes;
    long long m_backgroundAudioTrackCount;
    long long m_foregroundAudioTrackCount;
    struct CGSize m_previousRenderSize;
    unsigned int m_setNeedsUpdate:1;
    _Bool m_useShortenedCompositionToEditClip;
    int m_videotrackAStartAt;
    int m_videotrackBStartAt;
    NSMutableDictionary *m_assetsUsed;
    _Bool _isExporting;
    _Bool _fullScreen;
    _Bool _isDynamicPlayBack;
    _Bool _hasMemoryConstraints;
    _Bool _fullScreenPlaybackOnExternalDisplay;
    float _dynamicScale;
    double _aspect;
    CDUnknownBlockType _compositionDuckingTimesCreationBlock;
    NSMutableArray *_switchEffects;
    NSMutableArray *_titleEffectCopies;
    struct CGSize _viewSize;
}

@property (nonatomic, readonly) Project *project;
@property (retain) NSMutableArray *switchEffects;
@property (retain) NSMutableArray *titleEffectCopies;
@property (nonatomic, readonly) AVPlayerItem *playerItem;
@property (nonatomic, readonly) AVMutableComposition *AVComposition;
@property (nonatomic, readonly) AVMutableVideoComposition *videoComposition;
@property (nonatomic, readonly) AVMutableAudioMix *audioMix;
@property (nonatomic) float globalAudioVolume;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic) NSArray *editList;
@property (retain, nonatomic) CompositionDuckingTimes *compositionDuckingTimes;
@property (nonatomic) _Bool useShortenedCompositionToEditClip;
@property (nonatomic, readonly) int videotrackAStartAt;
@property (nonatomic, readonly) int videotrackBStartAt;
@property (nonatomic) _Bool isExporting;
@property (nonatomic) struct CGSize viewSize;
@property (nonatomic) _Bool fullScreen;
@property (nonatomic) _Bool isDynamicPlayBack;
@property (nonatomic) float dynamicScale;
@property (nonatomic) double aspect;
@property (nonatomic) _Bool hasMemoryConstraints;
@property (nonatomic) _Bool fullScreenPlaybackOnExternalDisplay;
@property (retain, nonatomic) NSArray *transitionInputs;
@property (copy, nonatomic) CDUnknownBlockType compositionDuckingTimesCreationBlock;

- (id)init;
- (void)dealloc;
- (void)update;
- (_Bool)validate;
- (void)refresh:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)markDirty;
- (void)applyPlayerItemProperties;
- (float)volumeForClip:(id)arg1;
- (id)makeAudioPointsArrayForClip:(id)arg1 shouldUseDuckingArrays:(_Bool)arg2;
- (CDStruct_e83c9415)sourceTimeRangeForClip:(id)arg1 endOfComposition:(CDStruct_1b6d18a9)arg2 projectStartTime:(CDStruct_1b6d18a9 *)arg3;
- (void)assetUsed:(id)arg1;
- (_Bool)addVolumeRampToTrackGroup:(id)arg1 forClip:(id)arg2 shouldUseDucking:(_Bool)arg3;
- (CDStruct_e83c9415)sourceTimeRangeForAudioClip:(id)arg1 endOfComposition:(CDStruct_1b6d18a9)arg2;
- (_Bool)writeVolumeRampToCompositionFromTrackGroup:(id)arg1 endOfComposition:(CDStruct_1b6d18a9)arg2;
- (_Bool)emptySegments:(id)arg1;
- (void)removeTrackFromAudioMix:(int)arg1;
- (_Bool)removeTrackIfEmpty:(id)arg1;
- (void)logRemovedTrack:(id)arg1 trackID:(int)arg2;
- (void)setRenderScale;
- (void)logAddedTrack:(id)arg1 trackID:(int)arg2;
- (void)addBackTracksIfRemoved;
- (_Bool)CARenderingRequiredForClip:(id)arg1;
- (CDStruct_e83c9415)compositionItemsForState:(id)arg1 compositionItem:(id *)arg2 backfillCompositionItem:(id *)arg3;
- (void)burnInPlaybackSettings:(id)arg1;
- (id)instructionToHideTrackID:(int)arg1 whileHidingTrackID:(int)arg2 timeRange:(CDStruct_e83c9415)arg3 requiresCARendering:(_Bool)arg4;
- (void)updateBackgroundAudioCompositionTracks:(CDStruct_1b6d18a9)arg1;
- (void)removeEmptyTracks;
- (void)finalizeVideoComposition;
- (void)refreshCompositionInstructionsWithinRange:(CDStruct_e83c9415)arg1;
- (int)outputFrameRate;
- (struct CGSize)naturalSizeForClipAfterTransform:(id)arg1;
- (void)addAudioPointsToArray:(id)arg1 atFrameTime:(int)arg2 volume:(double)arg3;
- (void)clearPlayerItemProperties;
- (void)setProject:(id)arg1 frameDuration:(CDStruct_1b6d18a9)arg2 viewSize:(struct CGSize)arg3 forFullScreen:(_Bool)arg4;
- (void)discardPlayerItem;
- (_Bool)shouldInsertASilentAudioTrackAsWorkaround;
- (void)noteEffectChanged:(id)arg1;
- (void)noteTitleScaleChanged:(id)arg1;
- (CDStruct_1b6d18a9)extensionForTransitionsSupportingEatLeftRight:(id)arg1 leftSideOfTransition:(_Bool)arg2 splitClip:(_Bool *)arg3;
- (CDStruct_1b6d18a9)transitionExtensionForClip:(id)arg1 left:(_Bool)arg2 splitClip:(_Bool *)arg3;
- (id)transitionTopTrack;
- (id)transitionBottomTrack;
- (id)newInstructionGraphNodeForClip:(id)arg1 clipTransform:(struct CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(_Bool *)arg4 isContainedClip:(_Bool)arg5 applyTitleEffect:(_Bool)arg6;
- (id)instructionToShowClip:(id)arg1 withTrackID:(int)arg2 withTransform:(struct CGAffineTransform)arg3 timeRange:(CDStruct_e83c9415)arg4 requiresCARendering:(_Bool)arg5 isFreezeFrame:(_Bool)arg6 applyTitleEffect:(_Bool)arg7;
- (void)addVideoInstructionsForTransition:(id)arg1 forRange:(CDStruct_e83c9415)arg2 toInstructions:(id)arg3 previousTrackID:(int)arg4 previousClip:(id)arg5 previousClipRequiresCA:(_Bool)arg6 nextTrackID:(int)arg7 nextClip:(id)arg8 nextClipRequiresCA:(_Bool)arg9 cutawaysIntersection:(id)arg10;
- (_Bool)cutIsContiguous:(id)arg1 transition:(id)arg2 next:(id)arg3;
- (void)addTransitionSoundsForState:(id)arg1;
- (id)instructionToShowImageWithClip:(id)arg1 withTransform:(struct CGAffineTransform)arg2 timeRange:(CDStruct_e83c9415)arg3 requiresCARendering:(_Bool)arg4 applyTitleEffect:(_Bool)arg5;
- (void)addTitleSoundsForState:(id)arg1;
- (void)addAlternatesForClip:(id)arg1 toInstruction:(id)arg2 trackID:(int)arg3;
- (CDStruct_1b6d18a9)fadeToBlackStartCMTime;
- (CDStruct_1b6d18a9)fadeToBlackDurationCMTime;
- (_Bool)assembleAudioCompositionTrackGroups:(id *)arg1 destinationTrackGroupCount:(long long)arg2 audioItem:(id)arg3 clip:(id)arg4 shouldUseDucking:(_Bool)arg5 shouldLoopClipContents:(_Bool)arg6;
- (float)percentBetweenRange:(CDStruct_e83c9415)arg1 forTime:(CDStruct_1b6d18a9)arg2 firstRange:(CDStruct_e83c9415 *)arg3 secondRange:(CDStruct_e83c9415 *)arg4;
- (id)splitCompositionInstruction:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2 options:(int)arg3;
- (void)compositeAlternateNodes:(id)arg1 intoOriginalInstruction:(id)arg2;
- (struct CGAffineTransform)transformForCutaway:(id)arg1 underlayTransform:(struct CGAffineTransform *)arg2 forSize:(struct CGSize)arg3;
- (void)addCutaway:(id)arg1 toInstruction:(id)arg2 transform:(struct CGAffineTransform)arg3 underlayTransform:(struct CGAffineTransform)arg4;
- (id)newInstructionGraphNodeForClipTitleEffect:(id)arg1 inputIGNode:(id)arg2;
- (id)splitCompositionState:(id)arg1 forCutaways:(id)arg2 searchIndex:(int *)arg3 projectDuration:(CDStruct_1b6d18a9)arg4;
- (void)updateVideoAndAudioInstructionForState:(id)arg1 cutSwaped:(_Bool)arg2 originalState:(id)arg3;
- (void)updateCutawayCompositionTracks:(CDStruct_1b6d18a9)arg1;
- (void)updateInstructionsWithTitles:(id)arg1;
- (void)updateForegroundAudioCompositionTracks:(CDStruct_1b6d18a9)arg1;
- (_Bool)insertASilentAudioTrackAsWorkaround;
- (id)splitCompositionState:(id)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)addIntersectingCutaways:(id)arg1 toInstruction:(id)arg2;
- (id)instructionToTransitionTracksForRange:(CDStruct_e83c9415)arg1 requiresCARendering:(_Bool)arg2 incomingClipIsNarrower:(_Bool)arg3 incomingClipRequiresBG:(_Bool)arg4 outgoingClipRequiresBG:(_Bool)arg5 incomingClipIsZoomed:(_Bool)arg6 outgoingClipIsZoomed:(_Bool)arg7 transitionClip:(id)arg8 applyTitleEffect:(_Bool)arg9;
- (id)cutawaysIntersectingWithClip:(id)arg1 previousTransition:(id)arg2 nextTransition:(id)arg3 cutaways:(id)arg4;
- (void)rebuildCompositionInstructionsForMovieKenBurnsExtra:(id)arg1;
- (void)rebuildCompositionInstructionsForClip:(id)arg1;
- (CDStruct_e83c9415)timeRangeForClipIncludingTransitions:(id)arg1;
- (id)newInstructionGraphNodeToShowImageWithClip:(id)arg1 clipTransform:(struct CGAffineTransform)arg2 isContainedClip:(_Bool)arg3;
- (id)newInstructionGraphNodeToShowMultiUpClip:(id)arg1 clipTransform:(struct CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(_Bool *)arg4 applyTitleEffect:(_Bool)arg5;
- (id)newInstructionGraphNodeToShowGeneratorClip:(id)arg1;
- (id)newInstructionGraphNodeToShowMovieClip:(id)arg1 clipTransform:(struct CGAffineTransform)arg2 compositionTrackID:(int)arg3;
- (id)newInstructionGraphNodeToShowKenBurnsEffect:(id)arg1 withInfo:(id)arg2 inputNode:(id)arg3;
- (struct CGAffineTransform)transformKBForVisibleRect:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 aspect:(double)arg3;
- (void)splitCompositionInstructionListAtTime:(CDStruct_1b6d18a9)arg1 options:(int)arg2;
- (void)setDynamicPlayBack:(_Bool)arg1;
- (void)lowerDynamicResolution;
- (void)raiseDynamicResolution;
- (id)newInstructionGraphNodeToShowIrisMovieClip:(id)arg1 clipTransform:(struct CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(_Bool *)arg4 applyTitleEffect:(_Bool)arg5;
- (void)checkIt:(id)arg1 timeRange:(CDStruct_e83c9415)arg2;

@end
