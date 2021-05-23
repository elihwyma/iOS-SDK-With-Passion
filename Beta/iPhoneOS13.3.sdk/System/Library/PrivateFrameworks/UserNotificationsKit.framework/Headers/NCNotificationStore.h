/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NCNotificationStore : NSObject

{
    NSMutableDictionary *_notificationSections;
}

@property (retain, nonatomic) NSMutableDictionary *notificationSections;
@property (nonatomic, readonly) unsigned long long sectionsCount;
@property (nonatomic, readonly) unsigned long long notificationRequestsCount;

- (id)init;
- (_Bool)addNotificationRequest:(id)arg1;
- (_Bool)removeNotificationRequest:(id)arg1;
- (_Bool)replaceNotificationRequest:(id)arg1;
- (id)notificationRequestMatchingNotificationIdentifier:(id)arg1 sectionIdentifier:(id)arg2;

@end
