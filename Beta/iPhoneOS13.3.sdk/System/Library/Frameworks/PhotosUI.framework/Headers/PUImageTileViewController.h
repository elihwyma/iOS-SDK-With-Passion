/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTileViewController.h>

@class CALayer, NSData, NSDate, NSString, NSURL, PUAssetViewModel, PUImageRequester, PUMediaProvider, PXImageLayerModulator, PXImageModulationManager, UIColor, UIImage, UIImageView;

@protocol PLTileableLayer, PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUImageTileViewController : PUTileViewController

{
    _Bool _animatesImageAppearance;
    _Bool _shouldUseFullsizeImageData;
    _Bool _imageIsFullQuality;
    _Bool __needsUpdateImage;
    _Bool __needsUpdateImageLayerModulator;
    _Bool __needsUpdateImageLayerModulatorInput;
    _Bool __needsUpdateImageView;
    _Bool __needsUpdateFullsizeImageMetadata;
    _Bool __needsUpdateFullsizeTiledLayer;
    _Bool __isDisplayingFullQualityImage;
    _Bool _shouldUsePenultimateVersionForNextImageUpdate;
    _Bool _canUseFullsizeTiledLayer;
    PUAssetViewModel *_assetViewModel;
    id <PUDisplayAsset> _asset;
    PUMediaProvider *_mediaProvider;
    PXImageModulationManager *_imageModulationManager;
    UIColor *_placeholderColor;
    UIImageView *__imageView;
    NSData *__fullsizeImageData;
    NSURL *__fullsizeImageURL;
    long long __fullsizeImageOrientation;
    CALayer<PLTileableLayer> *__fullsizeTiledLayer;
    long long __assetLoadingStage;
    NSDate *__assetLoadingStartDate;
    PUImageRequester *__imageRequester;
    PXImageLayerModulator *_imageLayerModulator;
    UIImage *_image;
    struct CGSize __targetSize;
    struct CGSize __fullsizeImageUntransformedSize;
    struct CGSize __fullsizeImageSize;
}

@property (nonatomic, readonly) _Bool imageIsFullQuality;
@property (nonatomic, setter=_setNeedsUpdateImage:) _Bool _needsUpdateImage;
@property (nonatomic, setter=_setNeedsUpdateImageLayerModulator:) _Bool _needsUpdateImageLayerModulator;
@property (nonatomic, setter=_setNeedsUpdateImageLayerModulatorInput:) _Bool _needsUpdateImageLayerModulatorInput;
@property (nonatomic, setter=_setNeedsUpdateImageView:) _Bool _needsUpdateImageView;
@property (nonatomic, setter=_setNeedsUpdateFullsizeImageMetadata:) _Bool _needsUpdateFullsizeImageMetadata;
@property (nonatomic, setter=_setNeedsUpdateFullsizeTiledLayer:) _Bool _needsUpdateFullsizeTiledLayer;
@property (nonatomic, setter=_setTargetSize:) struct CGSize _targetSize;
@property (nonatomic, readonly) UIImageView *_imageView;
@property (retain, nonatomic, setter=_setFullsizeImageData:) NSData *_fullsizeImageData;
@property (retain, nonatomic, setter=_setFullsizeImageURL:) NSURL *_fullsizeImageURL;
@property (nonatomic, setter=_setFullsizeImageOrientation:) long long _fullsizeImageOrientation;
@property (nonatomic, setter=_setFullsizeImageUntransformedSize:) struct CGSize _fullsizeImageUntransformedSize;
@property (nonatomic, setter=_setFullsizeImageSize:) struct CGSize _fullsizeImageSize;
@property (retain, nonatomic, setter=_setFullsizeTiledLayer:) CALayer<PLTileableLayer> *_fullsizeTiledLayer;
@property (nonatomic, setter=_setDisplayingFullQualityImage:) _Bool _isDisplayingFullQualityImage;
@property (nonatomic, setter=_setAssetLoadingStage:) long long _assetLoadingStage;
@property (retain, nonatomic, setter=_setAssetLoadingStartDate:) NSDate *_assetLoadingStartDate;
@property (nonatomic, setter=_setShouldUsePenultimateVersionForNextImageUpdate:) _Bool shouldUsePenultimateVersionForNextImageUpdate;
@property (nonatomic) _Bool canUseFullsizeTiledLayer;
@property (retain, nonatomic, setter=_setImageRequester:) PUImageRequester *_imageRequester;
@property (retain, nonatomic) PXImageLayerModulator *imageLayerModulator;
@property (nonatomic, readonly) UIImage *image;
@property (retain, nonatomic) PUAssetViewModel *assetViewModel;
@property (retain, nonatomic) id <PUDisplayAsset> asset;
@property (retain, nonatomic) PUMediaProvider *mediaProvider;
@property (retain, nonatomic) PXImageModulationManager *imageModulationManager;
@property (nonatomic) _Bool animatesImageAppearance;
@property (nonatomic) _Bool shouldUseFullsizeImageData;
@property (copy, nonatomic) UIColor *placeholderColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_supportedZoomImageFormats;

- (void)dealloc;
- (void)_invalidate;
- (id)loadView;
- (_Bool)_needsUpdate;
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;
- (void)_invalidateImage;
- (void)_setNeedsUpdate;
- (void)_updateImageIfNeeded;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)_updateReadyForDisplay;
- (void)_invalidateImageView;
- (void)_updateImageViewIfNeeded;
- (void)applyLayoutInfo:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)assetViewModelDidChange;
- (void)assetContentDidChange;
- (void)_handleShouldReloadAssetMediaNotification:(id)arg1;
- (void)_handleAssetViewModel:(id)arg1 didChange:(id)arg2;
- (void)_invalidateImageLayerModulator;
- (_Bool)wantsVisibleRectChanges;
- (void)didChangeVisibleRect;
- (void)imageRequester:(id)arg1 didChange:(id)arg2;
- (void)_setAssetWithoutUpdateIfNeeded:(id)arg1;
- (void)_setImage:(id)arg1 isFullQuality:(_Bool)arg2;
- (void)setPreloadedImage:(id)arg1;
- (void)mediaProviderDidChange;
- (void)assetDidChange;
- (_Bool)shouldAvoidInPlaceSnapshottedFadeOut;
- (void)_updateImageLayerModulatorIfNeeded;
- (void)_invalidateImageLayerModulatorInput;
- (void)_updateImageLayerModulatorInputIfNeeded;
- (void)updateMutableImageLayerModulator:(id)arg1;
- (void)_updateAssetLoadingStage;
- (void)_invalidateFullsizeImageMetadata;
- (void)_updateFullsizeImageMetadataIfNeeded;
- (void)_invalidateFullsizeTiledLayer;
- (void)_updateFullsizeTiledLayerIfNeeded;
- (id)generateAssetTransitionInfo;
- (void)_cancelAllImageRequests;

@end
