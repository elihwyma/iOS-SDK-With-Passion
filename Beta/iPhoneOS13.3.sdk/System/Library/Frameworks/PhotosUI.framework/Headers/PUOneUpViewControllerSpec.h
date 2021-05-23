/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewControllerSpec.h>

@class PUOneUpViewControllerSpecChange, UIColor;

__attribute__((visibility("hidden")))
@interface PUOneUpViewControllerSpec : PUViewControllerSpec

{
    _Bool _isChromeVisible;
    _Bool _isPresentedForPreview;
    _Bool _isShowingPlayPauseButtonInBars;
    _Bool _shouldPlaceButtonsInNavigationBar;
    _Bool _shouldUseCompactTitleView;
    _Bool _shouldUseContentGuideInsets;
    _Bool _shouldUseUserTransformTiles;
    _Bool _shouldDisplayBadges;
    _Bool _shouldDisplayAssetExplorerReviewScreenBadges;
    _Bool _shouldDisplayPlayButtons;
    _Bool _shouldDisplayProgressIndicators;
    _Bool _shouldAutoplayOnAppear;
    _Bool _shouldDisplayBufferingIndicators;
    _Bool _canDisplayLoadingIndicators;
    _Bool _shouldDisplayEmptyPlaceholder;
    _Bool _shouldUseCompactCommentsTitle;
    _Bool _shouldCounterrotateReviewScreenBars;
    _Bool _shouldPinContentToTop;
    _Bool _shouldLayoutReviewScreenControlBarVertically;
    _Bool _shouldPlaceScrubberInScrubberBar;
    unsigned long long _options;
    double _maximumToolbarHeight;
    double _maximumAccessoryToolbarHeight;
    UIColor *_backgroundColorOverride;
    long long _tileInitialContentMode;
    struct CGSize _progressIndicatorSize;
    struct CGSize _bufferingIndicatorSize;
}

@property (nonatomic, readonly) PUOneUpViewControllerSpecChange *currentChange;
@property (nonatomic, setter=_setShouldPlaceButtonsInNavigationBar:) _Bool shouldPlaceButtonsInNavigationBar;
@property (nonatomic, setter=_setShouldUseCompactTitleView:) _Bool shouldUseCompactTitleView;
@property (nonatomic, setter=_setMaximumToolbarHeight:) double maximumToolbarHeight;
@property (nonatomic, setter=_setMaximumAccessoryToolbarHeight:) double maximumAccessoryToolbarHeight;
@property (nonatomic, setter=_setShouldUseContentGuideInsets:) _Bool shouldUseContentGuideInsets;
@property (nonatomic, setter=_setShouldUseUserTransformTiles:) _Bool shouldUseUserTransformTiles;
@property (nonatomic, setter=_setShouldAutoplayOnAppear:) _Bool shouldAutoplayOnAppear;
@property (nonatomic, setter=_setShouldDisplayBadges:) _Bool shouldDisplayBadges;
@property (nonatomic, setter=_setShouldDisplayAssetExplorerReviewScreenBadges:) _Bool shouldDisplayAssetExplorerReviewScreenBadges;
@property (nonatomic, setter=_setShouldDisplayPlayButtons:) _Bool shouldDisplayPlayButtons;
@property (nonatomic, setter=_setShouldDisplayProgressIndicators:) _Bool shouldDisplayProgressIndicators;
@property (nonatomic, setter=_setShouldDisplayBufferingIndicators:) _Bool shouldDisplayBufferingIndicators;
@property (nonatomic, setter=_setCanDisplayLoadingIndicators:) _Bool canDisplayLoadingIndicators;
@property (nonatomic, setter=_setShouldDisplayEmptyPlaceholder:) _Bool shouldDisplayEmptyPlaceholder;
@property (retain, nonatomic, setter=_setBackgroundColorOverride:) UIColor *backgroundColorOverride;
@property (nonatomic, setter=_setProgressIndicatorSize:) struct CGSize progressIndicatorSize;
@property (nonatomic, setter=_setBufferingIndicatorSize:) struct CGSize bufferingIndicatorSize;
@property (nonatomic, setter=_setShouldUseCompactCommentsTitle:) _Bool shouldUseCompactCommentsTitle;
@property (nonatomic, setter=_setTileInitialContentMode:) long long tileInitialContentMode;
@property (nonatomic, setter=_setShouldCounterrotateReviewScreenBars:) _Bool shouldCounterrotateReviewScreenBars;
@property (nonatomic, setter=_setShouldPinContentToTop:) _Bool shouldPinContentToTop;
@property (nonatomic, setter=_setShouldLayoutReviewScreenControlBarVertically:) _Bool shouldLayoutReviewScreenControlBarVertically;
@property (nonatomic, setter=_setShouldPlaceScrubberInScrubberBar:) _Bool shouldPlaceScrubberInScrubberBar;
@property (nonatomic, setter=setChromeVisible:) _Bool isChromeVisible;
@property (nonatomic, setter=setPresentedForPreview:) _Bool isPresentedForPreview;
@property (nonatomic, setter=setShowingPlayPauseButtonInBars:) _Bool isShowingPlayPauseButtonInBars;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) _Bool allowAccessoryVisibility;
@property (nonatomic, readonly) _Bool allowSuggestions;
@property (nonatomic, readonly) _Bool allowDoneButton;
@property (nonatomic, readonly) _Bool allowTapOnTitle;
@property (nonatomic, readonly) _Bool shouldShowTitleView;
@property (nonatomic, readonly) _Bool shouldDisplaySelectionIndicators;
@property (nonatomic, readonly) _Bool shouldDisplayAssetExplorerReviewScreenProgressIndicators;
@property (nonatomic, readonly) struct CGSize assetExplorerReviewScreenProgressIndicatorSize;
@property (nonatomic, readonly) _Bool shouldDisplayReviewScreenBars;
@property (nonatomic, readonly) _Bool shouldDisableNavigationBarsVisibility;
@property (nonatomic, readonly) struct CGSize playButtonSize;

- (id)initWithOptions:(unsigned long long)arg1;
- (void)updateIfNeeded;
- (id)newSpecChange;
- (_Bool)_isAssetExplorerReviewScreen;
- (_Bool)_shouldForceBlackBackground;

@end
