/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPrefsSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsPlistSource : CFPrefsSource

{
    struct __CFString *userIdentifier;
    struct __CFString *domainIdentifier;
    struct __CFString *container;
    _Atomic struct __CFDictionary *_locallySetDict;
    _Atomic char *accessPath;
    _Atomic _Bool _isByHost;
    _Atomic _Bool _volatile;
    _Atomic _Bool _readonly;
    _Atomic _Bool _avoidsDaemonCache;
    _Atomic _Bool _restrictedAccess;
    _Atomic _Bool _checkedInvalidHome;
    _Atomic _Bool _lastWriteFailed;
    _Atomic _Bool _observing;
    _Atomic _Bool _byteCountLimitExceeded;
    _Atomic _Bool _directMode;
    _Atomic _Bool _disableBackup;
    _Atomic int _fileProtectionClass;
}

- (void)dealloc;
- (_Bool)synchronize;
- (struct __CFString *)container;
- (void)setDomainIdentifier:(struct __CFString *)arg1;
- (void)setUserIdentifier:(struct __CFString *)arg1;
- (void)setContainer:(struct __CFString *)arg1;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (void)alreadylocked_clearCache;
- (long long)sendMessageSettingValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (struct __CFString *)domainIdentifier;
- (struct __CFString *)userIdentifier;
- (void)writeFailedForKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;
- (_Bool)_shouldEnableDirectMode;
- (_Bool)handleErrorReply:(id)arg1 fromMessageSettingKeys:(const struct __CFString **)arg2 toValues:(const void **)arg3 count:(long long)arg4 retryCount:(int)arg5 retryContinuation:(CDUnknownBlockType)arg6;
- (void)handlePossibleOversizedMessage:(int)arg1;
- (void)goVolatileAfterTryingToWriteKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;
- (_Bool)attachAccessTokenToMessage:(id)arg1 accessType:(int)arg2;
- (void)sendFullyPreparedMessage:(id)arg1 toConnection:(id)arg2 settingValues:(const void **)arg3 forKeys:(const struct __CFString **)arg4 count:(long long)arg5 retryCount:(int)arg6;
- (void)goReadOnlyAfterTryingToWriteKeys:(const struct __CFString **)arg1 values:(const void **)arg2 count:(long long)arg3;
- (id)createSynchronizeMessage;
- (void)addPIDImpersonationIfNecessary:(id)arg1;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)sendRequestNewDataMessage:(id)arg1 toConnection:(id)arg2 retryCount:(int)arg3 error:(_Bool *)arg4;
- (_Bool)volatilizeIfInvalidHomeDir;
- (_Bool)handleErrorReply:(id)arg1 retryCount:(int)arg2 retryContinuation:(CDUnknownBlockType)arg3;
- (void)requestPlistValidation;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (_Bool)isVolatile;
- (void)_sharedCleanup;
- (_Bool)isByHost;
- (id)initWithDomain:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 containerPath:(struct __CFString *)arg4 containingPreferences:(id)arg5;
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

@end
