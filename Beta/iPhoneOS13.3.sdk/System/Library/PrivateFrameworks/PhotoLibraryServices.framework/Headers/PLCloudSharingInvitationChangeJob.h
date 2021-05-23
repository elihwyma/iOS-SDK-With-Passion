/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob

{
    NSArray *_MSASSharingRelationships;
    long long _relationshipChangeType;
    NSString *_albumGUID;
    NSString *_resendInvitationGUID;
    long long _jobType;
    NSDictionary *_mstreamdInfoDictionary;
}

@property (retain, nonatomic) NSArray *MSASSharingRelationships;
@property (nonatomic) long long relationshipChangeType;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSString *resendInvitationGUID;
@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;

+ (void)saveServerStateLocallyForSharingACLRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3;
+ (void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3;
+ (void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg1;
+ (void)resendPendingInvitationWithGUID:(id)arg1 albumGUID:(id)arg2;

- (void)run;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (_Bool)shouldArchiveXPCToDisk;
- (void)executeSaveServerStateLocallyForSharingInvitationRelationships;
- (void)executeSaveServerStateLocallyForSharingACLRelationships;
- (void)executeSendServerPendingInvitationsForAlbumWithGUID;

@end
