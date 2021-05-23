/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PXUIImageProvider;

@interface PXCMMPreviewUIImageProvider : NSObject

{
    id <PXUIImageProvider> _underlyingAssetImageProvider;
}

@property (nonatomic, readonly) id <PXUIImageProvider> underlyingAssetImageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)initWithUnderlyingAssetImageProvider:(id)arg1;
- (id)_underlyingAssetsFromPreviewAssets:(id)arg1;

@end
