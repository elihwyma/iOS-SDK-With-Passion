/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSData;

@interface AASigningSessionResponse : AAResponse

{
    NSData *_sessionData;
}

@property (retain, nonatomic) NSData *sessionData;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
