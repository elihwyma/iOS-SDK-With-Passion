/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWStillImageCaptureSettings, BWStillImageProcessingSettings, FigCaptureStillImageSettings;

@interface BWStillImageSettings : NSObject

{
    FigCaptureStillImageSettings *_requestedSettings;
    BWStillImageCaptureSettings *_captureSettings;
    BWStillImageProcessingSettings *_processingSettings;
}

@property (nonatomic, readonly) FigCaptureStillImageSettings *requestedSettings;
@property (nonatomic, readonly) BWStillImageCaptureSettings *captureSettings;
@property (nonatomic, readonly) BWStillImageProcessingSettings *processingSettings;

- (void)dealloc;
- (id)initWithRequestedSettings:(id)arg1 captureSettings:(id)arg2 processingSettings:(id)arg3;

@end
