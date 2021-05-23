/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@protocol OS_dispatch_queue;

@interface ATXAppPredictionBlacklist : NSObject

{
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id _blacklistNotificationToken;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)disabledBundleIds;
- (int)registerPrefsChangeHandler:(CDUnknownBlockType)arg1;
- (void)deregisterPrefsChangeHandlerWithToken:(int)arg1;
- (void)_listenForUpdates;
- (void)_updateBlacklist;
- (void)_resetBlacklistWithSet:(id)arg1;

@end
