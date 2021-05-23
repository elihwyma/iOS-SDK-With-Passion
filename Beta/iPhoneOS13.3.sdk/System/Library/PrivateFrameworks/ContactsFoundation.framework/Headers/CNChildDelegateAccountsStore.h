/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class ACAccount, ACAccountStore, NSString;

@interface CNChildDelegateAccountsStore : NSObject

{
    ACAccount *_parentAccount;
    ACAccountStore *_accountStore;
}

@property (nonatomic, readonly) ACAccount *parentAccount;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)os_log;
+ (void)configureChildAccount:(id)arg1 withSettingsFromDelegateInfo:(id)arg2 parent:(id)arg3;

- (id)primaryAccount;
- (id)updateAccount:(id)arg1;
- (id)removeAccount:(id)arg1;
- (id)delegateAccounts;
- (id)initWithParentAccount:(id)arg1 accountStore:(id)arg2;
- (_Bool)updateAccounts:(id)arg1 error:(id *)arg2;
- (id)addChildWithDelegateInfo:(id)arg1;

@end
