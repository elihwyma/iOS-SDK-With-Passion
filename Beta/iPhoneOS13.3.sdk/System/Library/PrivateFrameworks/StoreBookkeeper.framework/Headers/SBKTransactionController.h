/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSNumber, NSOperationQueue, NSString, NSURL, SBKStoreAuthenticationController, SBKTaskAssertion, SBKTransaction, SSAccount;

@protocol OS_dispatch_queue, SBKTransactionControllerDelegate;

@interface SBKTransactionController : NSObject

{
    _Bool _enabled;
    _Bool _shouldAuthenticateIfNecessary;
    _Bool _isResolvingError;
    id <SBKTransactionControllerDelegate> _delegate;
    NSString *_domain;
    NSURL *_requestURL;
    SBKStoreAuthenticationController *_authenticationController;
    SBKTransaction *_currentTransaction;
    SSAccount *_account;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_pendingTransactions;
    SBKTaskAssertion *_backgroundTaskAssertion;
    id _networkTypeObserver;
    long long _conflictResolutionAttempts;
}

@property (retain) SSAccount *account;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSOperationQueue *operationQueue;
@property (retain) NSMutableArray *pendingTransactions;
@property (retain, nonatomic) SBKTransaction *currentTransaction;
@property _Bool isResolvingError;
@property (retain) SBKTaskAssertion *backgroundTaskAssertion;
@property (weak) id networkTypeObserver;
@property long long conflictResolutionAttempts;
@property (weak) id <SBKTransactionControllerDelegate> delegate;
@property (copy, readonly) NSString *domain;
@property (readonly) NSURL *requestURL;
@property (readonly, getter=isEnabled) _Bool enabled;
@property (readonly, getter=isIdle) _Bool idle;
@property (retain) SBKStoreAuthenticationController *authenticationController;
@property _Bool shouldAuthenticateIfNecessary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;

- (void)dealloc;
- (void)setEnabled:(_Bool)arg1;
- (void)setDomain:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)_endBackgroundTask;
- (void)setRequestURL:(id)arg1;
- (void)_beginBackgroundTask;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_networkTypeChangedNotification:(id)arg1;
- (void)_onQueue_endBackgroundTask;
- (id)_onQueue_clampsController;
- (void)_onQueue_processPendingTransactions;
- (void)_onQueue_cancelAllPendingTransactions:(id)arg1;
- (_Bool)_onQueue_isIdle;
- (void)scheduleTransaction:(id)arg1;
- (_Bool)_delegateShouldScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)_onQueue_scheduleTransaction:(id)arg1 isRetry:(_Bool)arg2;
- (void)_onQueue_transactionDidFail:(id)arg1 withError:(id)arg2;
- (void)_onQueue_cancelTransaction:(id)arg1 error:(id)arg2;
- (void)_storeOperationDidComplete:(id)arg1;
- (void)_onQueue_resolveError:(id)arg1 resolution:(int)arg2;
- (void)_onQueue_beginBackgroundTask;
- (void)_onQueue_transactionDidCancel:(id)arg1 withError:(id)arg2;
- (void)_onQueue_processCurrentTransaction;
- (_Bool)_onQueue_authenticationCanProcessTransaction:(id)arg1 error:(id *)arg2;
- (void)_enqueueStoreOperation:(id)arg1;
- (_Bool)_onQueue_canScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)_onQueue_addPendingTransaction:(id)arg1;
- (_Bool)_onQueue_isEnabledForTransaction:(id)arg1 error:(id *)arg2;
- (void)_onQueue_assertIsTransactionValid:(id)arg1 error:(id *)arg2;
- (_Bool)_onQueue_clampsCanScheduleTransaction:(id)arg1 error:(id *)arg2;
- (void)_delegateTransactionDidFinish:(id)arg1;
- (_Bool)_delegateTransactionDidFail:(id)arg1 withError:(id)arg2;
- (void)_resolveError:(id)arg1 resolution:(int)arg2;
- (void)_delegateTransactionDidCancel:(id)arg1 withError:(id)arg2;
- (void)_onQueue_currentTransactionDidFinish;
- (void)_processDataInResponse:(id)arg1;
- (void)_onQueue_performRetryErrorHandlingForError:(id)arg1;
- (void)_onQueue_performCancelErrorHandlingForError:(id)arg1;
- (void)_onQueue_performDefaultErrorHandlingForError:(id)arg1;
- (_Bool)_sendFinishedBlockForTransaction:(id)arg1 success:(_Bool)arg2 cancelled:(_Bool)arg3 error:(id)arg4 handledAsFinishedBlock:(_Bool *)arg5;
- (void)_onQueue_processOperationOutput:(id)arg1 operation:(id)arg2 operationAuthenticated:(_Bool)arg3;
- (id)initWithDomain:(id)arg1 requestURL:(id)arg2;
- (void)scheduleTransaction:(id)arg1 withTransactionFinishedBlock:(CDUnknownBlockType)arg2;
- (void)cancelScheduledTransaction:(id)arg1;
- (void)cancelAllTransactions;
- (void)cancelAllTransactionsCancelCode:(long long)arg1;

@end
