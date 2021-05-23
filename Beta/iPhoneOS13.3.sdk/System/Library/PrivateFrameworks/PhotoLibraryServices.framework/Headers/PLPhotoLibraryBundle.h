/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSError, NSNumber, NSURL, PLAssetsdClient, PLAtomicObject, PLChangeHandlingContainer, PLConstraintsDirector, PLEmailAddressManager, PLFileSystemVolumeUnmountMonitor, PLIndicatorFileCoordinator, PLLazyObject, PLLibraryServicesManager, PLManagedObjectLookupItemCache, PLPersistentContainer, PLPersonInfoManager, PLPhotoAnalysisServiceClient, PLPhotoKitVariationCache, PLPhotoLibraryBundleController, PLPhotoLibraryPathManager;

@interface PLPhotoLibraryBundle : NSObject

{
    NSURL *_libraryURL;
    struct os_unfair_lock_s _lock;
    NSError *_shutdownReason;
    PLAtomicObject *_atomicPhotoLibraries;
    PLLazyObject *_lazyPersistentContainer;
    PLLazyObject *_lazyIndicatorFileCoordinator;
    PLLazyObject *_lazyChangeHandlingContainer;
    PLLazyObject *_lazyAssetsdClient;
    PLLazyObject *_lazyLibraryServicesManager;
    PLLazyObject *_lazyVariationCache;
    PLLazyObject *_lazyUniformTypeIdentiferCache;
    PLLazyObject *_lazyCodecCache;
    PLLazyObject *_lazyPersonInfoManager;
    PLLazyObject *_lazyEmailAddressManager;
    PLLazyObject *_lazyBoundAssetsdServicesTable;
    PLLazyObject *_lazyPhotoAnalysisServiceClient;
    PLLazyObject *_lazyConstraintsDirector;
    NSNumber *_sqliteErrorIndicatorFileExists;
    struct os_unfair_lock_s _sqliteErrorIndicatorLock;
    PLFileSystemVolumeUnmountMonitor *_volumeUnmountMonitor;
    PLPhotoLibraryPathManager *_pathManager;
    PLPhotoLibraryBundleController *_bundleController;
}

@property (copy, readonly) NSURL *libraryURL;
@property (copy, readonly) NSError *shutdownReason;
@property (readonly) PLPhotoLibraryPathManager *pathManager;
@property (readonly) PLIndicatorFileCoordinator *indicatorFileCoordinator;
@property (readonly) PLPersistentContainer *persistentContainer;
@property (readonly) PLChangeHandlingContainer *changeHandlingContainer;
@property (readonly) PLPhotoKitVariationCache *variationCache;
@property (readonly) PLManagedObjectLookupItemCache *uniformTypeIdentiferCache;
@property (readonly) PLManagedObjectLookupItemCache *codecCache;
@property (readonly) PLPersonInfoManager *personInfoManager;
@property (readonly) PLEmailAddressManager *emailAddressManager;
@property (weak, nonatomic, readonly) PLPhotoLibraryBundleController *bundleController;
@property (readonly) PLPhotoAnalysisServiceClient *photoAnalysisServiceClient;
@property (readonly) PLConstraintsDirector *constraintsDirector;
@property (readonly) PLAssetsdClient *assetsdClient;
@property (readonly) PLLibraryServicesManager *libraryServicesManager;
@property (readonly) NSArray *boundAssetsdServices;

- (id)description;
- (void)close;
- (void)initializeChangeHandling;
- (void)volumeWillUnmount:(id)arg1;
- (id)initWithLibraryURL:(id)arg1 bundleController:(id)arg2;
- (id)newChangeHandlingContainer;
- (void)_invalidateChangeHandlingContainer;
- (void)_invalidatePersistentContainer;
- (void)shutdownWithReason:(id)arg1;
- (_Bool)sqliteErrorIndicatorFileExists;
- (id)boundAssetsdServicesTable;
- (id)newAssetsdClient;
- (id)newChangePublisher;
- (id)newLibraryServicesManager;
- (id)newBoundAssetsdServicesTable;
- (_Bool)bindAssetsdService:(id)arg1 error:(id *)arg2;
- (void)unbindAssetsdService:(id)arg1;
- (_Bool)registerPLPhotoLibrary:(id)arg1;

@end
