/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSMutableSet, NSString, PXAssetsDataSourceManager, PXBasicUIViewTileAnimator, PXPhotoKitUIMediaProvider, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXUIAssetsScene, PXWidgetSpec;

@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetUnlockDelegate;

@interface PXDemoTilingControllerWidget : NSObject <Swift>

{
    id <PXWidgetDelegate> _widgetDelegate;
    PXPhotosDetailsContext *_context;
    PXAssetsDataSourceManager *__dataSourceManager;
    PXPhotoKitUIMediaProvider *__mediaProvider;
    PXTilingController *__tilingController;
    PXBasicUIViewTileAnimator *__tileAnimator;
    NSMutableSet *__tilesInUse;
    PXUIAssetsScene *__scene;
    NSString *_localizedSubtitle;
}

@property (nonatomic, readonly) PXAssetsDataSourceManager *_dataSourceManager;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic, readonly) PXBasicUIViewTileAnimator *_tileAnimator;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXUIAssetsScene *_scene;
@property (retain, nonatomic, setter=_setLocalizedSubtitle:) NSString *localizedSubtitle;
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
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) _Bool allowUserInteractionWithSubtitle;
@property (nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property (nonatomic, readonly) _Bool supportsSelection;
@property (nonatomic, getter=isSelecting) _Bool selecting;
@property (nonatomic, readonly) _Bool supportsFaceMode;
@property (nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;

- (id)init;
- (double)preferredContentHeightForWidth:(double)arg1;
- (void)userDidSelectSubtitle;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(id)arg2;
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (void)_loadTilingController;
- (id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2;
- (id)_demoTilingLayoutForDataSource:(id)arg1;

@end
