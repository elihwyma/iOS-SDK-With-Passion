/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class BSCFBundle;

@interface UNSNotificationTopicRecordMapper : NSObject

{
    BSCFBundle *_bundle;
}

- (id)initWithBundle:(id)arg1;
- (id)notificationTopicForNotificationTopicRecord:(id)arg1;

@end
