/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@class PMLTrainingStoredSessionBatch;

@interface PMLInMemoryCachedStore

{
    PMLTrainingStoredSessionBatch *_cachedSessions;
}

+ (id)cachedStoreFromRealStore:(id)arg1 sessionDescriptor:(id)arg2 sessionsLimit:(unsigned long long)arg3;

- (id)initWithSessionBatch:(id)arg1;
- (void)loadSessionsForModel:(id)arg1 excludeItemIdsUsedWithin:(double)arg2 limit:(unsigned long long)arg3 onlyAppleInternal:(_Bool)arg4 positiveLabel:(unsigned long long)arg5 skew:(double)arg6 block:(CDUnknownBlockType)arg7;
- (void)_openDbIfUnlocked;
- (void)_registerUnlockHandler;

@end
