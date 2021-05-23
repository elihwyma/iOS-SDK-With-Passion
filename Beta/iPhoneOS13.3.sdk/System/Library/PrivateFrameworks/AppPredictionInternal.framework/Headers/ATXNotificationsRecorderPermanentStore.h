/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <AppPredictionInternal/ATXNotificationsDatabase.h>

@class ATXLockscreenTracker, ATXNotificationRecorder, ATXNotificationsDedupeTracker, NSDate, NSObject;

@protocol OS_dispatch_source;

@interface ATXNotificationsRecorderPermanentStore : ATXNotificationsDatabase

{
    NSObject<OS_dispatch_source> *_timer;
    ATXNotificationRecorder *_internalRecorder;
    ATXLockscreenTracker *_lockscreenTracker;
    ATXNotificationsDedupeTracker *_dedupeTracker;
    NSDate *_lastUpdate;
}

@property (retain) NSDate *lastUpdate;

+ (id)sharedInstance;

- (id)_init;
- (_Bool)migrate;
- (long long)latestVersion;
- (void)replay;
- (void)submitGrading:(id)arg1 rating:(id)arg2 category:(id)arg3 userId:(id)arg4;
- (id)createCustomSchema;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)insertAppLaunchEvent:(id)arg1 timestamp:(id)arg2;
- (void)insertTapCoalesceEvent:(id)arg1 bundleId:(id)arg2 timestamp:(id)arg3;
- (void)resetNotificationsHistory;
- (void)addNotificationsRecordWithMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)addNotificationsRecordWithSerializedMetadata:(id)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (void)addNotificationRecordInRecentStore:(id)arg1 timestamp:(id)arg2;
- (id)getLockscreenBundleIds;
- (void)replayWithCallback:(CDUnknownBlockType)arg1;

@end
