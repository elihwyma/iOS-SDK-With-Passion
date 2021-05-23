/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class NTKComplicationDisplayWrapperView, NTKFaceViewComplicationFactory, NTKInfinityController, NTKInfinityListing, UIColor, UILabel, UIView;

@interface NTKInfinityFaceView : NTKAVListingFaceBaseView

{
    unsigned int _tapToPlayGestureEnabled:1;
    unsigned int _tapPromptedVideoChange:1;
    UIView *_cornerView;
    UILabel *_reviewLabel;
    long long _previousDataMode;
    NTKFaceViewComplicationFactory *_faceViewComplicationFactory;
    NTKComplicationDisplayWrapperView *_touchWrapper;
    NTKInfinityController *_controller;
    NTKInfinityListing *_currentQueueListing;
    UIColor *_currentComplicationColor;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didAddSubview:(id)arg1;
- (void)_handleSingleTap:(id)arg1;
- (id)videoPlayerView;
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (id)_posterImageView;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_prepareForEditing;
- (void)_cleanupAfterEditing;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (_Bool)_supportsTimeScrubbing;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_layoutForegroundContainerView;
- (void)_updatePaused;
- (_Bool)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2;
- (double)_timeLabelAlphaForEditMode:(long long)arg1;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (_Bool)_wantsTimeTravelStatusModule;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (id)_nextListing;
- (void)_performPreloadVideoTask;
- (id)_onDeckPosterImageView;
- (void)_selectDefaultListing;
- (void)setTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5;
- (void)handleScreenBlanked;
- (id)_viewForEditOption:(id)arg1;
- (double)_rightSideMarginForDigitalTimeHeroPosition;
- (_Bool)_shouldFadeToTransitionView;
- (id)_complicationDisplayWrapperForTouch:(id)arg1;
- (void)_updateReviewLabel;
- (id)_editingComplicationColor;
- (void)_updateComplicationWithColor:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_shouldQueueKeepAlive;
- (id)_posterImageViewForStyle:(unsigned long long)arg1;
- (id)_currentPosterImageView;
- (void)updateReviewDirection:(id)arg1;
- (double)_adjustmentForBottomTimeLayout;

@end
