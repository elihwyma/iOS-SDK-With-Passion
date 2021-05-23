/*
 Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class ACAccount, ACAccountStore;

@interface AAAppleIDSettingsRequest : AARequest

{
    ACAccountStore *_store;
    _Bool _forceGSToken;
    ACAccount *_grandSlamAccount;
}

@property (nonatomic, readonly) ACAccount *grandSlamAccount;
@property (nonatomic) _Bool forceGSToken;

+ (Class)responseClass;

- (id)urlRequest;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2;

@end
