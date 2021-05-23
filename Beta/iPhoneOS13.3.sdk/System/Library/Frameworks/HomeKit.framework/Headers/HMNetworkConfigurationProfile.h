/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessoryProfile.h>

@class HMAccessoryNetworkAccessViolation, NSArray, NSString;

@protocol HMNetworkConfigurationProfileDelegate;

@interface HMNetworkConfigurationProfile : HMAccessoryProfile

{
    id <HMNetworkConfigurationProfileDelegate> _delegate;
}

@property (readonly) long long targetProtectionMode;
@property (readonly) long long currentProtectionMode;
@property (readonly) NSArray *allowedHosts;
@property (readonly) HMAccessoryNetworkAccessViolation *accessViolation;
@property (readonly) _Bool supportsWiFiReconfiguration;
@property (readonly) long long credentialType;
@property (weak, nonatomic) id <HMNetworkConfigurationProfileDelegate> delegate;
@property (nonatomic, readonly, getter=isNetworkAccessRestricted) _Bool networkAccessRestricted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)networkConfigurationProfileDidUpdateProtectionMode:(id)arg1;
- (void)networkConfigurationProfileDidUpdateNetworkAccessMode:(id)arg1;
- (void)networkConfigurationProfileDidUpdateAllowedHosts:(id)arg1;
- (void)networkConfigurationProfileDidUpdateAccessViolation:(id)arg1;
- (void)networkConfigurationProfileDidUpdateWiFiReconfigurationSupport:(id)arg1;
- (void)networkConfigurationProfileDidUpdateWiFiCredentialType:(id)arg1;
- (id)initWithAccessoryIdentifier:(id)arg1 targetProtection:(long long)arg2 currentProtection:(long long)arg3 networkAccessRestricted:(_Bool)arg4 allowedHosts:(id)arg5 accessViolation:(id)arg6 supportsWiFiReconfiguration:(_Bool)arg7 credentialType:(long long)arg8;
- (void)updateProtectionMode:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reconfigureWiFiWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
