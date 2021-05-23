/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMAccessoryNetworkProtectionGroup.h>

@class HMHome, NSArray, NSString;

@interface HMAccessoryNetworkProtectionGroup (HFAdditions)

@property (nonatomic, readonly) NSArray *hf_networkConfigurationProfiles;
@property (nonatomic, readonly) HMHome *hf_home;
@property (copy, nonatomic, readonly) NSString *hf_title;
@property (nonatomic, readonly) long long hf_displayCurrentProtectionMode;

+ (id)hf_updateProtectionMode:(long long)arg1 forGroups:(id)arg2;

- (id)hf_updateProtectionMode:(long long)arg1;

@end
