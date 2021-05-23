/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class NSDictionary, PHAnimatedImage;

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderAnimatedImageDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

{
    CDUnknownBlockType _externalProgressHandler;
    CDUnknownBlockType _internalProgressHandler;
    CDUnknownBlockType _externalResultHandler;
    CDUnknownBlockType _internalResultHandler;
    PHAnimatedImage *__resultAnimatedImage;
    NSDictionary *__resultInfo;
}

@property (retain, nonatomic, setter=_setResultAnimatedImage:) PHAnimatedImage *_resultAnimatedImage;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) CDUnknownBlockType externalProgressHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType internalProgressHandler;
@property (copy, nonatomic) CDUnknownBlockType externalResultHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType internalResultHandler;

- (id)init;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)endSimulationWithError:(id)arg1;
- (void)_handleResultAnimatedImage:(id)arg1 info:(id)arg2;

@end
