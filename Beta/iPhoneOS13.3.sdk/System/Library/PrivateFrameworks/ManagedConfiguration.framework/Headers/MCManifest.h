/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface MCManifest : NSObject

{
    NSString *_systemFilePath;
    NSString *_userFilePath;
    NSMutableDictionary *_systemManifest;
    NSMutableDictionary *_userManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)sharedManifest;
+ (id)installedProfileWithIdentifier:(id)arg1;
+ (id)installedSystemProfileDataWithIdentifier:(id)arg1;
+ (id)installedUserProfileDataWithIdentifier:(id)arg1;
+ (id)installedSystemProfileWithIdentifier:(id)arg1;
+ (id)installedUserProfileWithIdentifier:(id)arg1;
+ (id)installedProfileDataWithIdentifier:(id)arg1;
+ (void)_setSystemManifestPath:(id)arg1 userManifestPath:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)invalidateCache;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)installedSystemProfileWithIdentifier:(id)arg1;
- (id)installedUserProfileWithIdentifier:(id)arg1;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (id)_systemManifest;
- (id)_userManifest;
- (id)systemManifest;
- (id)userManifest;
- (id)allInstalledProfileIdentifiers;
- (void)_adjustManifestIdentifier:(id)arg1 isUserInstall:(_Bool)arg2 flag:(int)arg3 addingIdentifier:(_Bool)arg4;
- (void)_setSystemManifest:(id)arg1 userManifest:(id)arg2;
- (id)allInstalledUserProfileIdentifiers;
- (id)allInstalledSystemProfileIdentifiers;
- (id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg1;
- (id)allInstalledPayloadsOfClass:(Class)arg1;
- (void)addIdentifierToSystemManifest:(id)arg1 flag:(int)arg2;
- (void)addIdentifierToUserManifest:(id)arg1 flag:(int)arg2;
- (void)removeIdentifierFromSystemManifest:(id)arg1 flag:(int)arg2;
- (void)removeIdentifierFromUserManifest:(id)arg1 flag:(int)arg2;

@end
