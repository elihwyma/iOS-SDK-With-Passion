/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEHelper, NSData, NSDictionary, NSKeyedUnarchiver, NSMutableDictionary, NSString, NSUUID;

@protocol NEConfigurationManagerDelegate, OS_dispatch_queue;

@interface NEConfigurationManager : NSObject

{
    NSString *_description;
    NEHelper *_helper;
    _Bool _hasReadPermission;
    _Bool _isVPNPublicAPI;
    _Bool _isVPNPrivateAPI;
    _Bool _isNEHelper;
    _Bool _hasVPNAPIEntitlement;
    int _changedNotifyToken;
    NSString *_pluginType;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_outerQueue;
    NSDictionary *_currentIndex;
    NSObject<OS_dispatch_queue> *_changedQueue;
    CDUnknownBlockType _changedHandler;
    NSMutableDictionary *_loadedIndex;
    NSMutableDictionary *_loadedConfigurations;
    NSKeyedUnarchiver *_decoder;
    long long _generation;
    NSData *_SCPreferencesSignature;
    NSUUID *_userUUID;
    id <NEConfigurationManagerDelegate> _delegate;
    long long _configurationChangeSource;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *outerQueue;
@property int changedNotifyToken;
@property (retain) NSDictionary *currentIndex;
@property (retain) NSObject<OS_dispatch_queue> *changedQueue;
@property (copy) CDUnknownBlockType changedHandler;
@property (retain) NSMutableDictionary *loadedIndex;
@property (retain) NSMutableDictionary *loadedConfigurations;
@property (retain) NSKeyedUnarchiver *decoder;
@property long long generation;
@property (readonly) NEHelper *helper;
@property (retain) NSData *SCPreferencesSignature;
@property _Bool hasReadPermission;
@property _Bool isVPNPublicAPI;
@property _Bool isVPNPrivateAPI;
@property _Bool isNEHelper;
@property _Bool hasVPNAPIEntitlement;
@property (readonly) NSUUID *userUUID;
@property (retain) id <NEConfigurationManagerDelegate> delegate;
@property (copy) CDUnknownBlockType incomingMessageHandler;
@property long long configurationChangeSource;
@property (readonly) NSString *pluginType;

+ (id)sharedManager;
+ (void)updateFlags:(unsigned long long *)arg1 withConfiguration:(id)arg2;
+ (_Bool)configurationIsEnabled:(id)arg1;
+ (long long)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2 sameTypeCount:(unsigned long long *)arg3;
+ (void)disableConfiguration:(id)arg1 onDemandOnly:(_Bool)arg2;
+ (id)sharedManagerForAllUsers;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)registerForChangeNotifications;
- (void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)postChangeNotification;
- (void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithPluginType:(id)arg1;
- (id)initWithUserUUID:(id)arg1;
- (void)sendRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2 onlyIfChanged:(_Bool)arg3;
- (void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)readIndexFromDiskWithError:(id *)arg1;
- (id)filterIndexWithFilter:(id)arg1;
- (void)notifyChanges;
- (void)clearLoadedConfigurationsWithIDs:(id)arg1;
- (id)decodeConfigurationWithIdentifier:(id)arg1;
- (void)didLoadConfiguration:(id)arg1;
- (_Bool)reloadFromDisk;
- (id)errorWithCode:(long long)arg1 specifics:(id)arg2;
- (id)copyChangedConfigurationIDs:(id)arg1;
- (void)getCurrentIndexWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2;
- (_Bool)configurationHasChanged:(id)arg1;
- (_Bool)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2;
- (id)makeMutableCopyOfIndex:(id)arg1;
- (id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences *)arg2 currentSignature:(id)arg3 userUUID:(id)arg4 notifyNow:(_Bool)arg5 isUpgrade:(_Bool)arg6;
- (id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(struct __SCPreferences *)arg2;
- (void)updateSCPreferencesSignatureOnDisk;
- (id)getConfigurationUserUUID:(id)arg1;
- (void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initForAllUsers;
- (void)postGeneration;
- (void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 isUpgrade:(_Bool)arg4 completionQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)syncConfigurationsWithSC:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)loadConfigurationAndUserWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setChangedQueue:(id)arg1 andHandler:(CDUnknownBlockType)arg2;
- (void)handleFileRemovedWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(struct __SCPreferences *)arg4;
- (void)handleApplicationsRemoved:(id)arg1 completionQueue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)copyIdentities:(id)arg1 fromDomain:(long long)arg2 withCompletionQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)triggerLocalAuthenticationForConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)showObsoleteAppAlert;
- (void)fetchClientListenerWithBundleID:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)fetchUpgradeInfoForPluginType:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)upgradeLegacyPluginConfigurationsWithUpgradeInfo:(id)arg1 completionQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)getCurrentUserUUIDForConfigurationID:(id)arg1 fromIndex:(id)arg2;

@end
