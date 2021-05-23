/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/CNTask.h>

@class ACAccountStore, CNResult, NSMutableArray;

@protocol CNDelegateAccountSink, CNDelegateAccountSource;

@interface CNFamilyCircleConfigurationUpdateTask : CNTask

{
    id <CNDelegateAccountSource> _accountSource;
    id <CNDelegateAccountSink> _accountSink;
    ACAccountStore *_accountStore;
    NSMutableArray *_delegateAccounts;
    CNResult *_result;
}

@property (nonatomic, readonly) id <CNDelegateAccountSource> accountSource;
@property (nonatomic, readonly) id <CNDelegateAccountSink> accountSink;
@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, readonly) NSMutableArray *delegateAccounts;
@property (retain, nonatomic) CNResult *result;

+ (id)os_log;

- (id)init;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)run:(id *)arg1;
- (id)initWithAccountSource:(id)arg1 accountSink:(id)arg2 accountStore:(id)arg3;
- (void)loadDefaultSourceIfNecessary;
- (void)loadDelegateAccountsFromSource;
- (void)loadDefaultSinkIfNecessary;
- (void)updateDelegateAccounts;

@end
