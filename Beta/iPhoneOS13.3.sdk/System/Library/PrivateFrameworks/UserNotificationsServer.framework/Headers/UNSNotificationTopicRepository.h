/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class UNSKeyedDataStoreRepository, UNSKeyedObservable;

@protocol OS_dispatch_queue;

@interface UNSNotificationTopicRepository : NSObject

{
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;
- (long long)_maxObjectsPerKey;
- (id)topicsForBundleIdentifier:(id)arg1;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (id)_queue_topicsForBundleIdentifier:(id)arg1;
- (void)_queue_setTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)setTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
