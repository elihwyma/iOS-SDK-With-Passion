/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class PTTestRecipe, UNUserNotificationCenter;

@interface UNSExampleUserNotificationCenter : NSObject

{
    UNUserNotificationCenter *_userNotificationCenter;
    PTTestRecipe *_basicTestRecipe;
}

- (id)init;
- (void)publish;
- (void)update;
- (id)sectionIdentifier;
- (void)removeAllNotifications;
- (id)_userNotificationCenter;
- (id)_basicPostUpdateRecipe;
- (void)publishWithNumberOfUniqueThreads:(unsigned long long)arg1;
- (void)_postNotificationWithID:(id)arg1 threadIdentifier:(id)arg2;
- (void)publish:(unsigned long long)arg1 numberOfUniqueThreads:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_existingNotificationRequestForIdentifier:(id)arg1;
- (id)_newNotificationRequest:(id)arg1 threadIdentifier:(id)arg2;
- (id)latestNotificationRequestIdentifier;
- (void)publish:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
