/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BDSOSTransaction, BUCoalescingCallBlock, NSString;

@protocol BCCloudKitTransactionDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface BCCloudKitTransaction : NSObject

{
    NSString *_entityName;
    BUCoalescingCallBlock *_coalescedNotification;
    BDSOSTransaction *_osTransaction;
    NSObject<OS_dispatch_queue> *_lifecycleAccessQueue;
    NSObject<OS_dispatch_source> *_transactionLifetime;
    id <BCCloudKitTransactionDelegate> _delegate;
    long long _clientCount;
}

@property (copy, nonatomic) NSString *entityName;
@property (retain, nonatomic) BUCoalescingCallBlock *coalescedNotification;
@property (retain, nonatomic) BDSOSTransaction *osTransaction;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lifecycleAccessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *transactionLifetime;
@property (weak, nonatomic) id <BCCloudKitTransactionDelegate> delegate;
@property (nonatomic) long long clientCount;

+ (id)transactionNameForEntityName:(id)arg1;

- (void)signal;
- (id)initWithEntityName:(id)arg1 delegate:(id)arg2;
- (void)performWorkWithCompletion:(CDUnknownBlockType)arg1;
- (double)coalescingDelay;
- (double)transactionLifetimeTimout;
- (id)transactionName;
- (void)clientConnected;
- (void)laq_scheduleTransactionLifetime;

@end
