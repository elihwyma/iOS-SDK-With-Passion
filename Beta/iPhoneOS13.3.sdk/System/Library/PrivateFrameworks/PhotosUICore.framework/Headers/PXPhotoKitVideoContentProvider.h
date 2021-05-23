/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXDisplayAssetVideoContentProvider.h>

@class NSString, PHAsset, PHFetchResult, PXPhotoKitUIMediaProvider;

@interface PXPhotoKitVideoContentProvider : PXDisplayAssetVideoContentProvider

{
    PHFetchResult *_fetchResult;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;

@end
