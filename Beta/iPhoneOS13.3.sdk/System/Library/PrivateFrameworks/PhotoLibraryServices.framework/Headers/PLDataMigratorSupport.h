/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject

{
    struct os_unfair_lock_s _lock;
    PLPhotoLibraryPathManager *_pathManager;
}

@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;

- (id)initWithPathManager:(id)arg1;
- (void)writeModelMigratorPostProcessingToken;
- (void)setCapturedOTARestoreStatus;
- (_Bool)hasCapturedOTARestoreStatus;
- (void)recordDataMigrationInfo:(id)arg1;
- (void)_removeModelInterestDatabase;
- (void)_removeInternalMemoriesRelatedSnapshotDirectory;
- (void)_removeAsidePhotosDatabase;
- (void)_removeLegacyMetadataFiles;

@end
