/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PHFetchResult, PXPhotosDataSource;

@protocol PXDisplayAsset;

@interface PXActivitySharingContext : NSObject

{
    _Bool _wantsActionSheet;
    _Bool _excludeShareActivity;
    PHFetchResult *_assetCollectionsFetchResult;
    PXPhotosDataSource *_photosDataSource;
    NSArray *_activities;
    NSString *_title;
    NSString *_subtitle;
    id <PXDisplayAsset> _keyAsset;
    unsigned long long _sourceOrigin;
}

@property (copy, nonatomic, readonly) PHFetchResult *assetCollectionsFetchResult;
@property (nonatomic, readonly) PXPhotosDataSource *photosDataSource;
@property (copy, nonatomic) NSArray *activities;
@property (nonatomic) _Bool wantsActionSheet;
@property (nonatomic) _Bool excludeShareActivity;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) id <PXDisplayAsset> keyAsset;
@property (nonatomic) unsigned long long sourceOrigin;

- (id)init;
- (id)initWithAssetCollection:(id)arg1 photosDataSource:(id)arg2;
- (id)initWithAssetCollection:(id)arg1 assetsDataSource:(id)arg2;

@end
