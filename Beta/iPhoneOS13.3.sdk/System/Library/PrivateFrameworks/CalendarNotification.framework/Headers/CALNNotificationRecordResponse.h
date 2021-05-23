/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, CALNNotificationRecord, NSString;

@interface CALNNotificationRecordResponse : NSObject

{
    CALNNotificationRecord *_notificationRecord;
    NSString *_actionIdentifier;
    NSString *_originIdentifier;
    BSServiceConnectionEndpoint *_targetConnectionEndpoint;
}

@property (nonatomic, readonly) CALNNotificationRecord *notificationRecord;
@property (copy, nonatomic, readonly) NSString *actionIdentifier;
@property (copy, nonatomic, readonly) NSString *originIdentifier;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (id)responseWithNotificationRecord:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;

- (id)description;
- (id)initWithNotificationRecord:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;

@end
