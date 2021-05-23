/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Foundation/NSObject.h>

@class ACAccountStore;

@protocol ACUIAccountOperationsDelegate, OS_dispatch_queue;

@interface ACUIAccountOperationsHelper : NSObject

{
    ACAccountStore *_accountStore;
    NSObject<OS_dispatch_queue> *_accountOperationsQueue;
    _Bool _isRemovingAccount;
    _Bool _isSavingAccount;
    id <ACUIAccountOperationsDelegate> _delegate;
}

@property _Bool isSavingAccount;
@property _Bool isRemovingAccount;
@property (weak, nonatomic) id <ACUIAccountOperationsDelegate> delegate;

- (id)initWithAccountStore:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)saveAccount:(id)arg1 requireVerification:(_Bool)arg2;
- (void)saveAccount:(id)arg1 requireVerification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_desiredDataclassActionsFromPossibleActions:(id)arg1 forAccount:(id)arg2 withError:(id *)arg3;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2 requireVerification:(_Bool)arg3;
- (void)saveAccount:(id)arg1;
- (void)saveAccount:(id)arg1 withDataclassActions:(id)arg2;

@end
