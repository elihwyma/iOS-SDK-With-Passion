/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <CoreFoundation/CFPrefsSource.h>

@class CFPrefsCloudSource, CFPrefsPlistSource;

__attribute__((visibility("hidden")))
@interface CFPrefsSearchListSource : CFPrefsSource

{
    struct __CFDictionary *_keysToSources;
    struct __CFString *_identifier;
    struct __CFArray *_sourceList;
    struct __CFSet *_cloudKeys;
    struct __CFArray *_cloudPrefixKeys;
    CFPrefsPlistSource *_standardSetTarget;
    CFPrefsCloudSource *_cloudSetTarget;
    _Bool initialized;
}

+ (void)preloadDomainsForIdentifiers:(const struct __CFString **)arg1 containers:(const struct __CFString **)arg2 cloudConfigurationURLs:(const struct __CFURL **)arg3 count:(long long)arg4 containingPreferences:(id)arg5;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)synchronize;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFString *)copyOSLogDescription;
- (struct __CFString *)domainIdentifier;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;
- (_Bool)isDirectModeEnabled;
- (_Bool)alreadylocked_requestNewData;
- (long long)generationCount;
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setCloudEnabled:(_Bool)arg1 forKeyPrefix:(struct __CFString *)arg2;
- (void)setCloudEnabled:(_Bool)arg1 forKey:(struct __CFString *)arg2;
- (id)createMultiMessageWithContainedMessages:(id)arg1;
- (void)synchronouslySendDaemonMessage:(id)arg1 andAgentMessage:(id)arg2 andDirectMessage:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)alreadylocked_reloadCacheIfStale;
- (void)alreadylocked_setObservingContents:(_Bool)arg1;
- (id)initWithIdentifier:(struct __CFString *)arg1 containingPreferences:(id)arg2;
- (void)addSource:(id)arg1;
- (void)alreadylocked_getDictionary:(CDUnknownBlockType)arg1;
- (_Bool)alreadylocked_useCloudForKey:(struct __CFString *)arg1;
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString *)arg1 fromValue:(void *)arg2 toValue:(void *)arg3;
- (long long)alreadylocked_generationCountFromListOfSources:(id *)arg1 count:(long long)arg2;
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary *)arg1 toDictionary:(struct __CFDictionary *)arg2;
- (struct __CFArray *)_getPendingNotifications;
- (void *)alreadylocked_copyManagedValueForKey:(struct __CFString *)arg1;
- (struct __CFString *)copyCloudConfigurationWithURL:(struct __CFURL *)arg1 outConfigFileSource:(id *)arg2 outStoreName:(const struct __CFString **)arg3;
- (void)addPreferencesObserver:(id)arg1;
- (void)removePreferencesObserver:(id)arg1;
- (void)lock;
- (void)unlock;
- (void)addManagedSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)addSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 container:(struct __CFString *)arg4;
- (void)addCloudSourceForIdentifier:(struct __CFString *)arg1 configurationPath:(struct __CFString *)arg2 storeName:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (void)addSuiteSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString *)arg1;
- (_Bool)alreadylocked_hasCloudValueForKey:(struct __CFString *)arg1;
- (_Bool)alreadylocked_hasNonRegisteredValueForKey:(struct __CFString *)arg1;
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString *)arg1 isRemote:(_Bool)arg2;
- (struct __CFDictionary *)alreadylocked_copyManagedDictionary;
- (void)freeze;
- (void)removeSource:(id)arg1;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;

@end
