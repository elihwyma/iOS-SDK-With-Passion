/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <AssetExplorer/AEPackageTransport.h>

@class AEChatKitStatisticsManager, NSMutableDictionary, NSObject;

@protocol AEChatKitTransportDelegate, OS_dispatch_group, OS_dispatch_queue;

@interface AEChatKitTransport : AEPackageTransport

{
    NSObject<OS_dispatch_group> *__packagePreparationGroup;
    NSObject<OS_dispatch_queue> *__urlSidetableIsolationQueue;
    NSMutableDictionary *__alternateURLsByIdentifier;
    AEChatKitStatisticsManager *__statisticsManager;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *_packagePreparationGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_urlSidetableIsolationQueue;
@property (nonatomic, readonly) NSMutableDictionary *_alternateURLsByIdentifier;
@property (nonatomic, readonly) AEChatKitStatisticsManager *_statisticsManager;
@property (weak, nonatomic) id <AEChatKitTransportDelegate> delegate;

- (id)init;
- (id)_workQueue;
- (void)commitPackage:(id)arg1;
- (void)stagePackage:(id)arg1;
- (void)stagePackages:(id)arg1;
- (void)unstagePackageWithIdentifier:(id)arg1 andNotify:(_Bool)arg2;
- (void)unstagePackagesWithIdentifiers:(id)arg1;
- (id)finalizePackage:(id)arg1 error:(out id *)arg2;
- (void)stagePersistedPayloads:(id)arg1;
- (id)_persistedURLsFromURLs:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id *)arg3;
- (void)_evictPersistedURLs:(id)arg1;
- (id)_preparePackageForCommit:(id)arg1 inBaseDirectory:(id)arg2 outError:(out id *)arg3;
- (void)_beginStagingWorkForPackage:(id)arg1;
- (id)_chatkitPackageForIdentifer:(id)arg1;
- (void)_unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(_Bool)arg2;
- (void)unstagePackagesWithIdentifiers:(id)arg1 evictFiles:(_Bool)arg2;
- (id)orderedStagedPayloads;

@end
