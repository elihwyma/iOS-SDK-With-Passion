/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <FMCore/FMSystemInfo.h>

__attribute__((visibility("hidden")))
@interface FMSystemInfo_ios : FMSystemInfo

- (_Bool)hasSEP;
- (id)deviceName;
- (id)serialNumber;
- (id)productType;
- (id)deviceClass;
- (id)_deviceInfoForKey:(struct __CFString *)arg1;
- (id)productName;
- (id)osVersion;
- (id)wifiMacAddress;
- (id)deviceUDID;
- (id)ecid;
- (id)chipId;
- (id)_deviceInfoNumberForKey:(struct __CFString *)arg1;
- (_Bool)_boolDeviceInfoForKey:(struct __CFString *)arg1;
- (id)osBuildVersion;
- (id)deviceModelName;
- (id)imei;
- (id)meid;
- (id)btMacAddress;
- (_Bool)isDeviceSecured;

@end
