/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModelChange.h>

@class PUBrowsingAnimatedImagePlayerChange, PUBrowsingIrisPlayerChange, PUBrowsingVideoPlayerChange;

@interface PUAssetViewModelChange : PUViewModelChange

{
    _Bool _assetChanged;
    _Bool _modelTileTransformChanged;
    _Bool _isUserTransformingTileDidChange;
    _Bool _focusValueChanged;
    _Bool _loadingStatusChanged;
    _Bool _saveProgressChanged;
    _Bool _saveStateChanged;
    _Bool _importStateChanged;
    _Bool _forceBadgesVisibleChanged;
    _Bool _badgeInfoChanged;
    _Bool _isUpdatingDisplayedContentChanged;
    _Bool _isFavoriteChanged;
    _Bool _accessoryViewVisibilityChanged;
    _Bool _contentOffsetChanged;
    _Bool _isInEditModeChanged;
    _Bool _toggleCTMChanged;
    _Bool _flippingFullSizeRenderStateChanged;
    PUBrowsingVideoPlayerChange *_videoPlayerChange;
    PUBrowsingIrisPlayerChange *_irisPlayerChange;
    PUBrowsingAnimatedImagePlayerChange *_animatedImageChange;
}

@property (nonatomic, setter=_setAssetChanged:) _Bool assetChanged;
@property (nonatomic, setter=_setModelTileTransformChanged:) _Bool modelTileTransformChanged;
@property (nonatomic, setter=_setUserTransformingTileDidChange:) _Bool isUserTransformingTileDidChange;
@property (nonatomic, setter=_setFocusValueChanged:) _Bool focusValueChanged;
@property (nonatomic, setter=_setLoadingStatusChanged:) _Bool loadingStatusChanged;
@property (nonatomic, setter=_setSaveProgressChanged:) _Bool saveProgressChanged;
@property (nonatomic, setter=_setIsUpdatingDisplayedContentChanged:) _Bool isUpdatingDisplayedContentChanged;
@property (nonatomic, setter=_setIsFavoriteChanged:) _Bool isFavoriteChanged;
@property (nonatomic, setter=_setBadgeInfoChanged:) _Bool badgeInfoChanged;
@property (nonatomic, setter=_setAccessoryViewVisibilityChanged:) _Bool accessoryViewVisibilityChanged;
@property (nonatomic, setter=_setContentOffsetChanged:) _Bool contentOffsetChanged;
@property (retain, nonatomic, setter=_setVideoPlayerChange:) PUBrowsingVideoPlayerChange *videoPlayerChange;
@property (nonatomic, setter=_setForceBadgesVisibleChanged:) _Bool forceBadgesVisibleChanged;
@property (retain, nonatomic, setter=_setIrisPlayerChange:) PUBrowsingIrisPlayerChange *irisPlayerChange;
@property (nonatomic, setter=_setIsInEditModeChanged:) _Bool isInEditModeChanged;
@property (nonatomic, setter=_setFlippingFullSizeRenderStateChanged:) _Bool flippingFullSizeRenderStateChanged;
@property (nonatomic, setter=_setToggleCTMChanged:) _Bool toggleCTMChanged;
@property (retain, nonatomic, setter=_setAnimatedImageChange:) PUBrowsingAnimatedImagePlayerChange *animatedImageChange;
@property (nonatomic, setter=_setSaveStateChanged:) _Bool saveStateChanged;
@property (nonatomic, setter=_setImportStateChanged:) _Bool importStateChanged;

- (_Bool)hasChanges;

@end
