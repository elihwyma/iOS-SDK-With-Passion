/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

#import <BookDataStore/Swift-Protocol.h>

@class BCCloudKitController, BDSServiceProxy, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface BCCloudKitTransactionManager : NSObject <Swift>

{
    BCCloudKitController *_cloudKitController;
    NSObject<OS_dispatch_queue> *_transactionAccessQueue;
    NSMutableDictionary *_transactions;
    BDSServiceProxy *_serviceProxy;
}

@property (weak, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *transactionAccessQueue;
@property (retain, nonatomic) NSMutableDictionary *transactions;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)signalFetchChangesTransaction:(id)arg1;
- (id)initWithCloudKitController:(id)arg1;
- (void)signalSyncToCKTransactionForEntityName:(id)arg1 syncManager:(id)arg2;
- (void)transactionCompleted:(id)arg1;
- (void)signalDataChangeTransactionForEntityName:(id)arg1 notificationName:(id)arg2;
- (void)signalFetchChangesTransactionInService:(id)arg1;

@end
