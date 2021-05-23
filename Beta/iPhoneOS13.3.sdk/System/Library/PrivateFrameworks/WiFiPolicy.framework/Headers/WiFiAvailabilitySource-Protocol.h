/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/Swift-Protocol.h>

@protocol WiFiAvailabilitySource <Swift>

@property (copy, nonatomic) CDUnknownBlockType changeHandler;
@property (copy, nonatomic) CDUnknownBlockType relevancyHandler;

- (unsigned short)relevantNetworks;

@end
