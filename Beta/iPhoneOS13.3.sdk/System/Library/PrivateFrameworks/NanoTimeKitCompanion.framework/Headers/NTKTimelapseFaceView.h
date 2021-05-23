/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKAVListingFaceBaseView.h>

@class NTKUtilityComplicationFactory, UIColor, UITapGestureRecognizer, UIView;

@interface NTKTimelapseFaceView : NTKAVListingFaceBaseView

{
    unsigned long long _theme;
    UIView *_cornerView;
    UITapGestureRecognizer *_tapToPlayGesture;
    NTKUtilityComplicationFactory *_complicationFactory;
    unsigned long long _deviceSizeClass;
    UIColor *_foregroundColor;
    UIColor *_shadowColor;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
    unsigned int _isUsingLegibility:1;
    unsigned int _isComplicationColorApplied:1;
}

- (void)dealloc;
- (void)layoutSubviews;
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;
- (id)_posterImageView;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)_loadSnapshotContentViews;
- (void)_unloadSnapshotContentViews;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2;
- (_Bool)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_prepareForEditing;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (void)_loadLayoutRules;
- (void)_applyDataMode;
- (void)_handleWristRaiseScreenWake;
- (void)_handleOrdinaryScreenWake;
- (unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (void)_setDateAttributes:(id)arg1 animated:(_Bool)arg2;
- (void)_configureComplicationFactory;
- (long long)_utilitySlotForSlot:(id)arg1;
- (_Bool)_timeLabelUsesLegibility;
- (void)_applyComplicationContentSpecificAttributesAnimated:(_Bool)arg1;
- (void)_applyScrubbingForegroundColor:(id)arg1 shadowColor:(id)arg2;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_startScrubbingAnimationFromUIViewAnimateWithDuration;
- (void)_endScrubbingAnimationFromUIViewAnimateWithDuration;
- (id)_nextListing;
- (void)_resetVideoForListing;
- (void)_performPreloadVideoTask;
- (id)_onDeckPosterImageView;
- (void)_playQueuedUpVideo;
- (void)_handleTapToPlayVideoGesture:(id)arg1;
- (id)_posterImageViewWithTheme:(unsigned long long)arg1;
- (id)_viewForEditOption:(id)arg1;
- (id)_newTopGradientViewWithColor:(id)arg1;
- (id)_newBottomGradientViewWithColor:(id)arg1;
- (id)_onDeckPosterImageViewWithTheme:(unsigned long long)arg1;

@end
