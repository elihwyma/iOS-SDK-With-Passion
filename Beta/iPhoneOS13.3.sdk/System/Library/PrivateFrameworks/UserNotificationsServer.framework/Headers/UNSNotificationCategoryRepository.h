/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class UNSKeyedDataStoreRepository, UNSKeyedObservable;

@protocol OS_dispatch_queue;

@interface UNSNotificationCategoryRepository : NSObject

{
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)performMigration;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_performMigration;
- (id)categoryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (void)contentProtectionStateChangedForFirstUnlock:(_Bool)arg1;
- (long long)_maxObjectsPerKey;
- (void)_queue_performMigrationForBundleIdentifier:(id)arg1;
- (id)categoriesForBundleIdentifier:(id)arg1;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (id)_queue_categoriesForBundleIdentifier:(id)arg1;
- (void)_queue_setCategories:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setCategories:(id)arg1 forBundleIdentifier:(id)arg2;

@end
