/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CALNInMemoryTriggeredEventNotificationDataStorage : NSObject

{
    NSMutableDictionary *_notificationDataMap;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *notificationDataMap;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)notificationData;
- (id)notificationDataWithIdentifier:(id)arg1;
- (void)addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (void)removeNotificationDataWithIdentifier:(id)arg1;
- (void)removeNotificationData;

@end
