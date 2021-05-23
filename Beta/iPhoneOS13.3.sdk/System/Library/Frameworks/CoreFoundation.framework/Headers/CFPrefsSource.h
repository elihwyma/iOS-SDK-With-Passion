/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class _CFXPreferences, __CFPrefsWeakObservers;

__attribute__((visibility("hidden")))
@interface CFPrefsSource : NSObject

{
    _CFXPreferences *_containingPreferences;
    struct __CFDictionary *_dict;
    __CFPrefsWeakObservers *_observers;
    _Atomic long long _generationCount;
    _Atomic _Atomic unsigned int *shmemEntry;
    _Atomic unsigned int lastKnownShmemState;
    struct os_unfair_lock_s _lock;
    _Bool _isSearchList;
}

- (void)dealloc;
- (id)description;
- (_Bool)synchronize;
- (struct __CFString *)container;
- (_Bool)managed;
- (struct __CFDictionary *)copyDictionary;
- (id)initWithContainingPreferences:(id)arg1;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (void)alreadylocked_clearCache;
- (struct __CFString *)copyOSLogDescription;
- (struct __CFString *)domainIdentifier;
- (struct __CFString *)userIdentifier;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (_Bool)isVolatile;
- (_Bool)isByHost;
- (void)setBackupDisabled:(_Bool)arg1;
- (void)setFileProtectionClass:(int)arg1;
- (void)setAccessRestricted:(_Bool)arg1;
- (void)setDaemonCacheEnabled:(_Bool)arg1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void *)copyValueForKey:(struct __CFString *)arg1;
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;
- (_Bool)isDirectModeEnabled;
- (_Bool)alreadylocked_requestNewData;
- (long long)alreadylocked_generationCount;
- (long long)generationCount;
- (int)alreadylocked_updateObservingRemoteChanges;
- (id)alreadylocked_createObserverUpdateMessageWithOperation:(int)arg1 forRole:(int *)arg2;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2 from:(id)arg3;
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1 sourceDictionary:(struct __CFDictionary *)arg2 cloudKeyEvaluator:(CDUnknownBlockType)arg3;
- (_Bool)enabled;
- (void)setEnabled:(_Bool)arg1;
- (void)setConfigurationPath:(struct __CFString *)arg1;
- (void)setStoreName:(struct __CFString *)arg1;
- (int)alreadylocked_addPreferencesObserver:(id)arg1;
- (int)alreadylocked_removePreferencesObserver:(id)arg1;
- (void)setValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 copyValues:(_Bool)arg4 from:(id)arg5;
- (void)lock;
- (void)unlock;
- (void)forEachObserver:(CDUnknownBlockType)arg1;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)setValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 copyValues:(_Bool)arg4 removeValuesForKeys:(const struct __CFString **)arg5 count:(long long)arg6 from:(id)arg7;
- (struct __CFArray *)copyKeyList;
- (void)replaceAllValuesWithValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (void)removeAllValues_from:(id)arg1;

@end
