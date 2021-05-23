/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXNotificationsLogger, ATXScreenRepresentation, NSMutableDictionary, NSMutableString, _ATXAppLaunchCategoricalHistogram, _ATXAppLaunchHistogram;

@protocol OS_dispatch_queue;

@interface ATXNotificationRecorder : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    ATXScreenRepresentation *_onLockScreen;
    ATXScreenRepresentation *_offScreen;
    NSMutableDictionary *_recordsTable;
    NSMutableDictionary *_relatedApps;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
    ATXNotificationsLogger *_logger;
    NSMutableString *_logCache;
}

- (id)init;
- (void)reset;
- (void)expungeExpiredRecords;
- (void)expungeExpiredRecordsWithCacheOption:(_Bool)arg1;
- (void)_addNotificationsRecord:(id)arg1;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3 enableLogCache:(_Bool)arg4;
- (void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2;
- (void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3;
- (void)getPositionForId:(id)arg1 position:(unsigned long long *)arg2 onlockscreen:(_Bool *)arg3;
- (void)clearAllAtTimestamp:(id)arg1;
- (id)flushRecords;
- (void)logRecordInAggd:(id)arg1;
- (void)_appendRecordToCache:(id)arg1;
- (id)flushLogCache;
- (void)resetNotificationsHistory;

@end
