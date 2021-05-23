/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDMediaRep.h>

@class CALayer, NSString, TSDMovieInfo, TSKAVPlayerController;

@protocol TSDAudioHUDController;

@interface TSDAudioRep : TSDMediaRep

{
    TSKAVPlayerController *mPlayerController;
    CALayer *mPlayPauseButtonLayer;
    CALayer *mAudioImageLayer;
    float mDynamicVolume;
    _Bool mIsChangingDynamicVolume;
    id <TSDAudioHUDController> mAudioHUDController;
}

@property (nonatomic, readonly) TSDMovieInfo *movieInfo;
@property (nonatomic, readonly) TSKAVPlayerController *playerController;
@property (nonatomic, readonly) id <TSDAudioHUDController> audioHUDController;
@property (nonatomic, readonly) float volume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)containsPoint:(struct CGPoint)arg1;
- (Class)layerClass;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)willBeRemoved;
- (_Bool)isDraggable;
- (void)willBeginZooming;
- (_Bool)directlyManagesLayerContent;
- (void)processChangedProperty:(int)arg1;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)willBeginReadMode;
- (void)didEndZooming;
- (void)willUpdateLayer:(id)arg1;
- (void)updateLayerGeometryFromLayout:(id)arg1;
- (struct CGRect)boundsForStandardKnobs;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (_Bool)shouldShowKnobs;
- (_Bool)shouldShowSelectionHighlight;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (void)becameSelected;
- (void)becameNotSelected;
- (_Bool)shouldShowDragHUD;
- (_Bool)shouldShowSizesInRulers;
- (void)drawInContextWithoutEffects:(struct CGContext *)arg1 withContent:(_Bool)arg2 withStroke:(_Bool)arg3 withOpacity:(_Bool)arg4 forAlphaOnly:(_Bool)arg5 drawChildren:(_Bool)arg6;
- (_Bool)shouldShowMediaReplaceUI;
- (_Bool)shouldAllowReplacementFromPaste;
- (void)p_updateRepeatMode;
- (void)p_updateVolume;
- (void)p_updateStartTime;
- (void)p_updateEndTime;
- (_Bool)p_shouldPlayerControllerExistThroughoutSelection;
- (void)p_setupPlayerControllerIfNecessary;
- (void)p_teardownPlayerController;
- (_Bool)canResetMediaSize;
- (void)dynamicVolumeChangeDidBegin;
- (void)dynamicVolumeUpdateToValue:(float)arg1;
- (void)dynamicVolumeChangeDidEnd;
- (_Bool)p_shouldShowPlayPauseLayers;
- (_Bool)p_isPlaying;
- (void)p_updateButtonForPlaying:(_Bool)arg1 pressed:(_Bool)arg2;
- (_Bool)hitPlayPauseButtonWithPoint:(struct CGPoint)arg1;
- (_Bool)p_isEditingAnimations;
- (void)updatePlayButtonForPoint:(struct CGPoint)arg1;
- (_Bool)shouldAllowReplacementFromDrop;
- (_Bool)providesGuidesWhileAligning;
- (_Bool)exclusivelyProvidesGuidesWhileAligning;
- (id)textureWithContext:(id)arg1;

@end
