/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PLBackgroundJobService;

@interface PLPhotoLibraryBundleController : NSObject

{
    long long _bundleType;
    Class _libraryServicesDelegateClass;
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_bundlesByPath;
    PLBackgroundJobService *_backgroundJobService;
}

@property (retain) PLBackgroundJobService *backgroundJobService;

+ (id)_realPathForLibraryURL:(id)arg1;
+ (id)sharedBundleController;
+ (id)sharedAssetsdClientForPhotoLibraryURL:(id)arg1;

- (id)init;
- (id)initWithBundleType:(long long)arg1 libraryServicesManagerDelegateClass:(Class)arg2;
- (id)bundleForLibraryURL:(id)arg1;
- (id)libraryBundlePaths;
- (id)libraryBundles;
- (id)openBundleAtLibraryURL:(id)arg1;
- (id)replaceBundleForRebuildAtLibraryURL:(id)arg1;
- (id)newPhotoLibraryBundleWithLibraryURL:(id)arg1;
- (id)libraryServicesStatusDescription;
- (void)handleUnknownMergeEvent;
- (void)_unregisterBundle:(id)arg1;
- (void)shutdownBundle:(id)arg1 reason:(id)arg2;
- (id)lookupOrCreateBundleForLibraryURL:(id)arg1;
- (id)_lookupOrCreateBundleForLibraryURL:(id)arg1 replaceExisting:(_Bool)arg2;
- (_Bool)bindAssetsdService:(id)arg1 toBundle:(id)arg2 error:(id *)arg3;

@end
