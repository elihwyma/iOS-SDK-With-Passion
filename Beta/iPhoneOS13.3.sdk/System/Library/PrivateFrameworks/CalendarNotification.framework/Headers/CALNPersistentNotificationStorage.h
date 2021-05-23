/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNInMemoryNotificationStorage, NSString;

@protocol OS_dispatch_queue;

@interface CALNPersistentNotificationStorage : NSObject

{
    NSString *_path;
    CALNInMemoryNotificationStorage *_inMemoryStorage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (copy, nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) CALNInMemoryNotificationStorage *inMemoryStorage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)notificationRecordsFromPersistentNotificationStorageWithPath:(id)arg1 error:(id *)arg2;
+ (id)persistentNotificationStorageWithPath:(id)arg1 error:(id *)arg2;

- (id)initWithPath:(id)arg1;
- (void)addNotificationRecord:(id)arg1;
- (id)notificationRecords;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)_loadNotificationsWithError:(id *)arg1;
- (_Bool)_saveNotificationsWithError:(id *)arg1;

@end
