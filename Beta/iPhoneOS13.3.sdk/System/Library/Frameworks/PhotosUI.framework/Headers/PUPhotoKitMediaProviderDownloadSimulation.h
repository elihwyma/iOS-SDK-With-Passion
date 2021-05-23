/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUPhotoKitMediaProviderDownloadSimulation : NSObject

{
    _Bool _shouldSimulateFailure;
    double _downloadDuration;
    double __updateInterval;
    double __simulatedProgress;
}

@property (nonatomic, readonly) double _updateInterval;
@property (nonatomic, setter=_setSimulatedProgress:) double _simulatedProgress;
@property (nonatomic) _Bool shouldSimulateFailure;
@property (nonatomic) double downloadDuration;

- (id)init;
- (void)beginSimulation;
- (void)_updateSimulatedDownload;
- (void)updateSimulationWithProgress:(double)arg1;
- (void)endSimulationWithError:(id)arg1;

@end
