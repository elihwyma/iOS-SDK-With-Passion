/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessory, HMApplicationData, HMBulletinBoardNotification, HMFUnfairLock, HMMutableArray, NSArray, NSDictionary, NSNumber, NSString, NSURL, NSUUID, _HMContext;

@interface HMService : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _nameModifiable;
    _Bool _userInteractive;
    _Bool _primaryService;
    _Bool _mediaSourceDisplayOrderModifiable;
    NSUUID *_uniqueIdentifier;
    HMAccessory *_accessory;
    NSString *_serviceType;
    NSString *_name;
    NSString *_configuredName;
    NSString *_defaultName;
    NSString *_associatedServiceType;
    NSString *_serviceSubtype;
    long long _configurationState;
    HMApplicationData *_applicationData;
    HMBulletinBoardNotification *_bulletinBoardNotificationInternal;
    NSURL *_homeObjectURLInternal;
    NSNumber *_mediaSourceIdentifier;
    _HMContext *_context;
    NSNumber *_instanceID;
    HMMutableArray *_currentCharacteristics;
    NSNumber *_lastKnownDiscoveryMode;
    NSUUID *_uuid;
    NSArray *_linkedServiceInstanceIDs;
    NSArray *_mediaSourceDisplayOrder;
}

@property (copy, readonly) NSDictionary *serializedDictionaryRepresentation;
@property (retain, nonatomic) _HMContext *context;
@property (nonatomic, readonly) NSNumber *instanceID;
@property (weak, nonatomic) HMAccessory *accessory;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSString *defaultName;
@property (copy, nonatomic) NSString *associatedServiceType;
@property (copy, nonatomic) NSString *serviceSubtype;
@property (nonatomic) long long configurationState;
@property (nonatomic, readonly) HMBulletinBoardNotification *bulletinBoardNotificationInternal;
@property (nonatomic, readonly) NSURL *homeObjectURLInternal;
@property (copy, nonatomic) HMMutableArray *currentCharacteristics;
@property (copy, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property (retain, nonatomic) NSNumber *mediaSourceIdentifier;
@property _Bool nameModifiable;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic, readonly) NSArray *linkedServiceInstanceIDs;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property (nonatomic) _Bool mediaSourceDisplayOrderModifiable;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (copy, nonatomic, readonly) NSArray *characteristics;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, getter=isUserInteractive) _Bool userInteractive;
@property (nonatomic, readonly, getter=isPrimaryService) _Bool primaryService;
@property (copy, nonatomic, readonly) NSArray *linkedServices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (copy, readonly) NSUUID *applicationDataIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
+ (id)serviceWithServiceReference:(id)arg1 home:(id)arg2;
+ (id)serviceWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2;
+ (long long)_mapToServiceConfigurationStateFromIsConfiguredValue:(id)arg1;
+ (void)initializeCharacteristicDictionaries;
+ (id)_serviceTypeAsString:(id)arg1;
+ (id)defaultCharacteristicByServiceDictionary;
+ (id)characteristicBlacklistForShortcutConditions;
+ (id)_mapToIsConfiguredValueFromServiceConfigurationState:(long long)arg1;
+ (id)__localizedDescriptionForServiceType:(id)arg1;
+ (id)localizedDescriptionForServiceType:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setApplicationData:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)bulletinBoardNotification;
- (id)_findCharacteristic:(id)arg1;
- (id)homeObjectURL;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_removeCharacteristic:(id)arg1;
- (void)_addCharacteristic:(id)arg1;
- (void)_handleUpdateName:(id)arg1;
- (void)_handleUpdateDefaultName:(id)arg1;
- (void)_handleUpdateAssociatedServiceType:(id)arg1;
- (void)_handleUpdateServiceSubtype:(id)arg1;
- (void)_handleUpdateConfigurationState:(long long)arg1;
- (void)_handleMediaSourceIdentifierUpdated:(id)arg1;
- (id)_findCharacteristicWithUniqueIdentifier:(id)arg1;
- (id)_serviceTypeDescription;
- (id)characteristicsSupportedForShortcutConditions;
- (_Bool)isNameModifiable;
- (void)_updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateConfigurationState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addLastKnownSleepDiscoveryModeDidUpdateDelegateCallbackToOperations:(id)arg1;
- (_Bool)_hasCharacteristic:(id)arg1;
- (id)defaultCharacteristic;
- (_Bool)hasSleepDiscoveryMode;
- (long long)lastKnownSleepDiscoveryMode;
- (void)updateAssociatedServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateConfigurationState:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleUpdateServicePrimary:(id)arg1;
- (void)_handleMarkServiceInteractive:(id)arg1;
- (_Bool)_hasCharacteristicOfType:(id)arg1;

@end
