/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDate, NSString;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob

{
    _Bool _albumHasUnseenContent;
    _Bool _assetCollectionHasUnreadComments;
    long long _jobType;
    NSString *_albumGUID;
    long long _albumUnviewedAssetCount;
    NSString *_assetCollectionGUID;
    NSDate *_assetCollectionLastViewedCommentDate;
}

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSString *albumGUID;
@property (nonatomic) _Bool albumHasUnseenContent;
@property (nonatomic) long long albumUnviewedAssetCount;
@property (retain, nonatomic) NSString *assetCollectionGUID;
@property (nonatomic) _Bool assetCollectionHasUnreadComments;
@property (retain, nonatomic) NSDate *assetCollectionLastViewedCommentDate;

+ (void)markAlbum:(id)arg1 asHavingUnseenContent:(_Bool)arg2;
+ (void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2;
+ (void)markAssetCollection:(id)arg1 asHavingUnreadComments:(_Bool)arg2 inAlbum:(id)arg3;
+ (void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3;

- (void)run;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (void)_executeAlbumViewedStateChanged;
- (void)_executeAlbumUnviewedAssetCountChangedWithGroup;
- (void)_executeAssetCommentsReadStateChangedWithGroup;
- (void)_executeAssetLastViewedCommentDateChangedWithGroup;

@end
