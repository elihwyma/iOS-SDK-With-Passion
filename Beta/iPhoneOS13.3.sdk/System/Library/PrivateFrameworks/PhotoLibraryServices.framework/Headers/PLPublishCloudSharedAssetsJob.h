/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSDictionary, NSString;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob

{
    _Bool _isNewAlbum;
    NSString *_publishAlbumCloudGUID;
    NSArray *_originalAssetUUIDs;
    NSArray *_stillImageOnlyAssetUUIDs;
    NSDictionary *_customExportsInfo;
    NSDictionary *_trimmedVideoPathInfo;
    NSString *_batchCommentText;
}

@property (retain, nonatomic) NSString *publishAlbumCloudGUID;
@property (retain, nonatomic) NSArray *originalAssetUUIDs;
@property (retain, nonatomic) NSArray *stillImageOnlyAssetUUIDs;
@property (retain, nonatomic) NSDictionary *customExportsInfo;
@property (retain, nonatomic) NSDictionary *trimmedVideoPathInfo;
@property (nonatomic) _Bool isNewAlbum;
@property (retain, nonatomic) NSString *batchCommentText;

+ (id)videoComplementURLForSharingFromAsset:(id)arg1;
+ (void)publishBatchOfOriginalAssetUUIDs:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 trimmedVideoPathInfo:(id)arg5 isNewAlbum:(_Bool)arg6 batchCommentText:(id)arg7;

- (void)run;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;
- (_Bool)shouldArchiveXPCToDisk;
- (void)executeDaemonOperation;
- (void)retrieveURLsFromAsset:(id)arg1 withExportedFileURL:(id)arg2 primaryURL:(id *)arg3 videoComplementURL:(id *)arg4;

@end
