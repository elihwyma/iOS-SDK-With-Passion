/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFXPreferences : NSObject

{
    struct __CFDictionary *_sources;
    struct __CFDictionary *_namedVolatileSources;
    struct __CFDictionary *_searchLists;
    NSObject<OS_xpc_object> *_agentConnection;
    NSObject<OS_xpc_object> *_daemonConnection;
    NSObject<OS_xpc_object> *_directConnection;
    unsigned int _launchdUID;
    unsigned int _euid;
    _Atomic char _userHomeDirectoryState;
    struct os_unfair_lock_s _sourcesLock;
    struct os_unfair_lock_s _searchListsLock;
    struct os_unfair_lock_s _namedVolatileSourcesLock;
}

+ (id)copyDefaultPreferences;

- (id)init;
- (void)dealloc;
- (void)withSources:(CDUnknownBlockType)arg1;
- (void)withConnectionForRole:(int)arg1 performBlock:(CDUnknownBlockType)arg2;
- (_Atomic unsigned int *)shmemForRole:(int)arg1 name:(const char *)arg2;
- (unsigned int)euid;
- (_Bool)currentUserHasInvalidHomeDirectory;
- (void)_deliverPendingKVONotifications;
- (void)withManagedSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 perform:(CDUnknownBlockType)arg3;
- (struct __CFString *)copyDescriptionOfSearchLists;
- (void)withSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 container:(struct __CFString *)arg4 cloud:(_Bool)arg5 perform:(CDUnknownBlockType)arg6;
- (void)withSuiteSearchListForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 locked:(_Bool)arg3 perform:(CDUnknownBlockType)arg4;
- (void)withNamedVolatileSourceForIdentifier:(struct __CFString *)arg1 perform:(CDUnknownBlockType)arg2;
- (void)withSearchLists:(CDUnknownBlockType)arg1;
- (void)withSearchListForIdentifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2 cloudConfigurationURL:(struct __CFURL *)arg3 perform:(CDUnknownBlockType)arg4;
- (void)alreadylocked_withSearchLists:(CDUnknownBlockType)arg1;
- (void)replaceSearchList:(id)arg1 withSearchList:(id)arg2;
- (void)with23930198HackSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 byHost:(_Bool)arg3 container:(struct __CFString *)arg4 cloud:(_Bool)arg5 perform:(CDUnknownBlockType)arg6;
- (void)updateSearchListsForIdentifier:(struct __CFString *)arg1;
- (void)assertEquivalence:(_Bool)arg1 ofIdentifiers:(struct __CFArray *)arg2 containers:(struct __CFArray *)arg3 cloudConfigurationURLs:(struct __CFArray *)arg4;
- (void)withNamedVolatileSources:(CDUnknownBlockType)arg1;
- (void)alreadylocked_withSources:(CDUnknownBlockType)arg1;
- (void)alreadylocked_withNamedVolatileSources:(CDUnknownBlockType)arg1;
- (void)assertEquivalence:(_Bool)arg1 ofIdentifiers:(struct __CFArray *)arg2 users:(struct __CFArray *)arg3 hosts:(struct __CFArray *)arg4 containers:(struct __CFArray *)arg5 managedFlags:(struct __CFArray *)arg6 cloudFlags:(struct __CFArray *)arg7;
- (void)ingestVolatileStateFromPreferences:(id)arg1;
- (void)destroyConnections;
- (_Bool)canLookUpAgents;
- (id)_copyDaemonConnectionSettingUpIfNecessaryForRole:(int)arg1;
- (void)unregisterUserDefaultsInstance:(id)arg1;
- (void)registerUserDefaultsInstance:(id)arg1 configurationURL:(struct __CFURL *)arg2;
- (void)flushManagedSources;
- (_Bool)appValueIsForcedForKey:(struct __CFString *)arg1 appIdentifier:(struct __CFString *)arg2;
- (_Bool)hasCloudValueForKey:(struct __CFString *)arg1 appIdentifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3 configurationURL:(struct __CFURL *)arg4;
- (_Bool)hasNonRegisteredValueForKey:(struct __CFString *)arg1 appIdentifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3 configurationURL:(struct __CFURL *)arg4;
- (struct __CFArray *)copyKeyListForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 host:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (void)synchronizeEverything;
- (unsigned char)synchronizeIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 host:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (void)setDaemonCacheEnabled:(_Bool)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (void)notifyOfImpendingDeletionOfUser:(struct __CFString *)arg1;
- (void)flushCachesForAppIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2;
- (void)simulateTimerSynchronizeForTestingForUser:(struct __CFString *)arg1;
- (void)setBackupDisabled:(_Bool)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (void)setFileProtectionClass:(int)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (void)setAccessRestricted:(_Bool)arg1 forAppIdentifier:(struct __CFString *)arg2;
- (void)addSuitePreferences:(struct __CFString *)arg1 toAppIdentifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3;
- (void)fullCloudSynchronizeForAppIdentifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2 configurationURL:(struct __CFURL *)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCloudSyncEnabled:(_Bool)arg1 forKey:(struct __CFString *)arg2 appIdentifier:(struct __CFString *)arg3 container:(struct __CFString *)arg4;
- (void)setValuesForKeys:(struct __CFDictionary *)arg1 removingValuesForKeys:(struct __CFArray *)arg2 identifier:(struct __CFString *)arg3 user:(struct __CFString *)arg4 host:(struct __CFString *)arg5 container:(struct __CFString *)arg6;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2 appIdentifier:(struct __CFString *)arg3 container:(struct __CFString *)arg4 configurationURL:(struct __CFURL *)arg5;
- (struct __CFDictionary *)copyValuesForKeys:(struct __CFArray *)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (struct __CFDictionary *)copyManagedValuesForKeys:(struct __CFArray *)arg1 identifier:(struct __CFString *)arg2 useSystemContainer:(_Bool)arg3;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2 identifier:(struct __CFString *)arg3 user:(struct __CFString *)arg4 host:(struct __CFString *)arg5 container:(struct __CFString *)arg6;
- (void *)copyValueForKey:(struct __CFString *)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;
- (void)preloadAppValuesForIdentifiers:(const struct __CFString **)arg1 containers:(const struct __CFString **)arg2 configurationURLs:(const struct __CFURL **)arg3 count:(long long)arg4;
- (void *)copyAppValueForKey:(struct __CFString *)arg1 identifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3 configurationURL:(struct __CFURL *)arg4;
- (void)replaceValuesInSourceForIdentifier:(struct __CFString *)arg1 user:(struct __CFString *)arg2 host:(struct __CFString *)arg3 container:(struct __CFString *)arg4 withValues:(struct __CFDictionary *)arg5;
- (void)removeVolatileSourceForName:(struct __CFString *)arg1;
- (struct __CFDictionary *)copyDictionaryForSourceWithIdentifier:(struct __CFString *)arg1;
- (struct __CFDictionary *)copyDictionaryForVolatileSourceWithName:(struct __CFString *)arg1;
- (struct __CFDictionary *)copyDictionaryForApp:(struct __CFString *)arg1 withContainer:(struct __CFString *)arg2;
- (struct __CFArray *)volatileSourceNames;
- (void)registerDefaultValues:(struct __CFDictionary *)arg1;
- (void)resetPreferences:(_Bool)arg1;
- (unsigned char)appSynchronizeWithIdentifier:(struct __CFString *)arg1 container:(struct __CFString *)arg2;
- (void)removeSuite:(struct __CFString *)arg1 fromApp:(struct __CFString *)arg2 withContainer:(struct __CFString *)arg3;
- (void)replaceValuesInVolatileSourceNamed:(struct __CFString *)arg1 withValues:(struct __CFDictionary *)arg2;

@end
