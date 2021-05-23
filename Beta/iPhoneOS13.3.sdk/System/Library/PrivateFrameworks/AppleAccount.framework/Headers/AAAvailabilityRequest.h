/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAAvailabilityRequest : AARequest

{
    ACAccount *_account;
}

+ (Class)responseClass;

- (id)initWithAccount:(id)arg1;
- (id)urlRequest;
- (id)urlString;

@end
