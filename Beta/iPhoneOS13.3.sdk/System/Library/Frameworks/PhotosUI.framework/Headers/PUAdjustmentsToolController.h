/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoEditToolController.h>

@class CEKBadgeTextView, NSString, PUAdjustmentsDataSource, PUAdjustmentsToolControllerSpec, PUAdjustmentsViewController, PUAutoAdjustmentController, PXUISnappingController, UIView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsToolController : PUPhotoEditToolController

{
    PUAdjustmentsViewController *_adjustmentsViewController;
    UIView *_adjustmentPickerView;
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    _Bool _useTranslucentBackground;
    _Bool _ppt_EverAdjusted;
    double _ppt_scrollDelta;
    long long _viewLoadingStartTime;
    PUAutoAdjustmentController *_autoAdjustmentController;
    PXUISnappingController *__snappingController;
    PUAdjustmentsDataSource *_dataSource;
    CEKBadgeTextView *_badgeView;
}

@property (retain, nonatomic, setter=_setSnappingController:) PXUISnappingController *_snappingController;
@property (retain, nonatomic) PUAdjustmentsDataSource *dataSource;
@property (retain, nonatomic) CEKBadgeTextView *badgeView;
@property (retain, nonatomic) PUAutoAdjustmentController *autoAdjustmentController;
@property (nonatomic, readonly) PUAdjustmentsToolControllerSpec *toolControllerSpec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)localizedName;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)ppt_selectLightSlider:(CDUnknownBlockType)arg1;
- (void)ppt_selectColorSlider:(CDUnknownBlockType)arg1;
- (void)ppt_selectBWSlider:(CDUnknownBlockType)arg1;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_setSteps:(long long)arg1;
- (void)adjustmentsViewControllerDidUpdateSelectedControl:(id)arg1;
- (id)adjustmentsRenderer:(id)arg1;
- (void)adjustmentsDataChanged:(id)arg1;
- (void)autoEnhanceActionStateChanged;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (void)mediaViewIsReady;
- (void)_updateBackgroundAnimated:(_Bool)arg1;
- (void)setUseGradientBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateBadgeTextWithInfo:(id)arg1;
- (id)toolbarIcon;
- (id)centerToolbarView;
- (_Bool)canResetToDefaultValue;
- (id)localizedResetToolActionTitle;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (_Bool)wantsZoomAndPanEnabled;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (void)willBecomeActiveTool;
- (void)didBecomeActiveTool;
- (long long)toolControllerTag;
- (void)specDidChange;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (double)_sliderLength;
- (void)_ppt_scrollAfterDelay:(CDUnknownBlockType)arg1;

@end
