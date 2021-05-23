/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMService.h>

#import <Home/Swift-Protocol.h>

@class HFServiceNameComponents, HFUserNotificationServiceSettings, HMCharacteristic, HMHome, HMRoom, NSDate, NSString, NSUUID;

@interface HMService (HFDebugging) <Swift>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_isFavorite;
@property (nonatomic, readonly) _Bool hf_hasSetFavorite;
@property (nonatomic, readonly) _Bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) _Bool hf_isProgrammableSwitch;
@property (nonatomic, readonly) HMCharacteristic *hf_labelIndexCharacteristic;
@property (nonatomic, readonly) HMCharacteristic *hf_labelNamespaceCharacteristic;
@property (nonatomic, readonly) unsigned long long hf_fallbackProgrammableSwitchIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hf_supportsHomeStatus;
@property (nonatomic, readonly) _Bool hf_isVisibleInHomeStatus;
@property (nonatomic, readonly) _Bool hf_hasSetVisibleInHomeStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (weak, nonatomic, readonly) HMHome *home;
@property (weak, nonatomic, readonly) HMRoom *hf_parentRoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSDate *hf_dateAdded;
@property (copy, nonatomic, readonly) NSString *hf_displayName;

+ (id)hf_sensorCharacteristicTypeForServiceType:(id)arg1;
+ (id)hf_programmableSwitchServiceTypes;
+ (id)hf_descriptionForServiceSubtype:(id)arg1;
+ (id)hf_requiredCharacteristicTypesForDisplayMetadataWithServiceType:(id)arg1;
+ (id)hf_roomsForServices:(id)arg1;
+ (CDUnknownBlockType)hf_serviceComparator;
+ (id)hf_standardServices;
+ (id)hf_standardServiceTypes;
+ (id)hf_allRequiredCharacteristicTypesForStandardServices;
+ (id)_hf_allowedChildServicesTypeMap;
+ (id)hf_defaultServiceSubtypeForServiceType:(id)arg1;

- (id)hf_characteristicOfType:(id)arg1;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_iconDescriptor;
- (id)hf_childServicesOfType:(id)arg1;
- (id)hf_childServices;
- (_Bool)hf_isValidObject;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(_Bool)arg1;
- (id)hf_effectiveServiceType;
- (_Bool)hf_supportsGroups;
- (id)hf_serviceDescriptor;
- (id)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;
- (_Bool)hf_isVisible;
- (id)hf_parentService;
- (id)hf_requiredCharacteristicTypesForDisplayMetadata;
- (_Bool)hf_isLegacyService;
- (_Bool)hf_isInGroup;
- (_Bool)hf_isTelevision;
- (_Bool)hf_canGroupWithService:(id)arg1;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_effectiveServiceSubtype;
- (_Bool)_hf_isDirectlyOrIndirectlyLinkedToService:(id)arg1;
- (_Bool)hf_isChildService;
- (id)_hf_firstLinkedServiceOfType:(id)arg1;
- (id)hf_updateUserNotificationSettings:(id)arg1;

@end
