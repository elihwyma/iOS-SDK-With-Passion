/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotoKitMediaProviderDownloadSimulation.h>

@class NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderImageDataDownloadSimulation : PUPhotoKitMediaProviderDownloadSimulation

{
    CDUnknownBlockType _externalProgressHandler;
    CDUnknownBlockType _internalProgressHandler;
    CDUnknownBlockType _externalResultHandler;
    CDUnknownBlockType _internalResultHandler;
    NSData *__resultImageData;
    NSString *__resultDataUTI;
    long long __resultOrientaton;
    NSDictionary *__resultInfo;
}

@property (retain, nonatomic, setter=_setResultImageData:) NSData *_resultImageData;
@property (retain, nonatomic, setter=_setResultDataUTI:) NSString *_resultDataUTI;
@property (nonatomic, setter=_setResultOrientation:) long long _resultOrientaton;
@property (copy, nonatomic, setter=_setResultInfo:) NSDictionary *_resultInfo;
@property (copy, nonatomic) CDUnknownBlockType externalProgressHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType internalProgressHandler;
@property (copy, nonatomic) CDUnknownBlockType externalResultHandler;
@property (copy, nonatomic, readonly) CDUnknownBlockType internalResultHandler;

- (id)init;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)endSimulationWithError:(id)arg1;
- (void)_handleResultImageData:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3 info:(id)arg4;

@end
