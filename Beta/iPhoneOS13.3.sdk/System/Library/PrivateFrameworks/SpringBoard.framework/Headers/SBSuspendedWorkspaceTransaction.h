/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class NSMapTable, NSMutableSet, NSString;

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction

{
    NSMapTable *_launchTransactionToSceneEntityMap;
    NSMutableSet *_outstandingProcessLaunchTransactions;
    NSMutableSet *_incompleteProcessLaunchTransactions;
    _Bool _anyLaunchFailed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_begin;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)transaction:(id)arg1 willLaunchProcess:(id)arg2;
- (void)_sendActivationResultWithSuccess:(_Bool)arg1;

@end
