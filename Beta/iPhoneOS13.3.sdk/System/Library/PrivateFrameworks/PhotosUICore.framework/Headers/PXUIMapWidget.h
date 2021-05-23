/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, PHAsset, PXImageUIView, PXOneUpPresentation, PXPhotosDetailsContext, PXPlacesMapFetchResultViewController, PXPlacesMapViewPort, PXPlacesSnapshotFactory, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIButton, UIFont, UIView;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXUIMapWidget : NSObject

{
    struct CGSize _contentSize;
    PXPlacesMapViewPort *_viewPort;
    _Bool _didDisplayContentView;
    _Bool _isLoaded;
    NSMutableDictionary *_fetchedImages;
    long long _lastFetchedBoundingRectAssetCount;
    _Bool _showAddressLink;
    _Bool _hasLoadedContentData;
    UIFont *_footerFont;
    id <PXWidgetDelegate> _widgetDelegate;
    id <PXWidgetUnlockDelegate> _widgetUnlockDelegate;
    PXPhotosDetailsContext *_context;
    PXWidgetSpec *_spec;
    UIView *__containerView;
    UIView *__contentView;
    PXImageUIView *__imageView;
    PXPlacesMapFetchResultViewController *__mapViewController;
    NSString *__cachedLocalizedTitle;
    NSString *__cachedDisclosureTitle;
    UIButton *_footerButton;
    PHAsset *_assetUsedForFooterTitle;
    NSString *_cachedFooterTitle;
    double _footerHeight;
    double _height;
    NSMutableArray *__nearbyCountCompletionBlocks;
    PXPlacesSnapshotFactory *__factory;
}

@property (nonatomic, readonly) UIView *_containerView;
@property (nonatomic, readonly) UIView *_contentView;
@property (nonatomic, readonly) PXImageUIView *_imageView;
@property (nonatomic, readonly) PXPlacesMapFetchResultViewController *_mapViewController;
@property (retain, nonatomic) NSString *_cachedLocalizedTitle;
@property (retain, nonatomic) NSString *_cachedDisclosureTitle;
@property (nonatomic, readonly) UIButton *footerButton;
@property (retain, nonatomic) PHAsset *assetUsedForFooterTitle;
@property (retain, nonatomic) NSString *cachedFooterTitle;
@property (nonatomic, readonly) UIFont *footerFont;
@property (nonatomic) double footerHeight;
@property (nonatomic) double height;
@property (retain, nonatomic) NSMutableArray *_nearbyCountCompletionBlocks;
@property (retain, nonatomic) PXPlacesSnapshotFactory *_factory;
@property (nonatomic, setter=_setHasLoadedContentData:) _Bool hasLoadedContentData;
@property (nonatomic) _Bool showAddressLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (retain, nonatomic) PXOneUpPresentation *oneUpPresentation;

- (id)init;
- (void)dealloc;
- (void)setContentSize:(struct CGSize)arg1;
- (void)_layoutSubviews;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_showPlaceholder;
- (void)controllerTraitCollectionDidChangeFrom:(id)arg1 to:(id)arg2;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)loadContentData;
- (void)unloadContentData;
- (void)userDidSelectDisclosureControl;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (id)standaloneMapViewController;
- (void)_loadContainerView;
- (id)_fetchResultsForSections;
- (long long)_fetchCountOfAssetsWithLocation;
- (void)_updateContentViewFrame;
- (void)_updateFooterHeight;
- (void)_updateHeight;
- (void)_updateFooterTitle;
- (void)_handleFooterTitleUpdateCompleteForAsset:(id)arg1 footerTitle:(id)arg2;
- (void)_updateFooterButton;
- (id)_localizedGeoDescriptionForAsset:(id)arg1;
- (id)_firstAsset;
- (void)userDidSelectFooter:(id)arg1;
- (void)_showPlacesWithContentMode:(unsigned long long)arg1;
- (id)_mapViewControllerWithContentMode:(unsigned long long)arg1;
- (void)_fetchPlacesSnapshotUsingMapType:(unsigned long long)arg1 fetchResults:(id)arg2 shouldFetchNearbyAssetCount:(_Bool)arg3;
- (id)_createSnapshotOptions;
- (void)_handleSnapshotResponse:(id)arg1 viewPort:(id)arg2 snapshotMapType:(unsigned long long)arg3 shouldFetchNearbyAssetCount:(_Bool)arg4 fetchedImageKey:(id)arg5 error:(id)arg6;
- (void)_setImage:(id)arg1 animated:(_Bool)arg2;
- (_Bool)_hasCachedSnapshotImageForKey:(id)arg1;

@end
