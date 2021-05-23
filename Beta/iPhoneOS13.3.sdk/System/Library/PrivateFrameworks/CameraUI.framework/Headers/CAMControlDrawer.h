/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CAMControlDrawerButton, CAMDrawerApertureButton, CAMDrawerAspectRatioButton, CAMDrawerFilterButton, CAMDrawerFlashButton, CAMDrawerHDRButton, CAMDrawerIntensityButton, CAMDrawerLivePhotoButton, CAMDrawerLowLightButton, CAMDrawerTimerButton, CAMLowLightSlider, CEKApertureSlider, CEKSlider, CEKWheelScrubberView, NSArray, NSMutableDictionary, NSString, UIScrollView;

@protocol CAMControlDrawerDelegate, CAMControlDrawerExpandableButton, CAMControlDrawerPresentationDelegate;

@interface CAMControlDrawer : UIView

{
    long long _layoutStyle;
    id <CAMControlDrawerDelegate> _delegate;
    id <CAMControlDrawerPresentationDelegate> _presentationDelegate;
    NSString *_contentSize;
    NSArray *_visibleControlTypes;
    long long _orientation;
    CEKWheelScrubberView *_filterScrubberView;
    CEKApertureSlider *_apertureSlider;
    CEKSlider *_intensitySlider;
    CAMLowLightSlider *_lowLightSlider;
    NSMutableDictionary *__controlMap;
    CAMControlDrawerButton<CAMControlDrawerExpandableButton> *__expandedControl;
    UIScrollView *__scrollView;
}

@property (nonatomic, readonly) NSMutableDictionary *_controlMap;
@property (retain, nonatomic, setter=_setExpandedControl:) CAMControlDrawerButton<CAMControlDrawerExpandableButton> *_expandedControl;
@property (nonatomic, readonly) UIScrollView *_scrollView;
@property (nonatomic) long long layoutStyle;
@property (weak, nonatomic) id <CAMControlDrawerDelegate> delegate;
@property (weak, nonatomic) id <CAMControlDrawerPresentationDelegate> presentationDelegate;
@property (retain, nonatomic) NSString *contentSize;
@property (retain, nonatomic) NSArray *visibleControlTypes;
@property (nonatomic) long long orientation;
@property (nonatomic, readonly) CAMDrawerFlashButton *flashButton;
@property (nonatomic, readonly) CAMDrawerLivePhotoButton *livePhotoButton;
@property (nonatomic, readonly) CAMDrawerAspectRatioButton *aspectRatioButton;
@property (nonatomic, readonly) CAMDrawerTimerButton *timerButton;
@property (nonatomic, readonly) CAMDrawerFilterButton *filterButton;
@property (nonatomic, readonly) CAMDrawerApertureButton *apertureButton;
@property (nonatomic, readonly) CAMDrawerIntensityButton *intensityButton;
@property (nonatomic, readonly) CAMDrawerHDRButton *hdrButton;
@property (nonatomic, readonly) CEKWheelScrubberView *filterScrubberView;
@property (nonatomic, readonly, getter=isFilterScrubberVisible) _Bool filterScrubberVisible;
@property (nonatomic, readonly) CEKApertureSlider *apertureSlider;
@property (nonatomic, getter=isApertureSliderVisible) _Bool apertureSliderVisible;
@property (nonatomic, readonly) CEKSlider *intensitySlider;
@property (nonatomic, getter=isIntensitySliderVisible) _Bool intensitySliderVisible;
@property (nonatomic, readonly) CAMDrawerLowLightButton *lowLightButton;
@property (nonatomic, readonly) CAMLowLightSlider *lowLightSlider;
@property (nonatomic, getter=isLowLightSliderVisible) _Bool lowLightSliderVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)collapseExpandableButtonsAnimated:(_Bool)arg1;
- (void)expandControlForType:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)isControlExpandedForType:(long long)arg1;
- (id)touchingRecognizersToCancel;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (void)_iterateViewsForHUDManager:(id)arg1 withItemFoundBlock:(CDUnknownBlockType)arg2;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (_Bool)shouldAccessibilityGestureBeginForHUDManager:(id)arg1;
- (void)_commonInitializationWithLayoutStyle:(long long)arg1;
- (struct CGSize)_scrollingContentSizeForControlCount:(unsigned long long)arg1;
- (void)_layoutVisibleControlForType:(long long)arg1 visibleControlTypes:(id)arg2;
- (void)_updateExpansionInsetsForExpandableButton:(id)arg1;
- (void)_layoutCustomControlsAnimated:(_Bool)arg1;
- (void)_updateControlsScaleAnimated:(_Bool)arg1;
- (void)_updateControlsVisibilityAnimated:(_Bool)arg1;
- (void)_handleControlValueChanged:(id)arg1;
- (void)_handleControlReleased:(id)arg1;
- (void)_loadCustomUIIfNeededForControlType:(long long)arg1;
- (void)_loadFilterScrubberIfNeeded;
- (void)_loadApertureSliderIfNeeded;
- (void)_loadIntensitySliderIfNeeded;
- (void)_loadLowLightSliderIfNeeded;
- (CDStruct_c3b9c2ee)_scrubberGradientEdgeInsets;
- (void)_layoutFilterScrubberView;
- (unsigned long long)_sliderFontStyle;
- (void)_layoutApertureSlider;
- (void)_layoutIntensitySlider;
- (void)_layoutLowLightSlider;
- (double)_viewportLength;
- (unsigned long long)_viewportMaximumControlCount;
- (double)_controlCenterSpacingForControlCount:(unsigned long long)arg1;
- (void)_layoutFullWidthCustomView:(id)arg1 withAlignmentRect:(struct CGRect)arg2 forAssociatedControl:(id)arg3 expanded:(_Bool)arg4;
- (void)_layoutFullWidthCustomView:(id)arg1 forAssociatedControl:(id)arg2 expanded:(_Bool)arg3;
- (void)setVisibleControlTypes:(id)arg1 animated:(_Bool)arg2;
- (void)_ensureVisibleControls;
- (void)_setExpandedControl:(id)arg1 animated:(_Bool)arg2;
- (void)setApertureSliderVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setIntensitySliderVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setLowLightSliderVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_loadControlIfNeededForType:(long long)arg1;
- (void)_installControlIfNeededForType:(long long)arg1;
- (id)_createControlForType:(long long)arg1;
- (void)expandableButton:(id)arg1 willChangeExpanded:(_Bool)arg2;
- (void)menuButtonDidSelectItem:(id)arg1;
- (void)setFilterScrubberVisible:(_Bool)arg1 animated:(_Bool)arg2;

@end
