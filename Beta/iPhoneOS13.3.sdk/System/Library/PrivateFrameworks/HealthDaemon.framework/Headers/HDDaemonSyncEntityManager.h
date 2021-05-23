/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon, NSArray, NSDictionary;

@interface HDDaemonSyncEntityManager : NSObject

{
    HDDaemon *_daemon;
    struct os_unfair_lock_s _lock;
    NSArray *_lock_allOrderedSyncEntities;
    NSDictionary *_lock_allSyncEntitiesByIdentifier;
}

@property (copy, nonatomic, readonly) NSArray *orderedSyncEntities;
@property (copy, nonatomic, readonly) NSDictionary *syncEntitiesByIdentifier;

- (id)initWithDaemon:(id)arg1;
- (void)_lock_loadSyncEntities;

@end
