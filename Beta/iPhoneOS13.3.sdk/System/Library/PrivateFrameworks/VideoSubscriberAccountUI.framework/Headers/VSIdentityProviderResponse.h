/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class VSAccount, VSAccountMetadata, VSOptional;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderResponse : NSObject

{
    _Bool _didCreateAccount;
    VSAccountMetadata *_accountMetadata;
    VSAccount *_account;
    VSOptional *_logoLoadOperation;
}

@property (copy, nonatomic) VSAccountMetadata *accountMetadata;
@property (retain, nonatomic) VSAccount *account;
@property (nonatomic) _Bool didCreateAccount;
@property (retain, nonatomic) VSOptional *logoLoadOperation;

- (id)init;
- (id)description;

@end
