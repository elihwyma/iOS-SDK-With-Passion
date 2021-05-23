/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSSpecifierDataSource.h>

@class NDOManager, NSArray, NSLock, NSMutableDictionary, NSString, NSTimer, PSSpecifier;

@protocol NSObject;

__attribute__((visibility("hidden")))
@interface PSGAboutDataSource : PSSpecifierDataSource

{
    NSMutableDictionary *_mediaDict;
    PSSpecifier *_headsetSpecifier;
    PSSpecifier *_accessoryDividerSpecifier;
    NSString *_loading;
    NSTimer *_reloadTimer;
    _Bool _isGeneratingNotifications;
    _Bool _threadRunning;
    _Bool _cancel;
    _Bool _loaded;
    _Bool _accessory;
    id <NSObject> _photoVideoNotificationToken;
    NSLock *_lock;
    _Bool _hasLoadedSpecifiers;
    NSMutableDictionary *_carrierCellState;
    NSMutableDictionary *_simCellState;
    NSString *_deviceNameToIgnoreOnce;
    NSArray *_ndoSpecifiers;
    NDOManager *_ndoManager;
}

@property (retain, nonatomic) NSString *deviceNameToIgnoreOnce;
@property (retain, nonatomic) NSArray *ndoSpecifiers;
@property (retain, nonatomic) NDOManager *ndoManager;

- (id)init;
- (void)dealloc;
- (id)countForKey:(id)arg1;
- (id)_macAddress;
- (id)_bluetoothMACAddress;
- (void)reloadSpecifiers;
- (id)specifiersForSpecifier:(id)arg1 observer:(id)arg2;
- (void)loadSpecifiers;
- (_Bool)areSpecifiersLoaded;
- (id)valueForSpecifier:(id)arg1;
- (void)newCarrierNotification;
- (void)setDeviceName:(id)arg1 specifier:(id)arg2;
- (id)deviceName:(id)arg1;
- (id)untrustedComponents;
- (id)nonGenuineComponentSpecifierForComponent:(id)arg1;
- (void)_addKey:(id)arg1 isCopyable:(_Bool)arg2;
- (void)_setValue:(id)arg1 forSpecifier:(id)arg2;
- (_Bool)_isUsingBootstrap:(id)arg1;
- (id)_PRLString:(id)arg1;
- (id)_ERIString:(id)arg1;
- (id)_NAIString:(id)arg1;
- (id)_MINString:(id)arg1;
- (id)_IMSStatusString:(id)arg1;
- (id)_carrierVersion:(id)arg1;
- (id)_ICCIDString:(id)arg1;
- (id)_CSNString:(id)arg1;
- (id)_modelRegionString;
- (id)_regulatoryModelNumberString;
- (id)_productVersionString;
- (id)_productBuildVersionString;
- (void)_loadMediaFinished:(id)arg1;
- (void)_loadValues;
- (void)_setValue:(id)arg1 forSpecifierWithKey:(id)arg2;
- (void)updateCarrierSpecifier:(id)arg1;
- (void)updateSIMSpecifier:(id)arg1;
- (id)_modelNameString;
- (id)_myNumber;
- (id)_macAddressSpecifierKey;
- (id)aboutController;
- (id)warrantyDetailText:(id)arg1;
- (void)appleCareCoveragePressed:(id)arg1;
- (id)nonGenuineBatteryURL;
- (id)informationCollectionSpecifier;
- (void)handleNonGenuineComponentTap:(id)arg1;
- (id)warrantySpecifiersFromWarranty:(id)arg1;
- (void)updateNDOSpecifiersWithPolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)topLevelComponentInfoSpecifiers;
- (id)_songs:(id)arg1;
- (id)_videos:(id)arg1;
- (id)_photos:(id)arg1;
- (_Bool)shouldShowSIMSpecifier:(id)arg1;
- (void)_addKey:(id)arg1 value:(id)arg2 isCopyable:(_Bool)arg3;
- (void)cleanupMLReloadTimer;
- (void)forceReloadMediaStats:(id)arg1;
- (void)_accessoryDidUpdate:(id)arg1;
- (void)mediaLibraryDidChange:(id)arg1;
- (void)simStatusChangedToReady;
- (void)enableMLUpdates:(_Bool)arg1;
- (void)outreachFinishedWithCompletion:(unsigned long long)arg1;
- (void)updateProductModelSpecifier:(id)arg1;
- (void)updateProductVersionSpecifier:(id)arg1;
- (void)reloadDeviceName;

@end
