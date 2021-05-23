/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class HDProfile, NSString;

@protocol ACHEarnedInstanceEntitySyncedEarnedInstancesObserver;

@interface ACHEarnedInstanceEntityWrapper : NSObject

{
    HDProfile *_profile;
    id <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> _syncedEarnedInstancesObserver;
}

@property (retain, nonatomic) HDProfile *profile;
@property (weak, nonatomic) id <ACHEarnedInstanceEntitySyncedEarnedInstancesObserver> syncedEarnedInstancesObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (_Bool)earnedInstanceEntityDidReceiveSyncedEarnedInstances:(id)arg1 provenance:(long long)arg2;
- (id)insertEarnedInstances:(id)arg1 provenance:(long long)arg2 databaseContext:(id)arg3 error:(id *)arg4;
- (_Bool)removeEarnedInstances:(id)arg1 error:(id *)arg2;
- (id)allEarnedInstancesWithError:(id *)arg1;
- (_Bool)removeAllEarnedInstancesWithError:(id *)arg1;

@end
