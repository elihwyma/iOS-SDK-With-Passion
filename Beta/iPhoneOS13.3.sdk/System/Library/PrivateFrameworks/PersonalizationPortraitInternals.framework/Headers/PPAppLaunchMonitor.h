/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@interface PPAppLaunchMonitor : NSObject

{
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (id)registerForAppLaunchWithBundleId:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)deregisterForAppLaunchWithToken:(id)arg1;
- (void)_registerForAppChangesIfNeededWithGuardedData:(id)arg1;

@end
