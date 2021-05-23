/*
 Image: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
 */

#import <Foundation/NSObject.h>

@class FPDExtensionManager;

__attribute__((visibility("hidden")))
@interface FPDCacheDeleteService : NSObject

{
    FPDExtensionManager *_extensionManager;
}

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

+ (int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg1;

- (void)start;
- (void)dumpStateTo:(id)arg1;
- (void)enumeratePurgeableFilesOnVolume:(id)arg1 forUrgency:(int)arg2 sizeOnly:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (id)nonPurgableSpacePerProviderOnVolume:(id)arg1;
- (void)evictItems:(id)arg1;
- (void)registerActivity;
- (void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)allStorageVolumes;
- (id)purgableSpaceForAllUrgenciesOnVolume:(id)arg1;
- (_Bool)getVolume:(int *)arg1 forPath:(id)arg2;
- (id)volumesByProviderDomain;
- (id)queryWithAttributes:(id)arg1;
- (_Bool)shouldSearchableItem:(id)arg1 beEvictedAtUrgency:(int)arg2;
- (id)evictableByProviderDomainID:(int)arg1;

@end
