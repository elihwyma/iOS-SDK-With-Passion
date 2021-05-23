/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <Foundation/NSObject.h>

@interface AADeviceInfo : NSObject

+ (id)infoDictionary;
+ (id)productVersion;
+ (id)serialNumber;
+ (id)osVersion;
+ (id)udid;
+ (id)apnsToken;
+ (id)appleIDClientIdentifier;
+ (id)currentInfo;
+ (id)clientInfoHeader;
+ (_Bool)locationServicesRestricted;
+ (_Bool)isInternalBuild;
+ (_Bool)isMultiUserMode;
+ (_Bool)hasiCloudSignOutRestriction;
+ (id)userAgentHeader;

- (id)productVersion;
- (id)deviceName;
- (id)serialNumber;
- (id)productType;
- (id)deviceClass;
- (id)buildVersion;
- (id)regionCode;
- (_Bool)hasCellularCapability;
- (id)osVersion;
- (id)modelNumber;
- (id)udid;
- (id)deviceColor;
- (id)deviceEnclosureColor;
- (id)apnsToken;
- (id)appleIDClientIdentifier;
- (id)clientInfoHeader;
- (id)osName;
- (id)deviceInfoDictionary;
- (id)wifiMacAddress;
- (id)bluetoothMacAddress;
- (id)deviceCoverGlassColor;
- (id)deviceHousingColor;
- (id)deviceBackingColor;
- (id)mobileEquipmentIdentifier;
- (id)internationalMobileEquipmentIdentity;
- (id)storageCapacity;
- (id)chipIdentifier;
- (id)uniqueChipIdentifier;
- (id)userAgentHeader;

@end
