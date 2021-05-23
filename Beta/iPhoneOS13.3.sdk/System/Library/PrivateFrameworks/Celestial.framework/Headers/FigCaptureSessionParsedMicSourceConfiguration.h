/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureSourceConfiguration, NSArray;

@interface FigCaptureSessionParsedMicSourceConfiguration : NSObject

{
    NSArray *_micConnectionConfigurations;
    FigCaptureSourceConfiguration *_cameraConfigurationForStereoAudioCapture;
}

@property (nonatomic, readonly) NSArray *micConnectionConfigurations;
@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;

- (void)dealloc;
- (id)initWithMicConnectionConfigurations:(id)arg1 cameraConfigurationForStereoAudioCapture:(id)arg2;

@end
