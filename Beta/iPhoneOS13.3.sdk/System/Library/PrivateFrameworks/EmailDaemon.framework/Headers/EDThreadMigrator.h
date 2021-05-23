/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDInMemoryThreadQueryHandler, EDThreadPersistence, EFLocked, EMThreadScope, NSString;

@protocol EDThreadMigratorDelegate, OS_dispatch_queue;

@interface EDThreadMigrator : NSObject

{
    struct os_unfair_lock_s _migrationLock;
    _Atomic _Bool _cancelled;
    EMThreadScope *_threadScope;
    EFLocked *_state;
    NSObject<OS_dispatch_queue> *_workQueue;
    EDThreadPersistence *_threadPersistence;
    EDInMemoryThreadQueryHandler *_queryHandler;
    id <EDThreadMigratorDelegate> _delegate;
}

@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, readonly) EFLocked *state;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) EDThreadPersistence *threadPersistence;
@property (nonatomic, readonly) EDInMemoryThreadQueryHandler *queryHandler;
@property (weak, nonatomic, readonly) id <EDThreadMigratorDelegate> delegate;
@property (readonly) unsigned long long migrationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)cancel;
- (void)start;
- (void)reset;
- (void)_performMigration;
- (void)_scheduleCleanupForBatchedObjectIDs:(id)arg1;
- (void)_failMigration;
- (void)_resumeMigration;
- (void)changeObjectIDsToMigrate:(id)arg1;
- (void)deleteObjectIDsToMigrate:(id)arg1;
- (id)initWithThreadScope:(id)arg1 threadPersistence:(id)arg2 queryHandler:(id)arg3 delegate:(id)arg4;
- (void)addObjectIDsToMigrate:(id)arg1;

@end
