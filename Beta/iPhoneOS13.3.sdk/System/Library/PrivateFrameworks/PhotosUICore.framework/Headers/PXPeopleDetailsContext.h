/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXPhotosDetailsContext.h>

@class NSObject, NSString, PHFetchResult;

@protocol OS_dispatch_queue;

@interface PXPeopleDetailsContext : PXPhotosDetailsContext

{
    NSObject<OS_dispatch_queue> *_fetchingQueue;
    PHFetchResult *_keyFaceAssetFetchResult;
}

@property (nonatomic, readonly) PHFetchResult *keyFaceAssetFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 viewSourceOrigin:(unsigned long long)arg3;
+ (id)photosDetailsContextForAsset:(id)arg1 parentContext:(id)arg2;
+ (id)assetCollectionListFetchResultForPeople:(id)arg1 assetCount:(unsigned long long *)arg2;
+ (id)photosDetailsContextForAssetCollection:(id)arg1 assets:(id)arg2 keyAssets:(id)arg3 enableCuration:(_Bool)arg4 enableKeyAssets:(_Bool)arg5 viewSourceOrigin:(unsigned long long)arg6;

- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (void)didPerformChanges;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;
- (_Bool)shouldUseKeyFace;
- (id)initWithPeople:(id)arg1 parentContext:(id)arg2;
- (id)initWithPeople:(id)arg1 parentContext:(id)arg2 assetCollectionsFetch:(id)arg3;
- (void)setKeyFaceAssetFetchResult:(id)arg1;
- (void)_updateKeyFaceAssetFetchResult;
- (id)_fetchKeyFaceAssetFetchResultFromPerson:(id)arg1;
- (id)_displayTitleForPeople:(id)arg1;

@end
