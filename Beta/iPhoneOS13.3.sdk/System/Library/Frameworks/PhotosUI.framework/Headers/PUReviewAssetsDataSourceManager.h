/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSourceManager.h>

@class NSString, PUReviewDataSource;

@protocol PUDisplayAssetCollection, PUReviewAssetsDataSourceManagerDelegate;

@interface PUReviewAssetsDataSourceManager : PUAssetsDataSourceManager

{
    id <PUReviewAssetsDataSourceManagerDelegate> _reviewDelegate;
    PUReviewDataSource *__reviewDataSource;
    id <PUDisplayAssetCollection> __containingAssetCollection;
}

@property (nonatomic, readonly) PUReviewDataSource *_reviewDataSource;
@property (nonatomic, readonly) id <PUDisplayAssetCollection> _containingAssetCollection;
@property (weak, nonatomic) id <PUReviewAssetsDataSourceManagerDelegate> reviewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reviewDataSourceDidChange:(id)arg1 changeDetails:(id)arg2;
- (id)initWithReviewDataSource:(id)arg1;
- (void)_updateWithReviewDataSource:(id)arg1 changeDetails:(id)arg2;

@end
