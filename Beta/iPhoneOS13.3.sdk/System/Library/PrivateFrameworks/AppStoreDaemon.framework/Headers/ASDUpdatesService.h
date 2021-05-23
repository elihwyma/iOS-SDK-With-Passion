/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@class ASDServiceBroker;

@protocol OS_dispatch_queue;

@interface ASDUpdatesService : NSObject

{
    ASDServiceBroker *_serviceBroker;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    _Bool _hasUpdatesEntitlement;
    int _storeChangedNotificationToken;
}

+ (id)defaultService;
+ (id)interface;
+ (id)badgeCount;
+ (id)registerBadgeCountNotificationBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)setAutoUpdateEnabled:(_Bool)arg1;
- (_Bool)autoUpdateEnabled;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasEntitlement;
- (id)_initWithServiceBroker:(id)arg1;
- (void)refreshUpdatesWithCompletionBlock:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_failedJobResultsForBundleIDs:(id)arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)confirmAgentRequestedUpdateAll;
- (void)refreshUpdateCountWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadManagedUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateAllWithOrder:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
