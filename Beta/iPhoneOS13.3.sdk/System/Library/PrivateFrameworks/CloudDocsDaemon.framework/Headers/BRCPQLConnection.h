/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <prequelite/PQLConnection.h>

@class br_pacer;

__attribute__((visibility("hidden")))
@interface BRCPQLConnection : PQLConnection

{
    br_pacer *_batchingPacer;
    int _changeCount;
    double _flushInterval;
    _Bool _flushImmediately;
    _Bool _autovacuumInProgress;
    long long _changesOverride;
    unsigned long long _vmStepsExecuted;
}

@property (nonatomic) _Bool profilingEnabled;
@property (nonatomic, readonly) unsigned long long vmStepsExecuted;
@property (copy, nonatomic) CDUnknownBlockType lockedHandler;

- (id)init;
- (long long)changes;
- (long long)sizeInBytes;
- (_Bool)openAtURL:(id)arg1 withFlags:(int)arg2 error:(id *)arg3;
- (void)setProfilingHook:(CDUnknownBlockType)arg1;
- (id)initWithLabel:(id)arg1 dbCorruptionHandler:(CDUnknownBlockType)arg2;
- (void)_setErrorHandlerWithDBCorruptionHandler:(CDUnknownBlockType)arg1;
- (void)_setLockedHandler;
- (void)brc_close;
- (_Bool)_shouldFlushWithChangeCount:(int)arg1;
- (_Bool)needsAutovacuum;
- (void)autovacuumIfNeeded;
- (_Bool)attachDBAtPath:(id)arg1 as:(id)arg2 error:(id *)arg3;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (id)fetchWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (id)fetchWithSlowStatementRadar:(id)arg1 objectOfClass:(Class)arg2 sql:(id)arg3;
- (_Bool)executeWithExpectedIndex:(id)arg1 sql:(id)arg2;
- (_Bool)executeWithSlowStatementRadar:(id)arg1 sql:(id)arg2;
- (_Bool)executeWithErrorHandler:(CDUnknownBlockType)arg1 sql:(id)arg2;
- (void)disableProfilingForQueriesInBlock:(CDUnknownBlockType)arg1;
- (void)usePacedBatchingOnTargetQueue:(id)arg1 withInterval:(double)arg2 changeCount:(int)arg3;

@end
