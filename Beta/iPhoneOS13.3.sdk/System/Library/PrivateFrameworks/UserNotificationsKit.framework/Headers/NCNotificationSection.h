/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationSection : NSObject

{
    NSMutableDictionary *_requests;
}

@property (retain, nonatomic) NSMutableDictionary *requests;
@property (nonatomic, readonly) unsigned long long notificationRequestsCount;

- (id)init;
- (_Bool)addNotificationRequest:(id)arg1;
- (_Bool)removeNotificationRequest:(id)arg1;
- (_Bool)replaceNotificationRequest:(id)arg1;
- (id)notificationRequestMatchingNotificationIdentifier:(id)arg1;

@end
