/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXRelatedWidget.h>

@class NSMutableSet, NSObject, NSString, PXOneUpPresentation, PXPhotoKitUIMediaProvider, PXPhotosDetailsContext, PXReusableObjectPool, PXSectionedSelectionManager, PXTilingController, PXTouchingUIGestureRecognizer, PXUITapGestureRecognizer, PXWidgetSpec, _PXUIRelatedPreviewOrbContext;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXUIRelatedWidget : PXRelatedWidget

{
    _Bool _userInteractionEnabled;
    PXReusableObjectPool *__tileReusePool;
    NSMutableSet *__tilesInUse;
    PXPhotoKitUIMediaProvider *__mediaProvider;
    PXUITapGestureRecognizer *__tapGestureRecognizer;
    PXTouchingUIGestureRecognizer *__touchGestureRecognizer;
    _PXUIRelatedPreviewOrbContext *__previewOrbContext;
}

@property (nonatomic, readonly) PXReusableObjectPool *_tileReusePool;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchGestureRecognizer;
@property (retain, nonatomic, setter=_setPreviewOrbContext:) _PXUIRelatedPreviewOrbContext *_previewOrbContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <PXWidgetDelegate> widgetDelegate;
@property (weak, nonatomic) id <PXWidgetUnlockDelegate> widgetUnlockDelegate;
@property (retain, nonatomic) PXPhotosDetailsContext *context;
@property (retain, nonatomic) PXWidgetSpec *spec;
@property (nonatomic, readonly) _Bool hasContentForCurrentInput;
@property (nonatomic, readonly) _Bool hasLoadedContentData;
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
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (void)installGestureRecognizers;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)prepareForInteractiveTransition:(id)arg1;
- (id)_scrollViewController;
- (id)extendedTraitCollection;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)environmentDidUpdateFocusInContext:(id)arg1;
- (id)regionOfInterestForContext:(id)arg1;
- (id)zoomAnimationCoordinatorForContext:(id)arg1;
- (struct NSObject *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(struct NSObject *)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1 forCoordinateSpace:(id)arg2;
- (id)imageViewBasicTileForPreviewingAtPoint:(struct CGPoint)arg1;
- (void)loadContentData;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3 context:(void *)arg4;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 objectBecameReusable:(id)arg2;
- (void)reusableObjectPool:(id)arg1 objectPreparedForReuse:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (id)createTileAnimator;
- (void)_registerTileClass:(Class)arg1 forReuseIdentifier:(long long)arg2;
- (id)_photosDetailsViewControllerForRelatedEntry:(id)arg1 options:(unsigned long long)arg2;
- (void)_handleTouchGestureRecognizer:(id)arg1;
- (id)_relatedEntryAtLocationOfGestureRecognizer:(id)arg1;
- (id)_relatedEntryAtPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (struct PXSimpleIndexPath)_assetIndexPathAtLocation:(struct CGPoint)arg1 padding:(struct UIEdgeInsets)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)_getImageRequester:(id *)arg1 title:(id *)arg2 subtitle:(id *)arg3 forRelatedEntry:(id)arg4 mediaProvider:(id)arg5;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void)scrollViewControllerDidBeginScrolling:(id)arg1;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier *)arg1 withGeometries:(const struct PXTileGeometry *)arg2 count:(unsigned long long)arg3;

@end
