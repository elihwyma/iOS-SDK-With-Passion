/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NARApplicationWorkspace, NSMutableDictionary, NSObject, NSString, REKeyValueMap;

@protocol OS_dispatch_queue;

@interface REApplicationCache : RESingleton

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_applicationTypes;
    NSMutableDictionary *_restrictedApps;
    NSMutableDictionary *_removedApps;
    NSMutableDictionary *_watchKitExtensions;
    REKeyValueMap *_remoteApplicationsMap;
    NARApplicationWorkspace *_workspace;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_init;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)_init_loadApplicationTypesMapFromWorkspace:(id)arg1;
- (_Bool)_queue_applicationIsRemoved:(id)arg1;
- (void)_queue_loadStateForBundleID:(id)arg1;
- (_Bool)_queue_applicationIsRestricted:(id)arg1;
- (void)_accessRemoteApplicationsMapWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_loadNanoRegistryCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_applicationsDidChange:(id)arg1;
- (unsigned long long)_typeForProxy:(id)arg1;
- (_Bool)applicationIsRemoved:(id)arg1;
- (_Bool)applicationIsRestricted:(id)arg1;
- (_Bool)applicationIsRemote:(id)arg1;
- (id)localApplicationForRemoteApplication:(struct NSString *)arg1;
- (id)remoteApplicationForLocalApplication:(struct NSString *)arg1;
- (id)watchKitExtensionForApplication:(id)arg1;
- (unsigned long long)typeForApplication:(id)arg1;
- (unsigned long long)_trackedApplicationCount;
- (void)clearNanoRegistryApplications;
- (void)_clearApplicationTypesMap;

@end
