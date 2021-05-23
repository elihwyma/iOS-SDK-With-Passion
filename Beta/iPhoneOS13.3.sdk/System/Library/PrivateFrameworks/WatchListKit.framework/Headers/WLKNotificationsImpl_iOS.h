/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSObject.h>

#import <WatchListKit/Swift-Protocol.h>

@class NSString;

@protocol WLKNotificationCenterDelegate;

@interface WLKNotificationsImpl_iOS : NSObject <Swift>

{
    _Bool _topicsAreInitialized;
    id <WLKNotificationCenterDelegate> delegate;
}

@property (nonatomic) _Bool topicsAreInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <WLKNotificationCenterDelegate> delegate;

+ (id)_JSONDictForResponse:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)_notificationCenter;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setBadgeString:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setBadgeNumber:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didOpenApplicationForResponse:(id)arg2;
- (void)_storeFrontChangedNotification:(id)arg1;
- (void)post:(id)arg1 title:(id)arg2 body:(id)arg3 options:(id)arg4;
- (_Bool)isCategoryEnabledByUser:(long long)arg1;
- (id)_topicIdentifierForCategory:(long long)arg1;
- (void)_networkReachabilityDidChangeNotification:(id)arg1;
- (void)_initializeTopics;
- (unsigned long long)_authOptions;
- (void)_fetchTopics:(CDUnknownBlockType)arg1;
- (id)_displayNameForSubsectionID:(id)arg1;

@end
