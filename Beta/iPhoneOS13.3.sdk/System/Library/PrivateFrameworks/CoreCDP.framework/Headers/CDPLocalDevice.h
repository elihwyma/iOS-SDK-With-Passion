/*
 Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

#import <Foundation/NSObject.h>

@protocol CDPLocalDeviceSecretProxy;

@interface CDPLocalDevice : NSObject

{
    id <CDPLocalDeviceSecretProxy> _localSecretProxy;
}

+ (id)sharedInstance;
+ (_Bool)hasLocalSecret;

- (id)init;
- (id)hardwareModel;
- (id)deviceName;
- (id)serialNumber;
- (id)deviceClass;
- (id)osVersion;
- (id)modelVersion;
- (_Bool)hasLocalSecret;
- (_Bool)_currentProcessCreatesDaemonTypeProxy;
- (_Bool)_isHomePod;
- (_Bool)_currentProcessHasEntitlement:(id)arg1;
- (_Bool)supportsSecureBackupRecovery;
- (id)marketingModel;

@end
