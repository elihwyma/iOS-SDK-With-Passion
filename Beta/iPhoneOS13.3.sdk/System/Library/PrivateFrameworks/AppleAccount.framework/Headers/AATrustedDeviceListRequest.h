/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, NSString;

@interface AATrustedDeviceListRequest : AARequest

{
    AAGrandSlamSigner *_grandSlamSigner;
    NSString *_heartbeatToken;
}

@property (copy, nonatomic) NSString *heartbeatToken;

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3;

@end
