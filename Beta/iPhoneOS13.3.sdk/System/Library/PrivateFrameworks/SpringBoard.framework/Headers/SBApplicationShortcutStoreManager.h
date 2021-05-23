/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface SBApplicationShortcutStoreManager : NSObject

{
    NSLock *_stateLock;
    NSMutableDictionary *_storesKeyedByBundleIdentifier;
}

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)invalidateCache;
- (void)_installedAppsDidChange:(id)arg1;
- (void)saveSynchronously;
- (id)applicationShortcutItemsForBundleIdentifier:(id)arg1 withVersion:(unsigned long long)arg2;
- (void)setApplicationShortcutItems:(id)arg1 forBundleIdentifier:(id)arg2 withVersion:(unsigned long long)arg3;
- (id)_stateLock_storeForBundleIdentifier:(id)arg1;

@end
