/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class ACAccountStore, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

@interface AXHASettings : NSObject

{
    ACAccountStore *_accountStore;
    NSMutableSet *_registeredNotifications;
    NSMutableSet *_synchronizePreferences;
    NSMutableDictionary *_updateBlocks;
    NSObject<OS_dispatch_queue> *_icloudInitializationQueue;
}

@property (retain, nonatomic) NSMutableSet *registeredNotifications;
@property (retain, nonatomic) NSMutableSet *synchronizePreferences;
@property (retain, nonatomic) NSMutableDictionary *updateBlocks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *icloudInitializationQueue;
@property (retain, nonatomic) NSDictionary *pairedHearingAids;
@property (nonatomic) _Bool independentHearingAidSettings;
@property (nonatomic) _Bool allowHearingAidControlOnLockScreen;
@property (nonatomic) _Bool shouldStreamToLeftAid;
@property (nonatomic) _Bool shouldStreamToRightAid;
@property (nonatomic) long long callAudioRoute;
@property (nonatomic) long long mediaAudioRoute;
@property (nonatomic) _Bool multideviceSettingsEnabled;
@property (nonatomic) _Bool multideviceAudioEnabled;
@property (nonatomic) long long complicationPreferredDisplayMode;
@property (nonatomic) int availableInputEars;
@property (nonatomic) int preferredInputEar;
@property (retain, nonatomic) NSString *availableHearingDeviceName;
@property (nonatomic) _Bool exportsLiveListenToFile;
@property (nonatomic) _Bool ultronSupportEnabled;
@property (nonatomic) _Bool ultronIsRunning;
@property (retain, nonatomic) NSArray *detectableUltronTypes;

+ (void)initialize;
+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)registerUpdateBlock:(CDUnknownBlockType)arg1 forRetrieveSelector:(SEL)arg2 withListener:(id)arg3;
- (void)_setValue:(id)arg1 forPreferenceKey:(id)arg2;
- (id)_notificationForPreferenceKey:(id)arg1;
- (id)_valueForPreferenceKey:(id)arg1;
- (void)_registerForNotification:(id)arg1;
- (void)_handlePreferenceChanged:(id)arg1;
- (id)_preferenceKeyForSelector:(SEL)arg1;
- (void)iCloudAccountDidChange:(id)arg1;
- (void)_synchronizeIfNecessary:(id)arg1;
- (_Bool)isiCloudPaired;
- (void)_initializeICloudSetup;
- (_Bool)shouldUseiCloud;
- (void)icloudHearingSettingsDidChange:(id)arg1;
- (void)pushLocalHearingAidsToiCloud;
- (void)setLocalHearingAidsFromiCloud:(id)arg1;
- (id)convertPersistentRepresentation:(id)arg1 fromVersion:(float)arg2 toVersion:(float)arg3;
- (id)deviceIDForPairingInformation:(id)arg1;
- (_Bool)isDeviceIDOnCloudBlacklist:(id)arg1;
- (_Bool)shouldPushLocalAidsToiCloud;
- (_Bool)isPairedWithFakeHearingAids;
- (struct __CFString *)domainNameForPreferenceKey:(id)arg1;
- (void)_updateTripleClickOptionsForPairedAids:(id)arg1;
- (void)addDeviceIDToCloudBlacklist:(id)arg1;
- (void)removeDeviceIDFromCloudBlacklist:(id)arg1;

@end
