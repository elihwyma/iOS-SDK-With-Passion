/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKit/CKSQLite.h>

@class NSObject;

@protocol OS_dispatch_queue;

@interface CKDOperationMetricsCache : CKSQLite

{
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;

+ (id)sharedCache;
+ (id)dbFileName;

- (void)flushMetricsToPowerLog;
- (id)_initWithCacheDir:(id)arg1;
- (void)addOperationCombinedMetrics:(id)arg1 forOperationID:(id)arg2 operationType:(long long)arg3 operationGroupID:(id)arg4 operationGroupName:(id)arg5 operationGroupQuantity:(unsigned long long)arg6 operationQualityOfService:(long long)arg7 appContainerTuple:(id)arg8;

@end
