/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, br_pacer;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCCloudDocsAppsMonitor : NSObject

{
    NSMutableDictionary *_cloudDocsAppLibrariesByAppID;
    NSMutableDictionary *_appIDsByAppLibraryID;
    NSMutableSet *_observers;
    br_pacer *_refetchPacer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_fetchInstalledAppsQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _hasFetchedInitialApps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)cloudDocsAppsMonitor;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_start;
- (void)dumpToContext:(id)arg1;
- (id)allApplicationIdentifiers;
- (_Bool)hasFetchedInitialApps;
- (void)forceRefetchAppList;
- (_Bool)isApplicationInstalledForContainerID:(id)arg1;
- (id)containerIDsForApplicationIdentifier:(id)arg1;
- (id)applicationIdentifiersForContainerID:(id)arg1;
- (void)_refetchApps;

@end
