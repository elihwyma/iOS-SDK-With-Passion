/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HMFoundation/HMFObject.h>

@interface HMNetworkConfigurationWiFiOptions : HMFObject

{
    long long _credentialType;
}

@property (nonatomic, readonly) long long credentialType;

- (id)description;
- (id)initWithCredentialType:(long long)arg1;

@end
