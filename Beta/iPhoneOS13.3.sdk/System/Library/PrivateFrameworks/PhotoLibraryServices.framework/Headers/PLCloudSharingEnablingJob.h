/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingEnablingJob : PLCloudSharingJob

{
    _Bool _enableSharing;
}

@property (nonatomic) _Bool enableSharing;

+ (void)disableCloudSharingWithLibraryServicesManager:(id)arg1;
+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(_Bool)arg2 withReason:(id)arg3;
+ (void)enableCloudSharing:(_Bool)arg1;

- (void)run;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (_Bool)shouldArchiveXPCToDisk;

@end
