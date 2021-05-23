/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXActionManager.h>

@class PHFetchResult, PXDisplayTitleInfo;

@protocol PXDisplayAssetCollection;

@interface PXAssetCollectionActionManager : PXActionManager

{
    id <PXDisplayAssetCollection> _assetCollection;
    PXDisplayTitleInfo *_displayTitleInfo;
    PHFetchResult *_people;
}

@property (retain, nonatomic) PHFetchResult *people;
@property (nonatomic, readonly) id <PXDisplayAssetCollection> assetCollection;
@property (nonatomic, readonly) PXDisplayTitleInfo *displayTitleInfo;

- (id)init;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;

@end
