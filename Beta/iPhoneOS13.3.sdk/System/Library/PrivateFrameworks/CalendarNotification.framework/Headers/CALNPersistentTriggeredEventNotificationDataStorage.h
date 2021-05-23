/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class CALNInMemoryTriggeredEventNotificationDataStorage, NSString;

@protocol OS_dispatch_queue;

@interface CALNPersistentTriggeredEventNotificationDataStorage : NSObject

{
    NSString *_path;
    CALNInMemoryTriggeredEventNotificationDataStorage *_inMemoryStorage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (copy, nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) CALNInMemoryTriggeredEventNotificationDataStorage *inMemoryStorage;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)persistentStorageWithPath:(id)arg1 error:(id *)arg2;
+ (id)notificationDataFromPersistentStorageWithPath:(id)arg1 error:(id *)arg2;

- (id)initWithPath:(id)arg1;
- (id)notificationData;
- (id)notificationDataWithIdentifier:(id)arg1;
- (void)addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (void)removeNotificationDataWithIdentifier:(id)arg1;
- (void)removeNotificationData;
- (_Bool)_loadDataWithError:(id *)arg1;
- (_Bool)_saveDataWithError:(id *)arg1;
- (void)_removeData;
- (void)_addNotificationData:(id)arg1 withIdentifier:(id)arg2;
- (void)_removeNotificationDataWithIdentifier:(id)arg1;

@end
