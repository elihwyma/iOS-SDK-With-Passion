/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, CALNNotification, NSString;

@interface CALNNotificationResponse : NSObject

{
    CALNNotification *_notification;
    NSString *_actionIdentifier;
    NSString *_originIdentifier;
    BSServiceConnectionEndpoint *_targetConnectionEndpoint;
}

@property (nonatomic, readonly) CALNNotification *notification;
@property (copy, nonatomic, readonly) NSString *actionIdentifier;
@property (copy, nonatomic, readonly) NSString *originIdentifier;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *targetConnectionEndpoint;

+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToResponse:(id)arg1;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2 originIdentifier:(id)arg3 targetConnectionEndpoint:(id)arg4;

@end
