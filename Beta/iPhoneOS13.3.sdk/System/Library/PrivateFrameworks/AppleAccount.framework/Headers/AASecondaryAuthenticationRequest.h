/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class NSString;

@interface AASecondaryAuthenticationRequest : AARequest

{
    NSString *_primaryToken;
    NSString *_dsid;
}

+ (Class)responseClass;

- (id)urlRequest;
- (id)urlString;
- (id)initWithDSID:(id)arg1 primaryToken:(id)arg2;

@end
