/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString, PHPhotoLibrary;

@protocol OS_dispatch_queue;

@interface PXAssetFetcher : NSObject

{
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_resultsByAssetCollectionByConfiguration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedFetcherForPhotoLibrary:(id)arg1;

- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)existingKeyAssetsFetchResultForAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3;
- (id)existingCuratedAssetsFetchResultForAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 options:(unsigned long long)arg4;
- (id)existingFetchResultForAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(_Bool)arg6 hideHiddenAssets:(_Bool)arg7 fetchPropertySets:(id)arg8;
- (void)clearFetchResultsForAssetCollection:(id)arg1;
- (id)fetchKeyAssetsInAssetCollection:(id)arg1 referenceAsset:(id)arg2 referencePersons:(id)arg3;
- (id)fetchCuratedAssetsInAssetCollection:(id)arg1 referencePersons:(id)arg2 curationType:(long long)arg3 options:(unsigned long long)arg4;
- (id)fetchAssetsInAssetCollection:(id)arg1 withFilterPredicate:(id)arg2 inclusionPredicate:(id)arg3 fetchLimit:(unsigned long long)arg4 sortDescriptors:(id)arg5 reverseSortOrder:(_Bool)arg6 hideHiddenAssets:(_Bool)arg7 fetchPropertySets:(id)arg8;
- (id)_fetchConfigurationWithFilterPredicate:(id)arg1 inclusionPredicate:(id)arg2 fetchLimit:(unsigned long long)arg3 sortDescriptors:(id)arg4 reverseSortOrder:(_Bool)arg5 hideHiddenAssets:(_Bool)arg6 fetchPropertySets:(id)arg7;
- (id)_fetchConfigurationForCurationWithReferencePersons:(id)arg1 curationType:(long long)arg2 options:(unsigned long long)arg3;
- (id)_fetchConfigurationForKeyAssetWithReferenceAsset:(id)arg1 referencePersons:(id)arg2;
- (void)_storeExistingFetchResult:(id)arg1 forAssetCollection:(id)arg2 withFetchConfiguration:(id)arg3;

@end
