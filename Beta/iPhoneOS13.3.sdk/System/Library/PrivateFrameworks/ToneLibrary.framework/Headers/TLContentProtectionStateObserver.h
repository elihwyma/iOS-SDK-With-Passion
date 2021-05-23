/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
    int _firstUnlockNotifyToken;
}

+ (id)sharedContentProtectionStateObserver;

- (id)init;
- (void)dealloc;
- (id)performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (void)_assertRunningOnAccessQueue;
- (void)_assertNotRunningOnAccessQueue;
- (void)_cancelFirstUnlockNotifyToken;
- (id)_performBlockAfterProtectedContentUnlocked:(CDUnknownBlockType)arg1;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)arg1;
- (void)_handleFirstUnlockNotification;
- (void)_updateUnlockedSinceBootStatus;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_registerFirstUnlockNotifyToken;

@end
