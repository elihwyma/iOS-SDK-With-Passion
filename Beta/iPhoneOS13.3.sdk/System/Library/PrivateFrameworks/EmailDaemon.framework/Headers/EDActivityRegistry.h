/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDActivityPersistence, EDPersistenceHookRegistry, NSMutableSet, NSString;

@interface EDActivityRegistry : NSObject

{
    NSMutableSet *_observers;
    struct os_unfair_lock_s _lock;
    EDActivityPersistence *_activityPersistence;
    EDPersistenceHookRegistry *_hookRegistry;
}

@property (nonatomic, readonly) EDActivityPersistence *activityPersistence;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)registerActivityObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startedActivity:(id)arg1;
- (void)activityWithID:(id)arg1 setUserInfoObject:(id)arg2 forKey:(id)arg3;
- (void)activityWithID:(id)arg1 setCompletedCount:(long long)arg2 totalCount:(long long)arg3;
- (void)activityWithID:(id)arg1 finishedWithError:(id)arg2;
- (void)removedActivityWithID:(id)arg1;
- (id)initWithHookRegistry:(id)arg1 activityPersistence:(id)arg2;

@end
