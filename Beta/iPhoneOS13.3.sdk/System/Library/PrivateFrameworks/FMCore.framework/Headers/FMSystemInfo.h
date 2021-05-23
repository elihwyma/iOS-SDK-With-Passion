/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@interface FMSystemInfo : NSObject

+ (id)sharedInstance;

- (_Bool)hasSEP;
- (id)deviceName;
- (id)serialNumber;
- (id)productType;
- (id)deviceClass;
- (id)productName;
- (id)osVersion;
- (_Bool)isInternalBuild;
- (id)wifiMacAddress;
- (id)deviceUDID;
- (id)ecid;
- (id)chipId;
- (id)osBuildVersion;
- (id)deviceModelName;
- (id)imei;
- (id)meid;
- (id)btMacAddress;
- (_Bool)isDeviceSecured;
- (id)ownerAccount;

@end
