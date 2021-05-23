/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@interface TRISystemConfiguration : NSObject

+ (id)osBuild;
+ (_Bool)setDeviceIdentifier:(id)arg1;
+ (id)osType;
+ (id)deviceClass;
+ (id)deviceLocale;
+ (id)deviceId;
+ (_Bool)isInternalBuild;
+ (id)systemInfo;
+ (id)deviceModelCode;
+ (_Bool)isBetaBuild;
+ (_Bool)isBetaUser;
+ (_Bool)deleteDeviceIdentifier;
+ (id)createPersistentDeviceIdentifier;
+ (_Bool)deleteDeviceIdentifierWithPath:(id)arg1;
+ (_Bool)setDeviceIdentifier:(id)arg1 path:(id)arg2;
+ (id)readDeviceIdentifierWithPath:(id)arg1;
+ (id)createDeviceIdentifierWithPath:(id)arg1;
+ (id)storedDeviceIdentifier;
+ (id)deviceInfoForQuestion:(id)arg1;
+ (id)reloadSystemInfo;
+ (_Bool)resetDeviceIdentifier;
+ (id)reloadDeviceId;

@end
