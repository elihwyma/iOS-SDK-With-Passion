/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSString, PUReviewAssetsDataSourceManager;

@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager

{
    PUReviewAssetsDataSourceManager *__attachedDataSourceManager;
}

@property (retain, nonatomic, setter=_setAttachedDataSourceManager:) PUReviewAssetsDataSourceManager *_attachedDataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createInitialDataSource;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)arg1;
- (void)assetsDataSourceManager:(id)arg1 didChangeAssetsDataSource:(id)arg2 changeDetails:(id)arg3;
- (void)attachDataSourceManager:(id)arg1;
- (void)detachCurrentDataSourceManager;
- (void)_createDataSourceFromAssetsDataSource:(id)arg1 changeDetails:(id)arg2;

@end
