/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSyncSession.h>

@class HDNanoSyncStore, HDSyncPredicate;

@interface HDNanoSyncSession : HDSyncSession

{
    unsigned long long _options;
    HDSyncPredicate *_syncPredicate;
    CDUnknownBlockType _completion;
    unsigned long long _messageCount;
}

@property (nonatomic, readonly) HDNanoSyncStore *nanoSyncStore;
@property (nonatomic, readonly, getter=isPullRequest) _Bool pullRequest;
@property (nonatomic, readonly, getter=isRequestedByRemote) _Bool requestedByRemote;
@property (nonatomic, readonly, getter=isLastChance) _Bool lastChance;
@property (copy, nonatomic, readonly) CDUnknownBlockType completion;
@property (nonatomic, readonly) unsigned long long messageCount;

- (long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1;
- (id)initWithSyncStore:(id)arg1 options:(unsigned long long)arg2 reason:(id)arg3 delegate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)incrementMessageCount;
- (id)changeSetWithChanges:(id)arg1 statusCode:(int)arg2 error:(id)arg3;
- (void)invokeCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;
- (id)syncPredicate;
- (id)newChangeWithSyncEntityClass:(Class)arg1;
- (id)_syncPredicate;
- (id)_intervalForSecondsSinceDaysAgo:(unsigned long long)arg1;

@end
