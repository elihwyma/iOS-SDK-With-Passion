/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class ACAccount, NSDictionary;

@interface AMSAuthKitUpdateResult : NSObject

{
    ACAccount *_account;
    NSDictionary *_authenticationResults;
    unsigned long long _credentialSource;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) NSDictionary *authenticationResults;
@property (nonatomic, readonly) unsigned long long credentialSource;

+ (id)_createUpdatedAccount:(id)arg1 usingAuthenticationResults:(id)arg2 option:(id)arg3;

- (id)initWithAccount:(id)arg1 authenticationResults:(id)arg2 credentialSource:(unsigned long long)arg3 options:(id)arg4;

@end
