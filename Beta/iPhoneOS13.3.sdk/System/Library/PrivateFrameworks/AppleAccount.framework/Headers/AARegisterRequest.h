/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAAuthenticateRequest.h>

@class NSMutableDictionary;

@interface AARegisterRequest : AAAuthenticateRequest

{
    NSMutableDictionary *_additionalCookieHeaders;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithURLString:(id)arg1 username:(id)arg2 password:(id)arg3;
- (void)addCookieHeaders:(id)arg1;

@end
