/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@protocol CXAbstractProviderDelegate, CXAbstractProviderHostProtocol, OS_dispatch_queue;

@interface CXAbstractProvider : NSObject <Swift>

{
    NSMutableArray *_mutablePendingTransactions;
    NSObject<OS_dispatch_queue> *_queue;
    id <CXAbstractProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (nonatomic, readonly) NSMutableArray *mutablePendingTransactions;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id <CXAbstractProviderDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) id <CXAbstractProviderHostProtocol> hostProtocolDelegate;
@property (copy, nonatomic, readonly) NSArray *pendingTransactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)actionCompleted:(id)arg1;
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;
- (oneway void)commitTransaction:(id)arg1;
- (oneway void)handleActionTimeout:(id)arg1;
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (void)_handleConnectionInterruption;
- (id)_pendingActionWithUUID:(id)arg1;
- (void)_updatePendingTransactions;
- (void)_performAction:(id)arg1;
- (void)sendProviderDidBegin;
- (void)handleConnectionInterruption;

@end
