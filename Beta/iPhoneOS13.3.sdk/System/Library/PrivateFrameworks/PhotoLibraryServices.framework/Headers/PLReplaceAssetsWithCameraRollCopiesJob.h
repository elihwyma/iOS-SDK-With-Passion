/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSPersistentStoreCoordinator, PLManagedAlbum, PLManagedObjectContext, PLPhotoLibrary;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob

{
    NSArray *_assets;
    PLManagedAlbum *_album;
    PLPhotoLibrary *_photoLibrary;
}

@property (copy, nonatomic) NSArray *assets;
@property (retain, nonatomic) PLManagedAlbum *album;
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PLManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;

+ (void)replaceAssets:(id)arg1 withCameraRollCopiesInAlbum:(id)arg2;

- (void)dealloc;
- (void)run;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (id)_cameraRollAssetDerivedFromAsset:(id)arg1;

@end
