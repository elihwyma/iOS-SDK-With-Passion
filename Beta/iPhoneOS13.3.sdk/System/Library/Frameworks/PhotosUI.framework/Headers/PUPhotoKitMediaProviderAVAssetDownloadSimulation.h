/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class AVAsset, AVAudioMix, NSDictionary;

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderAVAssetDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

{
    CDUnknownBlockType _externalProgressHandler;
    CDUnknownBlockType _internalProgressHandler;
    CDUnknownBlockType _externalResultHandler;
    CDUnknownBlockType _internalResultHandler;
    AVAsset *__resultAVAsset;
    AVAudioMix *__resultAudioMix;
    NSDictionary *__resultInfo;
}

@property (retain, nonatomic, setter=_setResultAVAsset:) AVAsset *_resultAVAsset;
@property (retain, nonatomic, setter=_setResultAudioMix:) AVAudioMix *_resultAudioMix;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) CDUnknownBlockType externalProgressHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType internalProgressHandler;
@property (copy, nonatomic) CDUnknownBlockType externalResultHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType internalResultHandler;

- (id)init;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)endSimulationWithError:(id)arg1;
- (void)_handleResultAVAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3;

@end
