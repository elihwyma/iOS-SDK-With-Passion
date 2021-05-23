/*
 Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSString;

@protocol OS_dispatch_queue, OS_os_transaction;

@interface FMXPCTransactionManager : NSObject

{
    NSObject<OS_dispatch_queue> *_txn_ops_queue;
    NSCountedSet *_activeTransactions;
    NSString *_keepAliveActivityIdentifier;
    NSObject<OS_os_transaction> *_masterTransaction;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *txn_ops_queue;
@property (retain, nonatomic) NSCountedSet *activeTransactions;
@property (retain, nonatomic) NSString *keepAliveActivityIdentifier;
@property (retain, nonatomic) NSObject<OS_os_transaction> *masterTransaction;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)initSingleton;
- (void)_disableKeepAlive;
- (void)beginTransaction:(id)arg1;
- (void)_disableLaunchOnRebootActivity:(id)arg1;
- (void)_disableOldKeepAliveActivity;
- (void)_enableKeepAlive;
- (void)setLaunchOnRebootActivity:(id)arg1 keepAliveActivity:(id)arg2;
- (void)endTransaction:(id)arg1;
- (id)dumpActiveTransactions;

@end
