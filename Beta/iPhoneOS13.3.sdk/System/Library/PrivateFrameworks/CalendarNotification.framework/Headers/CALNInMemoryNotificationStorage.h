/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CALNInMemoryNotificationStorage : NSObject

{
    NSMutableDictionary *_recordMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *recordMap;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addNotificationRecord:(id)arg1;
- (id)notificationRecords;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1;
- (id)_notificationRecords;
- (void)_addNotificationRecord:(id)arg1;
- (void)_removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1;

@end
