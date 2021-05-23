/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableArray, NSString, PKAccount;

@protocol NPKAccountPassManagerDelegate, OS_dispatch_queue;

@interface NPKAccountPassManager : NSObject

{
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
    id <NPKAccountPassManagerDelegate> _delegate;
    NSString *_accountIdentifier;
    PKAccount *_account;
    NSDate *_lastAccountUpdateDate;
    NSMutableArray *_accountDetails;
}

@property (retain, nonatomic) PKAccount *account;
@property (retain, nonatomic) NSDate *lastAccountUpdateDate;
@property (retain, nonatomic) NSMutableArray *accountDetails;
@property (nonatomic, readonly) NSString *accountIdentifier;
@property (weak, nonatomic) id <NPKAccountPassManagerDelegate> delegate;

- (void)_updateAccount;
- (void)handleAccountsChangedNotification:(id)arg1;
- (void)forceAccountRefresh;
- (void)_updateAccountDetailsWithAccount:(id)arg1;
- (id)initForAccountIdentifier:(id)arg1;
- (void)refreshAccountIfNecessary;
- (id)accountPassDetails;

@end
