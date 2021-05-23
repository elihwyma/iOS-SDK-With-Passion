/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSPredicate, NSSet, PHAsset, PHFetchResult, PHPhotoLibrary;

@interface PXPhotosDataSourceConfiguration : NSObject

{
    _Bool _hideHiddenAssets;
    PHFetchResult *_collectionListFetchResult;
    unsigned long long _options;
    NSDictionary *_existingAssetCollectionFetchResults;
    NSDictionary *_existingKeyAssetsFetchResults;
    PHAsset *_referenceAsset;
    NSPredicate *_filterPredicate;
    NSSet *_allowedUUIDs;
    NSArray *_filterPersons;
    PHPhotoLibrary *_photoLibrary;
    NSArray *_fetchPropertySets;
    long long _curationType;
}

@property (nonatomic, readonly) PHFetchResult *collectionListFetchResult;
@property (nonatomic, readonly) unsigned long long options;
@property (retain, nonatomic) NSDictionary *existingAssetCollectionFetchResults;
@property (retain, nonatomic) NSDictionary *existingKeyAssetsFetchResults;
@property (retain, nonatomic) PHAsset *referenceAsset;
@property (retain, nonatomic) NSPredicate *filterPredicate;
@property (retain, nonatomic) NSSet *allowedUUIDs;
@property (retain, nonatomic) NSArray *filterPersons;
@property (nonatomic) _Bool hideHiddenAssets;
@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSArray *fetchPropertySets;
@property (nonatomic) long long curationType;

- (id)init;
- (id)initWithCollectionListFetchResult:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithAssetFetchResult:(id)arg1 options:(unsigned long long)arg2;

@end
