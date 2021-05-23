/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

@class NSNumber, NSObject, NSProgress, NSString, PUAssetReference, PUAssetSharedViewModel, PUAssetViewModelChange, PUBadgeInfoPromise, PUBrowsingAnimatedImagePlayer, PUBrowsingIrisPlayer, PUBrowsingVideoPlayer, PUMediaProvider, PUModelTileTransform, PUOperationStatus;

@protocol OS_dispatch_group, PUDisplayAsset;

@interface PUAssetViewModel : PUViewModel

{
    PUBrowsingVideoPlayer *_videoPlayer;
    PUBrowsingIrisPlayer *_irisPlayer;
    PUBrowsingAnimatedImagePlayer *_animatedImagePlayer;
    struct {
        _Bool videoPlayersLoadingAllowed;
    } _isValid;
    _Bool _isUserTransformingTile;
    _Bool _forceBadgesVisible;
    _Bool _isUpdatingDisplayedContent;
    _Bool _isFavorite;
    _Bool _accessoryViewVisible;
    _Bool _isInEditMode;
    _Bool _toggleCTM;
    _Bool __needsUpdateVideoPlayers;
    id <PUDisplayAsset> _asset;
    PUModelTileTransform *_modelTileTransform;
    double _focusValue;
    PUOperationStatus *_loadingStatus;
    NSProgress *_saveProgress;
    long long _saveState;
    long long _importState;
    NSObject<OS_dispatch_group> *_displayedContentUpdateGroup;
    PUBadgeInfoPromise *_badgeInfoPromise;
    long long _lastAccessoryViewVisibilityChangeReason;
    long long _lastContentOffsetChangeReason;
    double _contentOffsetOverrideFactor;
    long long _flippingFullSizeRenderState;
    long long __currentFavoriteOverrideRequest;
    long long _displayedContentUpdateCount;
    PUMediaProvider *_mediaProvider;
    NSNumber *_isFavoriteOverride;
    PUAssetReference *_assetReference;
    PUAssetSharedViewModel *_assetSharedViewModel;
    struct CGPoint _preferredContentOffset;
    struct CGPoint _overridingContentOffset;
}

@property (nonatomic, readonly) PUAssetViewModelChange *currentChange;
@property (nonatomic, readonly) PUAssetViewModelChange *currentChangeIfExists;
@property (nonatomic, setter=_setNeedsUpdateVideoPlayers:) _Bool _needsUpdateVideoPlayers;
@property (nonatomic, setter=_setFavorite:) _Bool isFavorite;
@property (nonatomic, setter=_setCurrentFavoriteOverrideRequest:) long long _currentFavoriteOverrideRequest;
@property (nonatomic, setter=_setLastAccessoryViewVisibilityChangeReason:) long long lastAccessoryViewVisibilityChangeReason;
@property (nonatomic, setter=_setLastContentOffsetChangeReason:) long long lastContentOffsetChangeReason;
@property (copy, nonatomic) PUOperationStatus *loadingStatus;
@property (retain, nonatomic) NSProgress *saveProgress;
@property (nonatomic) long long displayedContentUpdateCount;
@property (nonatomic) _Bool isUpdatingDisplayedContent;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *displayedContentUpdateGroup;
@property (retain, nonatomic) id <PUDisplayAsset> asset;
@property (retain, nonatomic) PUMediaProvider *mediaProvider;
@property (nonatomic) double focusValue;
@property (copy, nonatomic) PUBadgeInfoPromise *badgeInfoPromise;
@property (nonatomic) _Bool forceBadgesVisible;
@property (nonatomic) long long importState;
@property (copy, nonatomic) NSNumber *isFavoriteOverride;
@property (retain, nonatomic) PUAssetReference *assetReference;
@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel;
@property (copy, nonatomic) PUModelTileTransform *modelTileTransform;
@property (nonatomic, setter=setUserTransformingTile:) _Bool isUserTransformingTile;
@property (nonatomic, readonly) PUBrowsingVideoPlayer *videoPlayer;
@property (nonatomic, readonly) PUBrowsingIrisPlayer *irisPlayer;
@property (nonatomic, readonly) PUBrowsingAnimatedImagePlayer *animatedImagePlayer;
@property (nonatomic, readonly) long long saveState;
@property (nonatomic, getter=isAccessoryViewVisible) _Bool accessoryViewVisible;
@property (nonatomic, readonly) struct CGPoint contentOffset;
@property (nonatomic) struct CGPoint preferredContentOffset;
@property (nonatomic) struct CGPoint overridingContentOffset;
@property (nonatomic) double contentOffsetOverrideFactor;
@property (nonatomic) _Bool isInEditMode;
@property (nonatomic) _Bool toggleCTM;
@property (nonatomic) long long flippingFullSizeRenderState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)didPerformChanges;
- (id)debugDetailedDescription;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleAssetSharedViewModel:(id)arg1 didChange:(id)arg2;
- (id)newViewModelChange;
- (void)setSaveState:(long long)arg1;
- (_Bool)_shouldPauseAndRewindVideo;
- (void)_pauseAndRewindVideoIfNeeded;
- (void)_updateVideoPlayersLoadingAllowedIfNeeded;
- (void)_invalidateVideoPlayers;
- (void)_updateVideoPlayersIfNeeded;
- (void)setAccessoryViewVisible:(_Bool)arg1 changeReason:(long long)arg2;
- (void)resetContentOffset;
- (void)setPreferredContentOffset:(struct CGPoint)arg1 changeReason:(long long)arg2;
- (void)_updatePropertiesFromAssetSharedViewModel;
- (void)willUpdateDisplayedContent;
- (void)didUpdateDisplayedContent;
- (void)_updateFavoriteState;
- (void)_handleBrowsingVideoPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingIrisPlayer:(id)arg1 didChange:(id)arg2;
- (void)_handleBrowsingAnimatedImage:(id)arg1 didChange:(id)arg2;

@end
