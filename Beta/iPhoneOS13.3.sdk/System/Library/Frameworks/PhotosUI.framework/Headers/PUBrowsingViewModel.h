/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

@class NSDate, NSMutableSet, NSString, PUAssetActionManager, PUAssetReference, PUAssetViewModel, PUAssetsDataSource, PUCachedMapTable, PUMediaProvider, PUReviewScreenBarsModel;

@protocol PXAssetImportStatusManager;

@interface PUBrowsingViewModel : PUViewModel

{
    PUAssetReference *_currentAssetReference;
    NSDate *_currentAssetReferenceChangedDate;
    double _lastAssetWasCurrentForDuration;
    _Bool _browsingSpeedRegimeIsValid;
    _Bool _isBrowsingSpeedRegimeInvalidationScheduled;
    PUCachedMapTable *_viewModelByAssetReference;
    NSMutableSet *_invalidAssetViewModels;
    _Bool _allAssetViewModelsAreInvalid;
    PUCachedMapTable *_assetSharedViewModelByAsset;
    _Atomic int _ongoingEnumerations;
    _Bool _videoContentAllowed;
    _Bool _isScrubbing;
    _Bool _isScrolling;
    _Bool _isAnimatingAnyTransition;
    _Bool _isAttemptingToPlayVideoOverlay;
    _Bool _accessoryViewsDefaultVisibility;
    _Bool _isChromeVisible;
    _Bool _presentingOverOneUp;
    PUAssetsDataSource *_assetsDataSource;
    double _currentAssetTransitionProgress;
    NSString *_transitionDriverIdentifier;
    long long _browsingSpeedRegime;
    long long _videoOverlayPlayState;
    long long _lastChromeVisibilityChangeReason;
    id _lastChromeVisibilityChangeContext;
    PUAssetReference *_trailingAssetReference;
    PUAssetReference *_leadingAssetReference;
    PUReviewScreenBarsModel *_reviewScreenBarsModel;
    long long __userNavigationDistance;
    long long __scrubbingSessionDistance;
    NSMutableSet *__animatingTransitionIdentifiers;
    NSMutableSet *__videoDisallowedReasons;
    PUMediaProvider *_mediaProvider;
    PUAssetActionManager *_actionManager;
    id <PXAssetImportStatusManager> _importStatusManager;
    struct CGSize _secondScreenSize;
}

@property (nonatomic, setter=_setUserNavigationDistance:) long long _userNavigationDistance;
@property (nonatomic, setter=_setScrubbingSessionDistance:) long long _scrubbingSessionDistance;
@property (nonatomic, setter=_setLastChromeVisibilityChangeReason:) long long lastChromeVisibilityChangeReason;
@property (retain, nonatomic, setter=_setLastChromeVisibilityChangeContext:) id lastChromeVisibilityChangeContext;
@property (nonatomic, setter=_setAnimatingAnyTransition:) _Bool isAnimatingAnyTransition;
@property (retain, nonatomic, setter=_setAnimatingTransitionIdentifiers:) NSMutableSet *_animatingTransitionIdentifiers;
@property (retain, nonatomic, setter=_setVideoDisallowedReasons:) NSMutableSet *_videoDisallowedReasons;
@property (nonatomic, setter=_setBrowsingSpeedRegime:) long long browsingSpeedRegime;
@property (retain, nonatomic, setter=_setTrailingAssetReference:) PUAssetReference *trailingAssetReference;
@property (retain, nonatomic, setter=_setLeadingAssetReference:) PUAssetReference *leadingAssetReference;
@property (retain, nonatomic) PUAssetsDataSource *assetsDataSource;
@property (retain, nonatomic) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) PUAssetActionManager *actionManager;
@property (retain, nonatomic) id <PXAssetImportStatusManager> importStatusManager;
@property (retain, nonatomic) PUAssetReference *currentAssetReference;
@property (nonatomic, readonly) double currentAssetTransitionProgress;
@property (copy, nonatomic, readonly) NSString *transitionDriverIdentifier;
@property (nonatomic) _Bool isScrubbing;
@property (nonatomic) _Bool isScrolling;
@property (nonatomic) long long videoOverlayPlayState;
@property (nonatomic) _Bool isAttemptingToPlayVideoOverlay;
@property (nonatomic) _Bool accessoryViewsDefaultVisibility;
@property (nonatomic, setter=setChromeVisible:) _Bool isChromeVisible;
@property (nonatomic, getter=isPresentingOverOneUp) _Bool presentingOverOneUp;
@property (nonatomic) struct CGSize secondScreenSize;
@property (nonatomic, getter=isAutoplayVideoMuted) _Bool autoplayVideoMuted;
@property (nonatomic, readonly) PUAssetViewModel *assetViewModelForCurrentAssetReference;
@property (retain, nonatomic) PUReviewScreenBarsModel *reviewScreenBarsModel;
@property (nonatomic, readonly) _Bool isVideoContentAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)_handleWillResignActiveNotification:(id)arg1;
+ (void)setAutoplayVideoMuted:(_Bool)arg1;
+ (_Bool)autoplayVideoMuted;

- (id)init;
- (_Bool)_needsUpdate;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (void)assetImportStatusManager:(id)arg1 didChangeStatusForAssetReference:(id)arg2;
- (id)debugDetailedDescription;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (id)newViewModelChange;
- (id)currentChange;
- (void)setCurrentAssetReference:(id)arg1 transitionProgress:(double)arg2 transitionDriverIdentifier:(id)arg3;
- (void)_setCurrentAssetTransitionProgress:(double)arg1;
- (void)_setTransitionDriverIdentifier:(id)arg1;
- (void)setAnimating:(_Bool)arg1 transitionWithIdentifier:(id)arg2;
- (void)setAccessoryViewsDefaultVisibility:(_Bool)arg1 changeReason:(long long)arg2;
- (void)_resetAccessoryViewsVisibilityToDefaultWithChangeReason:(long long)arg1;
- (void)setChromeVisible:(_Bool)arg1 changeReason:(long long)arg2;
- (void)setChromeVisible:(_Bool)arg1 changeReason:(long long)arg2 context:(id)arg3;
- (void)setVideoContentAllowed:(_Bool)arg1 forReason:(id)arg2;
- (void)setVideoContentAllowedForAllReasons;
- (void)_setVideoContentAllowed:(_Bool)arg1;
- (id)activeAssetReferences;
- (id)assetViewModelForAssetReference:(id)arg1;
- (_Bool)isTogglingCTMForAsset:(id)arg1;
- (id)assetSharedViewModelForAsset:(id)arg1;
- (id)_assetSharedViewModelForAsset:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)_invalidateBrowsingSpeedRegime;
- (void)_updateScrubSpeedRegimeIfNeeded;
- (void)_invalidateBrowsingSpeedRegimeAfterMaximumDelay:(double)arg1;
- (void)_handleAsyncBrowsingSpeedRegimeInvalidation;
- (void)_invalidateAllAssetViewModels;
- (void)_invalidateNeighboringAssetViewModels;
- (void)_invalidateAssetViewModel:(id)arg1;
- (void)_updateAssetViewModelsIfNeeded;
- (void)_updateAssetViewModel:(id)arg1;
- (void)_updateNeighboringAssetReferences;
- (double)_focusValueForAsset:(id)arg1;
- (id)_badgeInfoPromiseForAssetReference:(id)arg1;
- (id)_filteredAllowedBadges:(id)arg1 forAssetReference:(id)arg2;
- (long long)_importStateForAssetReference:(id)arg1;
- (void)_handleAutoplayMutedDidChangeNotification:(id)arg1;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;

@end
