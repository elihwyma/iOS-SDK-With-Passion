/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAFMIPAuthenticateResponse : AAResponse

{
    NSDictionary *_tokens;
    NSDictionary *_appleAccountInfo;
}

@property (nonatomic, readonly) NSString *fmipWipeToken;

- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
