/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSourceManager.h>

@class NSString;

@protocol PUDisplayAssetCollection, PUTransientDataSource;

@interface PUCameraTransientAssetsDataSourceManager : PUAssetsDataSourceManager

{
    id <PUTransientDataSource> __transientDataSource;
    id <PUDisplayAssetCollection> __containingAssetCollection;
}

@property (nonatomic, readonly) id <PUTransientDataSource> _transientDataSource;
@property (nonatomic, readonly) id <PUDisplayAssetCollection> _containingAssetCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)transientDataSourceDidChange:(id)arg1;
- (id)initWithTransientDataSource:(id)arg1;
- (void)_updateWithTransientDataSource:(id)arg1;

@end
