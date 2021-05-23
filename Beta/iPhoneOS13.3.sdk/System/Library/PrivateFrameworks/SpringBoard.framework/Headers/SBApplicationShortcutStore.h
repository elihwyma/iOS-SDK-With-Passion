/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSApplicationDataStore, NSArray, NSLock, NSString;

@protocol OS_dispatch_queue;

@interface SBApplicationShortcutStore : NSObject

{
    NSLock *_stateLock;
    NSObject<OS_dispatch_queue> *_saveQueue;
    NSArray *_cachedApplicationShortcutItems;
    NSArray *_cachedLanguages;
    unsigned long long _cachedVersion;
    _Bool _isLoaded;
    _Bool _isDirty;
    FBSApplicationDataStore *_dataStore;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSArray *applicationShortcutItems;
@property (copy, nonatomic, readonly) NSArray *languages;
@property (nonatomic, readonly) unsigned long long version;

+ (void)clearStore;

- (id)description;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)invalidateCache;
- (void)saveSynchronously;
- (void)_stateLock_loadFromStoreIfNeeded;
- (void)_stateLock_markDirty;
- (void)_saveQueue_save;
- (_Bool)_stateLock_truncateIfNeeded:(id)arg1;
- (id)_applicationShortcutItemsFromPlistArray:(id)arg1;
- (id)_plistArrayFromApplicationShortcutItems:(id)arg1;
- (void)setApplicationShortcutItems:(id)arg1 withLanguages:(id)arg2 version:(unsigned long long)arg3;
- (void)truncateIfNecessary;

@end
