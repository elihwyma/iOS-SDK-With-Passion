/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSString;

@interface PLUserActivityDaemonJob : PLDaemonJob

{
    long long _actionType;
    NSString *_albumUUID;
    NSArray *_assetUUIDs;
    long long _cloudFeedContent;
    NSString *_suggestedCMMUUID;
    NSString *_momentShareUUID;
}

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) long long cloudFeedContent;
@property (copy, nonatomic) NSString *suggestedCMMUUID;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (id)newUserActivityDaemonJob;
+ (void)userDidViewCloudFeedContent:(long long)arg1;
+ (void)userDidNavigateIntoSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)arg1;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidReadCommentOnSharedAsset:(id)arg1;
+ (void)userDidDeleteSharedAlbum:(id)arg1;
+ (void)userDidDeleteSharedAssets:(id)arg1;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidChangeStatusForSuggestedCMM:(id)arg1;
+ (void)userDidChangeStatusForMomentShare:(id)arg1;

- (void)run;
- (id)initWithAssetsdClient:(id)arg1;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (void)runDaemonSide;
- (long long)daemonOperation;

@end
