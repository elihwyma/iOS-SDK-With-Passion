/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUViewModel.h>

@class NSProgress, PUAssetSharedViewModelChange, PUOperationStatus;

@protocol PUDisplayAsset;

__attribute__((visibility("hidden")))
@interface PUAssetSharedViewModel : PUViewModel

{
    id <PUDisplayAsset> _asset;
    PUOperationStatus *_loadingStatus;
    NSProgress *_saveProgress;
    long long _saveState;
    long long _flippingFullSizeRenderState;
}

@property (nonatomic, readonly) PUAssetSharedViewModelChange *currentChange;
@property (nonatomic, readonly) id <PUDisplayAsset> asset;
@property (retain, nonatomic) PUOperationStatus *loadingStatus;
@property (retain, nonatomic) NSProgress *saveProgress;
@property (nonatomic) long long saveState;
@property (nonatomic) long long flippingFullSizeRenderState;

- (id)init;
- (id)initWithAsset:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (id)newViewModelChange;

@end
