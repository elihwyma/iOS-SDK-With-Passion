/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;

@interface PUBrowsingViewModelChange : PUViewModelChange

{
    NSMutableDictionary *_mutableViewModelChangesByAssetReference;
    NSMapTable *_mutableSharedViewModelChangesByAsset;
    _Bool _assetsDataSourceDidChange;
    _Bool _currentAssetDidChange;
    _Bool _currentAssetTransitionProgressDidChange;
    _Bool _transitionDriverIdentifierDidChange;
    _Bool _browsingSpeedRegimeDidChange;
    _Bool _isScrubbingDidChange;
    _Bool _isScrollingDidChange;
    _Bool _isAnimatingAnyTransitionDidChange;
    _Bool _secondScreenSizeDidChange;
    _Bool _chromeVisibilityDidChange;
    _Bool _presentingOverOneUpDidChange;
    _Bool _reviewScreenBarsModelDidChange;
    _Bool _videoOverlayPlayStateDidChange;
    _Bool _isAttemptingToPlayVideoOverlayDidChange;
    _Bool _isScrubbingActivationDidChange;
    _Bool _isVideoContentAllowedDidChange;
}

@property (nonatomic, setter=_setAssetsDataSourceDidChange:) _Bool assetsDataSourceDidChange;
@property (nonatomic, setter=_setCurrentAssetDidChange:) _Bool currentAssetDidChange;
@property (nonatomic, setter=_setCurrentAssetTransitionProgressDidChange:) _Bool currentAssetTransitionProgressDidChange;
@property (nonatomic, setter=_setBrowsingSpeedRegimeDidChange:) _Bool browsingSpeedRegimeDidChange;
@property (nonatomic, setter=_setIsScrubbingDidChange:) _Bool isScrubbingDidChange;
@property (nonatomic, setter=_setIsScrollingDidChange:) _Bool isScrollingDidChange;
@property (nonatomic, setter=_setAnimatingAnyTransitionDidChange:) _Bool isAnimatingAnyTransitionDidChange;
@property (nonatomic, setter=_setSecondScreenSizeDidChange:) _Bool secondScreenSizeDidChange;
@property (nonatomic, setter=_setTransitionDriverIdentifierDidChange:) _Bool transitionDriverIdentifierDidChange;
@property (nonatomic, setter=_setChromeVisibilityDidChange:) _Bool chromeVisibilityDidChange;
@property (nonatomic, setter=_setPresentingOverOneUpDidChange:) _Bool presentingOverOneUpDidChange;
@property (nonatomic, setter=_setReviewScreenBarsModelDidChange:) _Bool reviewScreenBarsModelDidChange;
@property (nonatomic, setter=_setVideoOverlayPlayStateDidChange:) _Bool videoOverlayPlayStateDidChange;
@property (nonatomic, setter=_setIsAttemptingToPlayVideoOverlayDidChange:) _Bool isAttemptingToPlayVideoOverlayDidChange;
@property (nonatomic, setter=_setIsScrubbingActivationDidChange:) _Bool isScrubbingActivationDidChange;
@property (nonatomic) _Bool isVideoContentAllowedDidChange;
@property (nonatomic, readonly) NSMutableDictionary *_mutableViewModelChangesByAssetReference;
@property (nonatomic, readonly) NSMapTable *_mutableSharedViewModelChangesByAsset;
@property (nonatomic, readonly) NSMapTable *assetSharedViewModelChangesByAsset;
@property (nonatomic, readonly) NSDictionary *assetViewModelChangesByAssetReference;

- (_Bool)hasChanges;

@end
