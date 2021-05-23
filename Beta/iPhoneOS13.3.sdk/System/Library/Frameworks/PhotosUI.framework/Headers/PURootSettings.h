/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXSettings.h>

@class NSString, PUAirPlaySettings, PUAlbumListSettings, PUAudioClassificationSettings, PUCompositeVideoSettings, PUCurationSettings, PUFeedSettings, PUIrisSettings, PUMedusaSettings, PUMemoriesSettings, PUMomentsSettings, PUOneUpSettings, PUPerformanceDiagnosticsSettings, PUPhotoEditProtoSettings, PUPhotosGridSettings, PUSceneSettings, PUSlideshowSettings, PUTabbedLibrarySettings, PUTilingViewSettings, PUWelcomeSettings, PUWorkaroundSettings, PXImportSettings, PXSharingSettings, UIImage;

@interface PURootSettings : PXSettings

{
    _Bool _enforceDisableIrisUI;
    _Bool _allowIrisUI;
    PUCompositeVideoSettings *_compositeVideoSettings;
    PUTabbedLibrarySettings *_tabbedLibrarySettings;
    PUPhotosGridSettings *_photosGridSettings;
    PUPhotoEditProtoSettings *_photoEditingSettings;
    PUFeedSettings *_feedSettings;
    PUMomentsSettings *_momentsSettings;
    PUMedusaSettings *_medusaSettings;
    PUOneUpSettings *_oneUpSettings;
    PUTilingViewSettings *_tilingViewSettings;
    Class _interfaceThemeClass;
    PUAirPlaySettings *_airPlaySettings;
    PUSlideshowSettings *_slideshowSettings;
    PUAlbumListSettings *_albumListSettings;
    PUMemoriesSettings *_memoriesSettings;
    PUWelcomeSettings *_welcomeSettings;
    PUWorkaroundSettings *_workaroundSettings;
    PUSceneSettings *_sceneSettings;
    PUAudioClassificationSettings *_audioClassificationSettings;
    PXSharingSettings *_sharingSettings;
    PUCurationSettings *_curation;
    PUIrisSettings *_irisSettings;
    Class _orbInterfaceThemeClass;
    PUPerformanceDiagnosticsSettings *_performanceDiagnosticsSettings;
    PXImportSettings *_importSettings;
    NSString *__internal_libraryStateBriefDescription;
    UIImage *__internal_libraryStateImage;
}

@property (retain, nonatomic) NSString *_internal_libraryStateBriefDescription;
@property (retain, nonatomic) UIImage *_internal_libraryStateImage;
@property (nonatomic) _Bool allowIrisUI;
@property (retain, nonatomic) PUCompositeVideoSettings *compositeVideoSettings;
@property (retain, nonatomic) PUTabbedLibrarySettings *tabbedLibrarySettings;
@property (retain, nonatomic) PUPhotosGridSettings *photosGridSettings;
@property (retain, nonatomic) PUPhotoEditProtoSettings *photoEditingSettings;
@property (retain, nonatomic) PUFeedSettings *feedSettings;
@property (retain, nonatomic) PUMomentsSettings *momentsSettings;
@property (retain, nonatomic) PUMedusaSettings *medusaSettings;
@property (retain, nonatomic) PUOneUpSettings *oneUpSettings;
@property (retain, nonatomic) PUTilingViewSettings *tilingViewSettings;
@property (retain, nonatomic) Class interfaceThemeClass;
@property (retain, nonatomic) PUAirPlaySettings *airPlaySettings;
@property (retain, nonatomic) PUSlideshowSettings *slideshowSettings;
@property (retain, nonatomic) PUAlbumListSettings *albumListSettings;
@property (retain, nonatomic) PUMemoriesSettings *memoriesSettings;
@property (retain, nonatomic) PUWelcomeSettings *welcomeSettings;
@property (retain, nonatomic) PUWorkaroundSettings *workaroundSettings;
@property (retain, nonatomic) PUSceneSettings *sceneSettings;
@property (retain, nonatomic) PUAudioClassificationSettings *audioClassificationSettings;
@property (retain, nonatomic) PXSharingSettings *sharingSettings;
@property (retain, nonatomic) PUCurationSettings *curation;
@property (retain, nonatomic) PUIrisSettings *irisSettings;
@property (retain, nonatomic) Class orbInterfaceThemeClass;
@property (retain, nonatomic) PUPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;
@property (retain, nonatomic) PXImportSettings *importSettings;

+ (id)sharedInstance;
+ (id)settingsControllerModule;
+ (id)currentAsset;
+ (void)_presentTapToRadar;
+ (id)_audioClassificationSettings;
+ (id)_photosUICoreSettings;
+ (void)setupStatusBarInternalSettingsGestureOnInternalDevices;
+ (void)setupStatusBarDoubleTapOnInternalDevices;
+ (id)_saveScreenshot:(id)arg1;
+ (void)presentSettingsController;
+ (void)dismissSettingsController:(id)arg1;
+ (id)_debugRowsForViewControllerStack:(id)arg1;
+ (void)_setDebugRows:(id)arg1;
+ (void)_setCurrentAsset:(id)arg1;
+ (id)photosUITesterRootViewController;
+ (id)_photoKitSettings;
+ (id)_memoriesRelatedSettings;
+ (void)_deleteAllDiagnosticFiles;

- (void)setDefaultValues;
- (void)restoreDefaultValues;
- (id)parentSettings;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveValueForKey:(id)arg1;
- (_Bool)irisUIEnabled;
- (void)setEnforceDisableIrisUI:(_Bool)arg1;

@end
