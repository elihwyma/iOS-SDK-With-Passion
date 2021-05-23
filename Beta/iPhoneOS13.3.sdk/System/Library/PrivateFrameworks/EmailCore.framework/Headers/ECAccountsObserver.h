/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSString;

@interface ECAccountsObserver : NSObject

{
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)initWithAccountStore:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_credentialsDidChange:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (void)handleAccountStoreChangeForAccountIdentifier:(id)arg1;
- (void)handleCredentialChangeForAccountIdentifier:(id)arg1;
- (void)handleMailAccountsHaveChanged:(id)arg1 accountsNeedInitialization:(_Bool)arg2;

@end
