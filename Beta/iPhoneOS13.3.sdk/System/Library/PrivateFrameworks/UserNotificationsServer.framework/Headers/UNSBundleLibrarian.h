/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface UNSBundleLibrarian : NSObject

{
    NSString *_bundleLibraryPath;
    NSMutableDictionary *_bundleToUUIDMap;
    NSMutableDictionary *_uuidToBundleMap;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)initWithDirectory:(id)arg1;
- (void)_queue_loadBundleLibraryIfNeeded;
- (_Bool)_queue_saveDictionary:(id)arg1 atPath:(id)arg2;
- (id)_queue_bundleIdentifierForUniqueIdentifier:(id)arg1;
- (id)_queue_uniqueIdentifierForBundleIdentifier:(id)arg1;
- (void)_queue_removeEntryForBundleIdentifier:(id)arg1;
- (void)_queue_addEntryForBundleIdentifier:(id)arg1 uniqueIdentifier:(id)arg2;
- (void)_queue_loadBundleLibrary;
- (id)_queue_dictionaryAtPath:(id)arg1;
- (id)_queue_dataAtPath:(id)arg1;
- (void)bootstrapLibraryForBundleIdentifiers:(id)arg1;
- (id)bundleIdentifierForUniqueIdentifier:(id)arg1;
- (id)uniqueIdentifierForBundleIdentifier:(id)arg1;
- (void)removeMappingForBundleIdentifier:(id)arg1;
- (void)migrateRepositoriesInDirectory:(id)arg1;
- (void)_removeBundleLibrary;

@end
