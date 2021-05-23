/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXActionPerformer.h>

@class PHFetchResult, PXDisplayTitleInfo;

@protocol PXDisplayAssetCollection;

@interface PXAssetCollectionActionPerformer : PXActionPerformer

{
    id <PXDisplayAssetCollection> _assetCollection;
    PXDisplayTitleInfo *_displayTitleInfo;
    PHFetchResult *_people;
}

@property (nonatomic, readonly) PHFetchResult *people;
@property (nonatomic, readonly) id <PXDisplayAssetCollection> assetCollection;
@property (nonatomic, readonly) PXDisplayTitleInfo *displayTitleInfo;

- (id)initWithActionType:(id)arg1;
- (id)initWithActionType:(id)arg1 assetCollection:(id)arg2 displayTitleInfo:(id)arg3 people:(id)arg4;

@end
