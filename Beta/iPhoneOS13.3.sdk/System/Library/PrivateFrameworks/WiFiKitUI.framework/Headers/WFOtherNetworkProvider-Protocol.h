/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <WiFiKitUI/Swift-Protocol.h>

@class NSString;

@protocol WFOtherNetworkProvider <Swift>

@property (copy, nonatomic, readonly) NSString *SSID;
@property (nonatomic, readonly) long long securityMode;
@property (nonatomic) _Bool joining;
@property (nonatomic) NSString *activityString;
@property (nonatomic, readonly) id WAPIIdentity;
@property (nonatomic, readonly) id WAPIRootCertificate;

@end
