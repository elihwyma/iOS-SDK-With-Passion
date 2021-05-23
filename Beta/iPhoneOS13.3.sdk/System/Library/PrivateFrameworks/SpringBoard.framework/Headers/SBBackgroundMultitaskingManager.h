/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SBBackgroundMultitaskingManager : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_appToBackgroundTasks;
}

+ (id)sharedInstance;

- (id)init;
- (void)_appProcessStateDidChange:(id)arg1;
- (void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2;
- (id)_createBackgroundFetchTaskForApplication:(id)arg1;

@end
