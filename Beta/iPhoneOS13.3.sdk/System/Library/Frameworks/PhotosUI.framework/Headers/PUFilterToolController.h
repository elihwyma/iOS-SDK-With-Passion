/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditToolController.h>

@class CEKBadgeTextView, CEKSlider, CEKWheelScrubberView, CIContext, CIImage, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface PUFilterToolController : PUPhotoEditToolController

{
    CEKBadgeTextView *_filterBadgeView;
    CEKWheelScrubberView *_scrubberView;
    CEKSlider *_slider;
    _Bool _isSliderTouchDown;
    CIImage *_inputImage;
    _Bool _monitorAdjustmentsForCache;
    NSMutableDictionary *_filterThumbnailCache;
    NSMutableDictionary *_filterIntensityCache;
    NSMutableArray *_toolConstraints;
    NSMutableArray *_scrubberViewConstraints;
    NSMutableArray *_filterBadgeViewConstraints;
    NSLayoutConstraint *_filterBadgeWidthConstraint;
    NSLayoutConstraint *_filterBadgeHeightConstraint;
    NSNumberFormatter *_formatter;
    CIContext *_context;
    CDStruct_1b6d18a9 _thumbnailTime;
    CDUnknownBlockType _willLoadFilterThumbnails;
    CDUnknownBlockType _didFinishLoadingFilterThumbnails;
}

@property (copy, nonatomic) CDUnknownBlockType willLoadFilterThumbnails;
@property (copy, nonatomic) CDUnknownBlockType didFinishLoadingFilterThumbnails;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateViewConstraints;
- (void)wheelScrubberViewWillBeginScrolling:(id)arg1;
- (void)wheelScrubberViewDidEndScrolling:(id)arg1;
- (void)wheelScrubberView:(id)arg1 updateCell:(id)arg2 forItemAtIndex:(unsigned long long)arg3;
- (void)wheelScrubberViewDidChangeSelectedIndex:(id)arg1;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)sliderDidScroll:(id)arg1;
- (void)sliderWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sliderDidEndScrolling:(id)arg1;
- (void)_sliderDidEndScrolling;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (_Bool)wantsZoomAndPanEnabled;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (void)willBecomeActiveTool;
- (long long)toolControllerTag;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)didResignActiveTool;
- (void)_updateToolConstraints;
- (void)_setupScrubber;
- (void)_setupFilters;
- (void)_setupSlider;
- (void)_updateWithCompositionController:(id)arg1;
- (void)_prepareThumbnailImagesIfNeeded;
- (void)_updateCacheWithCIImage:(id)arg1;
- (void)_setThumbnail:(id)arg1 forKey:(id)arg2;
- (void)_updateBadgeConstraints;
- (void)_updateScrubberLayout;
- (long long)_adjustedFilterIndex;
- (id)_effectAdjustment;
- (id)_adjustedFilterName;
- (double)_adjustedFilterIntensity;
- (id)_effectForIndex:(long long)arg1;
- (long long)_indexForFilterId:(id)arg1;
- (void)_updateBadgeAndSliderWithEffect:(id)arg1;
- (void)_setShowSlider:(_Bool)arg1 animate:(_Bool)arg2;
- (void)_updateFilterIntensityCache;
- (void)_updateIntensityForEffect:(id)arg1;
- (void)_updateSelectionTextAnimate:(_Bool)arg1;

@end
