/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDMediaRep.h>

@class AVAsset, AVPlayerLayer, CALayer, NSString, TSDButtonKnob, TSDFrameRep, TSDMovieInfo, TSKAVPlayerController;

@interface TSDMovieRep : TSDMediaRep

{
    TSKAVPlayerController *mPlayerController;
    _Bool mCurrentlyObservingPlayerLayer;
    _Bool mPlayerLayerShouldBeDisplayed;
    AVPlayerLayer *mPlayerLayer;
    CALayer *mLayerToStroke;
    CALayer *mMovieReflectionLayer;
    CALayer *mMovieReflectionMaskLayer;
    AVPlayerLayer *mReflectionPlayerLayer;
    CALayer *mReflectionPlayerStrokeMaskLayer;
    _Bool mPreventDisposeOfPlayerLayer;
    CALayer *mPlayerStrokeLayer;
    CALayer *mReflectionPlayerStrokeLayer;
    TSDFrameRep *mReflectionFrameRep;
    CALayer *mReflectionFrameMaskLayer;
    AVAsset *mAssetForPlayability;
    _Bool mDidCheckPlayability;
    _Bool mIsPlayable;
    TSDButtonKnob *mPlayButtonKnob;
    _Bool mPlayButtonKnobVisible;
    _Bool mDidCancelUpdatingPlayButtonVisibility;
    _Bool mInReadMode;
    struct CGImage *mAlternatePosterImage;
    unsigned long long mIsChangingDynamicVisibleTimeCount;
    float mDynamicVolume;
    _Bool mIsChangingDynamicVolume;
    _Bool mNeedsTeardownPlayerController;
}

@property (nonatomic, readonly) TSDButtonKnob *p_playButtonKnob;
@property (nonatomic, readonly) _Bool p_playButtonFitsInFrame;
@property (nonatomic, readonly) TSDMovieInfo *movieInfo;
@property (nonatomic, readonly, getter=isPlayable) _Bool playable;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) _Bool shouldSingleTapPlay;
@property (nonatomic) struct CGImage *alternatePosterImage;
@property (nonatomic, readonly) double visibleTime;
@property (nonatomic, readonly) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)willBeRemoved;
- (id)playerController;
- (_Bool)isDraggable;
- (void)screenScaleDidChange;
- (_Bool)directlyManagesLayerContent;
- (void)didUpdateLayer:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)willBeginReadMode;
- (void)willEndReadMode;
- (_Bool)wantsToHandleTapsWhenLocked;
- (_Bool)handleSingleTapAtPoint:(struct CGPoint)arg1;
- (void)willUpdateLayer:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (id)additionalLayersUnderLayer;
- (id)additionalLayersOverLayer;
- (void)drawInLayerContext:(struct CGContext *)arg1;
- (void)addKnobsToArray:(id)arg1;
- (unsigned long long)enabledKnobMask;
- (_Bool)directlyManagesVisibilityOfKnob:(id)arg1;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)updateFromLayout;
- (void)becameSelected;
- (void)becameNotSelected;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (void)p_disposeStrokeLayer;
- (void)p_disposeMaskLayer;
- (void)i_updateFrameRep;
- (_Bool)shouldShowMediaReplaceUI;
- (void)p_createMaskLayerForLayer:(id)arg1;
- (void)p_updateStrokeLayerForStroke:(id)arg1 repLayer:(id)arg2;
- (void)p_disposeReflectionStrokeLayers;
- (void)disposeReflectionLayer;
- (void)createReflectionLayer;
- (void)p_setupReflectionPlayerLayerIfNecessary;
- (void)p_drawReflectionStrokeInContext:(struct CGContext *)arg1;
- (void)p_drawStrokeInContext:(struct CGContext *)arg1;
- (void)p_setupShapePlayerStrokeLayer;
- (void)p_setupShapeReflectionPlayerStrokeLayer;
- (void)p_setupTilingPlayerStrokeLayer;
- (void)p_setupTilingReflectionPlayerStrokeLayer;
- (void)p_createReflectionPlayerStrokeMaskLayer;
- (void)p_checkAndsyncTilingLayerState:(_Bool)arg1;
- (void)p_setupPlayerStrokeLayers:(_Bool)arg1;
- (id)playerStrokeLayer;
- (id)reflectionPlayerStrokeLayer;
- (void)p_arrangeLayerVisibility:(id)arg1;
- (_Bool)p_needsTilingLayerForStroke:(id)arg1;
- (void)p_setupStrokeLayers:(_Bool)arg1 needsMaskLayer:(_Bool)arg2 isFrame:(_Bool)arg3;
- (void)p_teardownPlayerControllerIfNeeded;
- (void)p_updateMovieReflectionMaskLayer;
- (id)movieLayout;
- (void)p_setPositionAndBoundsIfDifferent:(id)arg1 position:(struct CGPoint)arg2 bounds:(struct CGRect)arg3;
- (struct CGRect)p_strokeFrameForLayerFrame:(struct CGRect)arg1;
- (void)p_placeReflectionPlayerLayer:(struct CGRect)arg1 transform:(struct CGAffineTransform)arg2;
- (void)p_updatePlayButtonVisibility;
- (void)p_updateReflectionFrameRep;
- (void)p_drawInContext:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(double)arg4 withMask:(_Bool)arg5 forShadowOrHitTest:(_Bool)arg6;
- (void)p_commonDrawStrokeInContext:(struct CGContext *)arg1;
- (id)p_shapeLayerForPlayerStroke;
- (void)p_applyBasicStrokeToLayer:(id)arg1 layer:(id)arg2 bounds:(struct CGRect)arg3;
- (id)p_shapeLayerForReflectionStroke;
- (void)p_drawReflectionGradientIntoMovieReflectionLayer:(struct CGContext *)arg1 reflectionSize:(struct CGSize)arg2;
- (void)p_drawPosterImageInContext:(struct CGContext *)arg1;
- (void)p_setNeedsTeardownPlayerControllerOnUpdateLayer;
- (void)p_stopUpdatingUIStateForMoviePlayability;
- (void)p_updateUIStateForMoviePlayability;
- (void)p_updateRepeatMode;
- (void)p_updateVolume;
- (void)p_updateStartTime;
- (void)p_updateEndTime;
- (_Bool)p_shouldPlayerControllerExistThroughoutSelection;
- (void)p_setupPlayerControllerIfNecessary;
- (void)p_addPlayButtonToKnobs:(id)arg1;
- (void)p_cancelUpdatingUIStateForMoviePlayability;
- (void)p_teardownPlayerController;
- (void)p_setupPlayerLayerIfNecessary;
- (_Bool)canResetMediaSize;
- (void)p_hideReflectionLayer;
- (void)p_showReflectionLayer;
- (id)p_tilingLayerForPlayerStroke;
- (id)p_tilingLayerForReflectionStroke;
- (void)setShapeReflectionPlayerStrokeLayer:(id)arg1;
- (void)p_playForKnob;
- (void)p_togglePlaying;
- (void)dynamicVisibleTimeChangeDidBegin;
- (void)dynamicVisibleTimeUpdateToValue:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dynamicVisibleTimeChangeDidEnd;
- (void)dynamicVolumeChangeDidBegin;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (void)dynamicVolumeChangeDidEnd;

@end
