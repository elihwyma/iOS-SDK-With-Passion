/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBTransaction.h>

@class NSMutableSet, NSString;

@protocol FBSynchronizedTransactionDelegate, FBSynchronizedTransactionGroupDelegate;

@interface FBSynchronizedTransactionGroup : FBTransaction

{
    _Bool _commitAllowed;
    _Bool _readyForCommit;
    _Bool _didCommit;
    NSMutableSet *_synchronizedTransactions;
    NSMutableSet *_synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet *_synchronizedTransactionsReadyToCommit;
    id <FBSynchronizedTransactionGroupDelegate> _synchronizationDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (id)init;
- (_Bool)_canBeInterrupted;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)addSynchronizedTransaction:(id)arg1;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (void)performSynchronizedCommit;
- (_Bool)isReadyForSynchronizedCommit;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)_checkPreconditionsAndCommitIfReady;
- (void)_performSynchronizedCommitIfReady;
- (id)synchronizedTransactions;

@end
