/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMapTable, NSString, _ATXDataStore, _ATXInternalUninstallNotification;

@protocol OS_dispatch_queue;

@interface _ATXAppLaunchSequenceManager : NSObject

{
    _ATXDataStore *_datastore;
    NSMapTable *_appLaunchSequence;
    NSMapTable *_appActionLaunchSequence;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSString *_lastAppActionLaunch;
    NSDate *_lastAppActionLaunchDate;
}

+ (id)sharedInstance;

- (id)init;
- (id)syncQueue;
- (id)initWithDataStore:(id)arg1;
- (id)launchSequence;
- (id)initWithInMemoryStore;
- (id)launchSequenceForBundle:(id)arg1;
- (id)launchSequenceForAppAction:(id)arg1;
- (void)decayAllLaunchSequencesWithHalfLifeInDays:(double)arg1;
- (void)decayAllAppActionLaunchSequencesWithHalfLifeInDays:(double)arg1;
- (void)deleteAllLaunchesForBundles:(id)arg1;
- (void)deleteAllLaunchesForAppActions:(id)arg1;
- (void)addBundleIdToLaunchSequence:(id)arg1 date:(id)arg2;

@end
