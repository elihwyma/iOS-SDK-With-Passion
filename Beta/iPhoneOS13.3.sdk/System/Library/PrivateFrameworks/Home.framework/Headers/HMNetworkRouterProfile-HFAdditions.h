/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMNetworkRouterProfile.h>

@class NSString;

@interface HMNetworkRouterProfile (HFAdditions)

@property (nonatomic, readonly) _Bool hf_isConnected;
@property (copy, nonatomic, readonly) NSString *hf_statusLocalizedDescription;

- (id)hf_iconDescriptor;

@end
