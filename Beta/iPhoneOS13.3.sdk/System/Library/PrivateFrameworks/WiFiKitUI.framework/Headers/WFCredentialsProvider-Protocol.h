/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <WiFiKitUI/Swift-Protocol.h>

@class NSString;

@protocol WFCredentialsProvider <Swift>

@property (nonatomic, readonly) struct __SecIdentity *TLSIdentity;
@property (copy, nonatomic, readonly) NSString *username;
@property (copy, nonatomic, readonly) NSString *password;

@end
