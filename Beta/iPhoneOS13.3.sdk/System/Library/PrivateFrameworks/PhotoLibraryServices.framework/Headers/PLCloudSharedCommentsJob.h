/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob

{
    long long _jobType;
    NSArray *_msASComments;
    NSString *_commentGUID;
    NSString *_assetGUID;
    NSString *_albumGUID;
    NSDictionary *_mstreamdInfoDictionary;
}

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSArray *msASComments;
@property (retain, nonatomic) NSString *commentGUID;
@property (retain, nonatomic) NSString *assetGUID;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;

+ (void)publishCommentToServer:(id)arg1;
+ (void)deleteSharedCommentFromServer:(id)arg1;
+ (void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
+ (void)assetsdLocallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 libraryServicesManager:(id)arg5;
+ (void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2;

- (void)run;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (_Bool)shouldArchiveXPCToDisk;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)executePublishCommentToServer;
- (void)executeDeleteCommentFromServer;

@end
