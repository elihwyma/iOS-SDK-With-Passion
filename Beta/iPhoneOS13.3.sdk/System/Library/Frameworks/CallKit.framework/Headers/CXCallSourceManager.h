/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class CXTransactionGroup, CXTransactionManager, NSArray, NSMutableSet, NSString, NSXPCListener;

@protocol CXCallSourceManagerDelegate, OS_dispatch_queue;

@interface CXCallSourceManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    id <CXCallSourceManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSXPCListener *_xpcListener;
    NSMutableSet *_mutableCallSources;
    CXTransactionGroup *_uncommittedTransactionGroup;
    CXTransactionManager *_transactionManager;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CXCallSourceManagerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) NSMutableSet *mutableCallSources;
@property (retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup;
@property (retain, nonatomic) CXTransactionManager *transactionManager;
@property (nonatomic, readonly) NSArray *callSources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)callSourceInvalidated:(id)arg1;
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;
- (void)addCallSource:(id)arg1;
- (void)removeCallSource:(id)arg1;
- (void)callSource:(id)arg1 registeredWithConfiguration:(id)arg2;
- (void)callSource:(id)arg1 reportedNewIncomingCallWithUUID:(id)arg2 update:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 updated:(id)arg3;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 endedAtDate:(id)arg3 privateReason:(long long)arg4 failureContext:(id)arg5;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 sentInvitationAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 connectedAtDate:(id)arg3;
- (void)callSource:(id)arg1 reportedAudioFinishedForCallWithUUID:(id)arg2;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedFrequencyData:(id)arg3 forDirection:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedMeterLevel:(float)arg3 forDirection:(long long)arg4;
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 crossDeviceIdentifier:(id)arg3 changedBytesOfDataUsed:(long long)arg4;
- (void)callSource:(id)arg1 requestedTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)callSource:(id)arg1 actionCompleted:(id)arg2;
- (void)callSourceConnectionStarted:(id)arg1;
- (void)callSourceConnectionEnded:(id)arg1;
- (void)transactionManager:(id)arg1 actionTimedOut:(id)arg2 forCallSource:(id)arg3;
- (void)transactionManager:(id)arg1 transactionGroupCompleted:(id)arg2;
- (id)callSourceWithIdentifier:(id)arg1;
- (void)commitTransaction:(id)arg1 toCallSource:(id)arg2;
- (void)addAction:(id)arg1 toUncommittedTransactionForCallSource:(id)arg2;
- (void)commitUncommittedTransactions;

@end
