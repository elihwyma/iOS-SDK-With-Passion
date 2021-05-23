/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, PLPhotoLibrary;

@interface PLCacheDeleteSupport : NSObject

{
    PLPhotoLibrary *_photoLibrary;
    struct fsid _fsid;
    NSDate *_exitDeleteTime;
}

@property (copy, nonatomic) NSDate *exitDeleteTime;

+ (_Bool)verifyAndFixLocalAvailabilityForMissingResourcesUsingFileIDInManagedObjectContext:(id)arg1 countPresent:(long long *)arg2 countMissing:(long long *)arg3 countUnableToVerify:(long long *)arg4 error:(id *)arg5;
+ (id)_purgeableResourceDirectoriesForPathManager:(id)arg1;
+ (_Bool)clearPurgeableFlagsForAllResourcesInPhotoLibraryURL:(id)arg1;
+ (struct fsid)fsidForURL:(id)arg1;
+ (void)registerNullHandler;
+ (_Bool)isPurgeableFile:(id)arg1 outIsPhotoType:(_Bool *)arg2 outUrgencyLevel:(long long *)arg3;
+ (id)purgeableStateDescriptionForFile:(id)arg1;

- (id)initWithPhotoLibrary:(id)arg1 cplStatus:(id)arg2;
- (_Bool)markResourceAsPurgeable:(id)arg1 withUrgency:(long long)arg2;
- (_Bool)clearPurgeableFlagForResource:(id)arg1;
- (_Bool)clearPurgeableFlagsForAllResources;
- (void)_installPurgeObserverAndProcessAlreadyRemovedFiles;
- (void)_processRemovedFiles:(id)arg1 inMountPoint:(id)arg2;
- (_Bool)_isFilePurgedForFileID:(id)arg1 purgedPath:(id)arg2;
- (void)_rescanResourcesFromFileSystem;
- (void)_markAsNotLocallyAvailableForResourcesWithFileIDsToPath:(id)arg1;

@end
