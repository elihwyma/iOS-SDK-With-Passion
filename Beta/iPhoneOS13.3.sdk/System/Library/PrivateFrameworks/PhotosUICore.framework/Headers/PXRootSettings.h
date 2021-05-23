/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSettings.h>

@class PXAlbumsDebugUISettings, PXApplicationSettings, PXAssetVariationsSettings, PXAssetsSceneSettings, PXCompleteMyMomentSettings, PXCuratedLibrarySettings, PXDiagnosticsSettings, PXDragAndDropSettings, PXFooterSettings, PXForYouSettings, PXGPPTSettings, PXGridKitSettings, PXGridSettings, PXImageModulationSettings, PXImportSettings, PXKitSettings, PXMemoriesFeedSettings, PXMemoriesRelatedSettings, PXModelSettings, PXPeopleDetailSettings, PXPeopleUISettings, PXPhotoPickerSettings, PXPhotosDataSourceSettings, PXPhotosDetailsHeaderTileSettings, PXPhotosDetailsSettings, PXRelatedSettings, PXSearchSettings, PXSharingSettings, PXSnapBackSettings, PXTilingSettings, PXViewControllerTransitionSettings;

@interface PXRootSettings : PXSettings

{
    _Bool _showTapToRadar;
    _Bool _showWIPAlertRadar;
    PXDiagnosticsSettings *_diagnostics;
    PXImageModulationSettings *_imageModulationSettings;
    PXCuratedLibrarySettings *_curatedLibrarySettings;
    PXPhotoPickerSettings *_photoPickerSettings;
    PXPhotosDetailsSettings *_photosDetails;
    PXPhotosDetailsHeaderTileSettings *_photosDetailsHeaderTile;
    PXRelatedSettings *_related;
    PXMemoriesFeedSettings *_memoryFeed;
    PXMemoriesRelatedSettings *_memoriesRelated;
    PXAssetsSceneSettings *_assetsScene;
    PXPhotosDataSourceSettings *_photosDataSource;
    PXTilingSettings *_tiling;
    PXModelSettings *_model;
    PXKitSettings *_kit;
    PXGridKitSettings *_gridKitSettings;
    PXGPPTSettings *_gridKitPPTSettings;
    PXViewControllerTransitionSettings *_viewControllerTransition;
    PXSnapBackSettings *_snapBack;
    PXPeopleDetailSettings *_peopleDetail;
    PXPeopleUISettings *_peopleUISettings;
    PXDragAndDropSettings *_dragAndDrop;
    PXSharingSettings *_sharingSettings;
    PXAssetVariationsSettings *_variationsSettings;
    PXCompleteMyMomentSettings *_completeMyMoment;
    PXForYouSettings *_forYou;
    PXGridSettings *_grid;
    PXImportSettings *_importSettings;
    PXSearchSettings *_searchSettings;
    PXAlbumsDebugUISettings *_albumsDebugUISettings;
    PXApplicationSettings *_applicationSettings;
    PXFooterSettings *_footerSettings;
}

@property (retain, nonatomic) PXDiagnosticsSettings *diagnostics;
@property (retain, nonatomic) PXImageModulationSettings *imageModulationSettings;
@property (retain, nonatomic) PXCuratedLibrarySettings *curatedLibrarySettings;
@property (retain, nonatomic) PXPhotoPickerSettings *photoPickerSettings;
@property (retain, nonatomic) PXPhotosDetailsSettings *photosDetails;
@property (retain, nonatomic) PXPhotosDetailsHeaderTileSettings *photosDetailsHeaderTile;
@property (retain, nonatomic) PXRelatedSettings *related;
@property (retain, nonatomic) PXMemoriesFeedSettings *memoryFeed;
@property (retain, nonatomic) PXMemoriesRelatedSettings *memoriesRelated;
@property (retain, nonatomic) PXAssetsSceneSettings *assetsScene;
@property (retain, nonatomic) PXPhotosDataSourceSettings *photosDataSource;
@property (retain, nonatomic) PXTilingSettings *tiling;
@property (retain, nonatomic) PXModelSettings *model;
@property (retain, nonatomic) PXKitSettings *kit;
@property (retain, nonatomic) PXGridKitSettings *gridKitSettings;
@property (retain, nonatomic) PXGPPTSettings *gridKitPPTSettings;
@property (retain, nonatomic) PXViewControllerTransitionSettings *viewControllerTransition;
@property (retain, nonatomic) PXSnapBackSettings *snapBack;
@property (retain, nonatomic) PXPeopleDetailSettings *peopleDetail;
@property (retain, nonatomic) PXPeopleUISettings *peopleUISettings;
@property (retain, nonatomic) PXDragAndDropSettings *dragAndDrop;
@property (retain, nonatomic) PXSharingSettings *sharingSettings;
@property (retain, nonatomic) PXAssetVariationsSettings *variationsSettings;
@property (retain, nonatomic) PXCompleteMyMomentSettings *completeMyMoment;
@property (retain, nonatomic) PXForYouSettings *forYou;
@property (retain, nonatomic) PXGridSettings *grid;
@property (retain, nonatomic) PXImportSettings *importSettings;
@property (retain, nonatomic) PXSearchSettings *searchSettings;
@property (retain, nonatomic) PXAlbumsDebugUISettings *albumsDebugUISettings;
@property (retain, nonatomic) PXApplicationSettings *applicationSettings;
@property (retain, nonatomic) PXFooterSettings *footerSettings;
@property (nonatomic) _Bool showTapToRadar;
@property (nonatomic) _Bool hideWIPAlerts;
@property (nonatomic) _Bool showWIPAlertRadar;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
