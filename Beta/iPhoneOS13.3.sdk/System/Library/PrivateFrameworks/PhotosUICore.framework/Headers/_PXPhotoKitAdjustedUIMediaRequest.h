/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSError, PHImageManager, PICompositionController, PLEditSource, PXPhotoKitEditSourceLoader;

@protocol OS_dispatch_queue, PXPhotoKitAdjustedDisplayAsset;

@interface _PXPhotoKitAdjustedUIMediaRequest : NSObject

{
    PXPhotoKitEditSourceLoader *_editSourceLoader;
    _Bool _delayRenders;
    _Bool _useCachedRenders;
    id <PXPhotoKitAdjustedDisplayAsset> _asset;
    NSObject<OS_dispatch_queue> *_renderQueue;
    PHImageManager *_imageManager;
    PLEditSource *_editSource;
    NSError *_loadError;
    PICompositionController *_baseCompositionController;
    double _progress;
}

@property (nonatomic, readonly) id <PXPhotoKitAdjustedDisplayAsset> asset;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *renderQueue;
@property (nonatomic, readonly) PHImageManager *imageManager;
@property (retain, nonatomic) PLEditSource *editSource;
@property (retain, nonatomic) NSError *loadError;
@property (retain, nonatomic) PICompositionController *baseCompositionController;
@property (nonatomic) double progress;
@property (nonatomic) _Bool delayRenders;
@property (nonatomic) _Bool useCachedRenders;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)beginLoadingEditSource;
- (id)initWithAsset:(id)arg1 renderQueue:(id)arg2 imageManager:(id)arg3;
- (void)_handleEditSourceLoadingFinished;

@end
