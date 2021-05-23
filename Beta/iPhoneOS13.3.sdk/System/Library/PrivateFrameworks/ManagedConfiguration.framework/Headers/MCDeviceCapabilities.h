/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@interface MCDeviceCapabilities : NSObject

{
    _Bool _supportsBlockLevelEncryption;
    _Bool _supportsFileLevelEncryption;
}

@property (nonatomic, readonly) _Bool supportsBlockLevelEncryption;
@property (nonatomic, readonly) _Bool supportsFileLevelEncryption;

+ (id)currentDevice;

- (id)init;
- (_Bool)_mediaDiskIsEncrypted;
- (_Bool)validateCapabilitiesRequiredByRestrictions:(id)arg1 localizedIncompatibilityMessage:(id)arg2 outError:(id *)arg3;

@end
