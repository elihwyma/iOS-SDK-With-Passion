/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSAccount;

@interface SSUpdateAccountResponse : NSObject

{
    unsigned long long _credentialSource;
    SSAccount *_updatedAccount;
}

@property (nonatomic, readonly) unsigned long long credentialSource;
@property (nonatomic, readonly) SSAccount *updatedAccount;

- (id)initWithUpdatedAccount:(id)arg1 credentialSource:(unsigned long long)arg2;

@end
