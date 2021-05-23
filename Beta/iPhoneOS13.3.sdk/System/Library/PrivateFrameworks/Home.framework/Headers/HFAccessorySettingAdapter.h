/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFHomeKitDispatcher, HFHomeKitSettingsValueManager, HMAccessory, HMHome, HMSettings, NSMutableDictionary, NSSet, NSString;

@protocol HFHomeKitSettingsVendor;

@interface HFAccessorySettingAdapter : NSObject

{
    HFHomeKitSettingsValueManager *_valueManager;
    unsigned long long _mode;
    id <HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    NSSet *_keyPaths;
    CDUnknownBlockType _updateHandler;
    HFHomeKitDispatcher *_dispatcher;
    NSMutableDictionary *_watchedSettings;
    NSMutableDictionary *_keyPathStringToFuture;
    HMAccessory *_accessory;
    HMSettings *_settings;
}

@property (retain, nonatomic) HFHomeKitDispatcher *dispatcher;
@property (retain, nonatomic) NSMutableDictionary *watchedSettings;
@property (retain, nonatomic) NSMutableDictionary *keyPathStringToFuture;
@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFHomeKitSettingsValueManager *valueManager;
@property (nonatomic, readonly) HMSettings *settings;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) id <HFHomeKitSettingsVendor> homeKitSettingsVendor;
@property (copy, nonatomic, readonly) NSSet *keyPaths;
@property (copy, nonatomic, readonly) CDUnknownBlockType updateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createDefaultHomeSettingAdapterCollectionForProfile:(id)arg1;

- (id)init;
- (void)mediaObject:(id)arg1 didUpdateSettings:(id)arg2;
- (void)settingsDidUpdate:(id)arg1;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(CDUnknownBlockType)arg4;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(CDUnknownBlockType)arg3;
- (id)updateSetting:(id)arg1 value:(id)arg2;
- (id)settingWatchFutureForKeyPath:(id)arg1;
- (void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2;
- (id)_beginMonitoringSettingsKeyPath:(id)arg1;
- (_Bool)_updateRootAccessorySettings;
- (_Bool)_updateRootAccessorySettingsIfNeeded;
- (void)_reportUpdatedValueForSetting:(id)arg1;
- (id)settingForKeyPath:(id)arg1;
- (void)_watchSetting:(id)arg1;
- (void)_teardownSetting:(id)arg1;
- (id)_missingKeyPaths;
- (void)_setupMissingKeyPaths;
- (void)_tearDownKeyPaths;
- (_Bool)_setupKeyPaths;
- (id)_endMonitoringSettingsKeyPath:(id)arg1;
- (void)settings:(id)arg1 didUpdateSetting:(id)arg2;
- (void)settings:(id)arg1 willWriteValueForSettings:(id)arg2;
- (void)settings:(id)arg1 didWriteValueForSettings:(id)arg2 failedSettings:(id)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandlerBlock:(CDUnknownBlockType)arg3;
- (id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2;
- (id)updateSettingWithKeyPath:(id)arg1 value:(id)arg2;

@end
