/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

@interface ATXNotificationsDedupeTracker : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_recordsTable;
}

+ (id)sharedInstance;

- (id)init;
- (_Bool)addNotificationId:(id)arg1;
- (void)insertEvent:(long long)arg1 notificationID:(id)arg2;

@end
