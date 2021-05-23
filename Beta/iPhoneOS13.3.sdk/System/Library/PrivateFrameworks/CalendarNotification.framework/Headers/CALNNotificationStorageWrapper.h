/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CALNNotificationStorage;

@interface CALNNotificationStorageWrapper : NSObject

{
    id <CALNNotificationStorage> _wrappedStorage;
}

@property (retain) id <CALNNotificationStorage> wrappedStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addNotificationRecord:(id)arg1;
- (id)notificationRecords;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1;
- (id)initWithWrappedStorage:(id)arg1;

@end
