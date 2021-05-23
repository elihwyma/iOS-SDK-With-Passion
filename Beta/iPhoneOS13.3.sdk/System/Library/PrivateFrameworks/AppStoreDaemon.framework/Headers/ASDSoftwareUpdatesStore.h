/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <AppStoreDaemon/ASDBaseClient.h>

@class NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface ASDSoftwareUpdatesStore : ASDBaseClient

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)interface;
+ (id)registerBadgeCountNotificationBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)setAutoUpdateEnabled:(_Bool)arg1;
- (_Bool)autoUpdateEnabled;
- (void)_setupConnection;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeUpdateBulletins;
- (void)showApplicationBadgeForPendingUpdates;
- (_Bool)hasEntitlement;
- (void)_call:(id)arg1 run:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)confirmAgentRequestedUpdateAll;
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)getMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadForSettingsFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showApplicationUpdateBulletin;
- (void)updateAllWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateAllWithJobResultsCompletionBlock:(CDUnknownBlockType)arg1;

@end
