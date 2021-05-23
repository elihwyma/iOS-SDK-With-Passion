/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLLibraryServicesManager;

@interface PLOTARestoreMigrationSupport : NSObject

{
    PLLibraryServicesManager *_libraryServicesManager;
}

- (id)initWithLibraryServicesManager:(id)arg1;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (_Bool)prepareDatabaseForOTARestoreIfNecessaryWithMigrationType:(long long)arg1;
- (id)_assetTypesExcludedFromOTARestore;
- (void)_prepareDatabaseForOTAAssetsPhase;
- (void)_setAlbumPendingItemCountsWithContext:(id)arg1 shouldSave:(_Bool)arg2;
- (void)_batchDeleteAllAssetsExcludedFromOTARestoreWithContext:(id)arg1;
- (void)_setAssetsToOTARestoreAsIncompleteWithContext:(id)arg1 populateAlbumMappings:(id)arg2;
- (void)_linkAsideAlbumMetadata;
- (id)_dataMigrationInfo;
- (_Bool)isOTARestoreInProgress;

@end
