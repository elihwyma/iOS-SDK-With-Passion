/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class LSInstallProgressList, NSArray, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstallProgressService : NSObject

{
    NSMutableSet *_observers;
    LSInstallProgressList *_progresses;
    NSMutableSet *_publishingStrings;
    NSMutableDictionary *_installIndexes;
    NSMutableOrderedSet *_orderedInstalls;
    NSMutableSet *_inactiveInstalls;
    NSMutableDictionary *_installTypes;
    NSObject<OS_dispatch_queue> *_installControlsQueue;
    NSObject<OS_dispatch_queue> *_observersQueue;
    NSArray *_journalledNotificationsToReplay;
    NSMutableArray *_startupJournalledNotifications;
    _Bool _replayingJournalToNewClients;
    _Bool _usingNetwork;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (int)notificationTypeForOperation:(unsigned long long)arg1;
+ (void)beginListening;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (void)installationEndedForApplication:(id)arg1 withState:(unsigned long long)arg2;
- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)sendNotification:(id)arg1 ForPlugins:(id)arg2;
- (void)sendNotification:(int)arg1 forAppProxies:(id)arg2 Plugins:(_Bool)arg3;
- (void)installationFailedForApplication:(id)arg1;
- (void)performJournalRecovery;
- (void)sendNetworkUsageChangedNotification;
- (void)restoreInactiveInstalls;
- (id)_LSFindPlaceholderApplications;
- (void)dispatchJournalledNotificationsToObserver:(id)arg1;
- (void)rebuildInstallIndexes;
- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(_Bool)arg3;
- (SEL)observerSelectorForNotification:(int)arg1;
- (void)_placeholderIconUpdatedForApp:(id)arg1;
- (void)_placeholdersUninstalled:(id)arg1;
- (id)_prepareApplicationProxiesForNotification:(int)arg1 identifiers:(id)arg2 withPlugins:(_Bool)arg3 options:(id)arg4;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3 options:(id)arg4;
- (id)loadJournalledNotificationsFromDisk;
- (void)dispatchJournalledNotificationsToConnectedClients;
- (void)directlySendNotification:(int)arg1 withProxies:(id)arg2 toObserverProxy:(id)arg3;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3;
- (void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2;
- (void)addSendNotificationFenceWithTimeout:(double)arg1 fenceBlock:(CDUnknownBlockType)arg2;

@end
