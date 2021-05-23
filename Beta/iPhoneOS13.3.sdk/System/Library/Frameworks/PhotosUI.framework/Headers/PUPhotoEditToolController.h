/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class CEKEdgeGradientView, NSArray, NSMutableArray, NSString, NURenderPipelineFilter, PFSlowMotionTimeRangeMapper, PICompositionController, PLEditSource, PUPhotoEditAggregateSession, PUPhotoEditToolControllerSpec, PUPhotoEditValuesCalculator, PUPhotoEditViewControllerSpec, UIButton, UIColor, UIImage, UIView, _PUPhotoEditToolGradientView;

@protocol PUEditableAsset, PUPhotoEditToolControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolController : UIViewController

{
    NSString *_backdropViewGroupName;
    CEKEdgeGradientView *_gradientMask;
    _PUPhotoEditToolGradientView *_gradientView;
    _Bool _performingLiveInteraction;
    long long _layoutOrientation;
    id <PUEditableAsset> _asset;
    PICompositionController *_compositionController;
    PLEditSource *_editSource;
    PLEditSource *_overcaptureEditSource;
    PUPhotoEditValuesCalculator *_valuesCalculator;
    PUPhotoEditToolControllerSpec *_toolControllerSpec;
    PUPhotoEditViewControllerSpec *_photoEditSpec;
    id <PUPhotoEditToolControllerDelegate> _delegate;
    PUPhotoEditAggregateSession *_aggregateSession;
    UIView *_toolContainerView;
    double _toolGradientDistance;
    NSString *_localizedName;
    UIImage *_toolbarIcon;
    UIImage *_selectedToolbarIcon;
    UIButton *_preferredAlternateToolbarButton;
    UIView *_leftToolbarView;
    NSMutableArray *_mutableEditActionActivites;
    PFSlowMotionTimeRangeMapper *_slowMotionTimeMapper;
    CDUnknownBlockType _ppt_didBecomeActiveToolBlock;
}

@property (retain, nonatomic) NSMutableArray *mutableEditActionActivites;
@property (retain, nonatomic) PFSlowMotionTimeRangeMapper *slowMotionTimeMapper;
@property (retain, nonatomic) PUPhotoEditToolControllerSpec *toolControllerSpec;
@property (nonatomic, getter=isPerformingLiveInteraction) _Bool performingLiveInteraction;
@property (retain, nonatomic) UIButton *preferredAlternateToolbarButton;
@property (retain, nonatomic) PUPhotoEditAggregateSession *aggregateSession;
@property (copy, nonatomic) CDUnknownBlockType ppt_didBecomeActiveToolBlock;
@property (nonatomic, readonly) id <PUEditableAsset> asset;
@property (nonatomic, readonly) PICompositionController *compositionController;
@property (nonatomic, readonly) PICompositionController *uneditedCompositionController;
@property (nonatomic, readonly) PLEditSource *editSource;
@property (nonatomic, readonly) PLEditSource *overcaptureEditSource;
@property (nonatomic, readonly) PUPhotoEditValuesCalculator *valuesCalculator;
@property (retain, nonatomic) PUPhotoEditViewControllerSpec *photoEditSpec;
@property (weak, nonatomic) id <PUPhotoEditToolControllerDelegate> delegate;
@property (nonatomic, readonly) UIView *toolContainerView;
@property (nonatomic) double toolGradientDistance;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) UIImage *toolbarIcon;
@property (nonatomic, readonly) UIImage *selectedToolbarIcon;
@property (nonatomic, readonly) _Bool canResetToDefaultValue;
@property (nonatomic, readonly) NSString *localizedResetToolActionTitle;
@property (nonatomic, readonly) struct UIEdgeInsets preferredPreviewViewInsets;
@property (nonatomic, readonly) _Bool wantsDefaultPreviewView;
@property (copy, nonatomic, readonly) UIColor *preferredPreviewBackgroundColor;
@property (nonatomic, readonly) _Bool wantsZoomAndPanEnabled;
@property (nonatomic, readonly) _Bool wantsSecondaryToolbarVisible;
@property (nonatomic, readonly) _Bool suppressesEditUpdates;
@property (nonatomic, readonly) _Bool handlesMediaViewInsets;
@property (copy, nonatomic, readonly) NURenderPipelineFilter *filter;
@property (copy, nonatomic) NSString *backdropViewGroupName;
@property (nonatomic, readonly) UIView *leftToolbarView;
@property (nonatomic, readonly) UIView *centerToolbarView;
@property (nonatomic, readonly) long long toolControllerTag;
@property (nonatomic, readonly) NSArray *editActionActivities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long layoutOrientation;

- (void)dealloc;
- (void)setLayoutOrientation:(long long)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)setPlaceholderImage:(id)arg1;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (void)mediaViewIsReady;
- (void)setUseGradientBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (_Bool)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (void)willBecomeActiveTool;
- (void)didBecomeActiveTool;
- (void)specDidChange;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)baseLivePhotoInvalidated;
- (void)basePhotoInvalidated;
- (void)prepareForToolTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canBecomeActiveTool;
- (void)willResignActiveTool;
- (void)prepareForSave:(_Bool)arg1;
- (void)leavingEditWithCancel;
- (void)didResignActiveTool;
- (id)leadingToolbarViews;
- (id)trailingToolbarViews;
- (void)mediaViewWillBeginZooming:(id)arg1;
- (void)mediaViewDidEndZooming:(id)arg1;
- (struct CGRect)contentRectInCoordinateSpace:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (id)accessibilityHUDItemForButton:(id)arg1;
- (void)setOriginalStillImageTime:(CDStruct_1b6d18a9)arg1;
- (void)updateForIncomingAnimation;
- (void)photoEditLivePhotoModelUpdated;
- (void)reloadToolbarButtons:(_Bool)arg1;
- (void)updateToolbarButtonsAnimated:(_Bool)arg1;
- (void)_layoutToolGradient;
- (void)addEditActionActivity:(id)arg1;
- (void)removeEditActionActivity:(id)arg1;
- (_Bool)canShowCommonTools;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize)arg1;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (CDStruct_1b6d18a9)originalAssetTimeForDisplayedTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)displayedTimeForOriginalAssetTime:(CDStruct_1b6d18a9)arg1;
- (id)_newTimeMapper;

@end
