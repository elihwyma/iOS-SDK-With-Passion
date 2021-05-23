/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXNotificationsActionPredictionRecord, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ATXLockscreenTracker : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_recordsTable;
    ATXNotificationsActionPredictionRecord *_current;
}

- (id)init;
- (_Bool)isEmpty;
- (void)insertEvent:(long long)arg1 timestamp:(id)arg2 notificationID:(id)arg3;
- (id)getBundleIds;
- (_Bool)addNotificationRecord:(id)arg1 timestamp:(id)arg2;
- (_Bool)addNotificationId:(id)arg1 withBundle:(id)arg2 timestamp:(id)arg3;

@end
