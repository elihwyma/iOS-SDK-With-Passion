/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class NSData;

@interface AASigningSessionRequest : AARequest

{
    NSData *_sessionInfoRequestData;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)initWithURLString:(id)arg1 sessionInfoRequestData:(id)arg2;

@end
