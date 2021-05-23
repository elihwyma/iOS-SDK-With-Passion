/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SKInGameAnalytics : NSObject

{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_heartbeatTimer;
    _Bool _internalGameInProgress;
    NSString *_sessionID;
}

@property (nonatomic, getter=isGameSessionInProgress) _Bool gameSessionInProgress;

+ (id)sharedInstance;

- (id)init;
- (void)_stopSessionTimerAndNotifications;
- (void)_gamePlayDidBegin;
- (void)_gamePlayDidEndWithReason:(long long)arg1;
- (void)_startSessionWithID:(id)arg1;
- (void)_startObservingLifecycleNotifications;
- (void)_stopObservingLifecycleNotifications;
- (void)_receivedAppWillResignActiveNotification;
- (void)_recievedAppWillTerminateNotification;

@end
