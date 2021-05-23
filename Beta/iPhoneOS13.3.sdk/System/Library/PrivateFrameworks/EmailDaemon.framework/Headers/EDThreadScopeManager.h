/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

@protocol EDThreadScopeManagerDataSource, EFScheduler;

@interface EDThreadScopeManager : NSObject

{
    NSMutableDictionary *_threadScopes;
    struct os_unfair_lock_s _threadScopesLock;
    id <EDThreadScopeManagerDataSource> _dataSource;
    id <EFScheduler> _evictionScheduler;
}

@property (weak, nonatomic, readonly) id <EDThreadScopeManagerDataSource> dataSource;
@property (nonatomic, readonly) id <EFScheduler> evictionScheduler;
@property (copy, nonatomic, readonly) NSArray *threadScopes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)mailboxTypesToPrecompute;

- (id)initWithDataSource:(id)arg1;
- (id)threadScopesByDatabaseID;
- (_Bool)isThreadScopePrecomputed:(id)arg1 shouldMigrate:(_Bool *)arg2;
- (long long)databaseIDForThreadScope:(id)arg1;
- (void)setLastViewedDate:(id)arg1 forThreadScope:(id)arg2;
- (void)removeThreadScopesForMailboxScope:(id)arg1;
- (void)removeAllThreadScopes;
- (void)addThreadScope:(id)arg1 withDatabaseID:(long long)arg2 needsUpdate:(_Bool)arg3 lastViewedDate:(id)arg4;
- (void)setNeedsUpdate:(_Bool)arg1 forThreadScope:(id)arg2;
- (void)removeThreadScope:(id)arg1;
- (void)_initializeThreadScopesIfNeeded;
- (id)_threadScopeInfoForThreadScope:(id)arg1;
- (_Bool)_shouldPrecomputeThreadScope:(id)arg1;
- (_Bool)_shouldPrecomputeMailboxType:(id)arg1;
- (_Bool)_shouldPrecomputeMailboxWithObjectID:(id)arg1;
- (id)_threadScopesWithLastViewedOlderThanLimit;
- (unsigned long long)_numberOfThreadScopesToEvictFrom:(id)arg1 upTo:(unsigned long long *)arg2;
- (void)_evictAtLeast:(unsigned long long)arg1 upTo:(unsigned long long)arg2 threadScopesFrom:(id)arg3;
- (double)_evictionScoreForCount:(unsigned long long)arg1 timeInterval:(double)arg2;

@end
