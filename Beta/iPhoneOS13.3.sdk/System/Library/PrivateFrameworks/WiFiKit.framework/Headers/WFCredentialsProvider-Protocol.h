/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/Swift-Protocol.h>

@class NSString;

@protocol WFCredentialsProvider <Swift>

@property (nonatomic, readonly) struct __SecIdentity *TLSIdentity;
@property (copy, nonatomic, readonly) NSString *username;
@property (copy, nonatomic, readonly) NSString *password;

@end
