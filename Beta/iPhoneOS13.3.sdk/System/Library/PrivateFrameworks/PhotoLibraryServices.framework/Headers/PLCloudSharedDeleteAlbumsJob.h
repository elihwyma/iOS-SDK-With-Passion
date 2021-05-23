/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob

{
    NSArray *_albumCloudGUIDsToDelete;
    NSString *_inviterAddress;
}

@property (retain, nonatomic) NSArray *albumCloudGUIDsToDelete;
@property (retain, nonatomic) NSString *inviterAddress;

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1;
+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)arg1 inviterAddress:(id)arg2;

- (void)run;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;

@end
