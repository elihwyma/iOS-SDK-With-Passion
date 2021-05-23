/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface NSUbiquitousKeyValueStore : NSObject

{
    id _private1;
    id _private2;
    id _private3;
    void *_private4;
    void *_reserved[3];
    int _daemonWakeToken;
}

@property (copy, readonly) NSDictionary *dictionaryRepresentation;

+ (void)_synchronizeStoresForced:(_Bool)arg1;
+ (id)defaultStore;
+ (id)additionalStoreWithIdentifier:(id)arg1;
+ (void)_appWillActivate;
+ (void)_appWillDeactivate;

- (id)init;
- (void)dealloc;
- (_Bool)synchronize;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)registerDefaultValues:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(_Bool)arg3;
- (void)_scheduleRemoteSynchronization;
- (void)_syncConcurrently;
- (void)_sourceDidChange:(id)arg1;
- (void)_configurationDidChange;
- (void)_sourceDidChangePassthroughNotification:(id)arg1;
- (void)_registerToDaemon;
- (void)_sendPingToDaemon;
- (void)_pleaseSynchronize:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2 additionalStore:(_Bool)arg3 storeType:(long long)arg4;
- (id)initWithBundleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)_setShouldAvoidSynchronize:(_Bool)arg1;
- (int)_storeChangeFromSourceChange:(int)arg1;
- (_Bool)_hasPendingSynchronize;
- (void)_setHasPendingSynchronize:(_Bool)arg1;
- (void)_rethrowException:(id)arg1;
- (_Bool)synchronizeWithSourceForced:(_Bool)arg1;
- (_Bool)_postDidChangeNotificationExternalChanges:(id)arg1 sourceChangeCount:(long long)arg2;
- (void)_syncConcurrentlyForced:(_Bool)arg1;
- (void)_adjustTimer:(id)arg1;
- (void)_adjustTimerForAutosync;
- (_Bool)_synchronizeForced:(_Bool)arg1 notificationQueue:(id)arg2;
- (_Bool)_shouldAvoidSynchronize;
- (_Bool)_synchronizeForced:(_Bool)arg1;
- (unsigned long long)maximumKeyCount;
- (unsigned long long)maximumKeyLength;
- (unsigned long long)maximumDataLengthPerKey;
- (unsigned long long)maximumTotalDataLength;
- (void)_useSourceAsyncWithBlock:(CDUnknownBlockType)arg1;
- (void)_useSourceSyncWithBlock:(CDUnknownBlockType)arg1;
- (id)_initWithStoreIdentifier:(id)arg1 usingEndToEndEncryption:(_Bool)arg2;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_unregisterFromDaemon;
- (id)_remotePreferencesSource;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setArray:(id)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (long long)longLongForKey:(id)arg1;
- (void)setLongLong:(long long)arg1 forKey:(id)arg2;

@end
