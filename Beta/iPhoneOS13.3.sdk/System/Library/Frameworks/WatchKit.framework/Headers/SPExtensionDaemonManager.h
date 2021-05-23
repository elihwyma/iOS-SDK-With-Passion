/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SPExtensionDaemonManager : NSObject

{
    _Bool _active;
    long long _refCount;
    NSObject<OS_dispatch_source> *_transactionTimer;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSMutableSet *_transactionObservers;
    NSMutableDictionary *_coreLocationAsserts;
    NSObject<OS_dispatch_queue> *_coreLocationAssertsQueue;
}

@property (nonatomic) long long refCount;
@property (nonatomic) _Bool active;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *transactionTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue;
@property (retain, nonatomic) NSMutableSet *transactionObservers;
@property (retain, nonatomic) NSMutableDictionary *coreLocationAsserts;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coreLocationAssertsQueue;

+ (id)sharedInstance;

- (id)init;
- (void)beginTransaction;
- (void)endTransaction;
- (void)keepAlive;
- (void)addTransactionObserver:(id)arg1;
- (void)removeTransactionObserver:(id)arg1;
- (void)startTransactionTimer;
- (void)transactionTimeOut;

@end
