/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class PHAsset;

__attribute__((visibility("hidden")))
@interface PUPhotoPickerScaledFileSizeEstimator : NSObject

{
    struct FigPhotoDecompressionContainer *_figContainer;
    PHAsset *_asset;
}

@property (nonatomic, readonly) PHAsset *asset;

+ (_Bool)isAssetResizable:(id)arg1;

- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)_assetURL;
- (struct FigPhotoDecompressionContainer *)_figContainer;
- (unsigned long long)estimatedSizeForResizeDescriptor:(id)arg1;
- (_Bool)wouldResizeAssetUsingResizeDescriptor:(id)arg1;
- (id)_assetUTI;
- (unsigned long long)_assetOriginalSize;
- (struct CGSize)_targetSizeForResizeDescriptor:(id)arg1;
- (unsigned long long)_estimatedSizeForResizeDescriptor:(id)arg1;

@end
