/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSXPCInterface.h>

@interface NSXPCInterface (HMSetupRemoteProtocols)

+ (id)hm_userManagementRemoteServiceInterface;
+ (id)hm_userManagementRemoteHostInterface;
+ (id)hm_setupRemoteServiceInterface;
+ (id)hm_setupRemoteHostInterface;

@end
