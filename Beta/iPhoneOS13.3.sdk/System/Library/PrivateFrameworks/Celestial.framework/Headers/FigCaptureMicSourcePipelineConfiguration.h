/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWZoomCommandHandler, FigCaptureSourceConfiguration, NSArray, NSData, NSNumber;

@interface FigCaptureMicSourcePipelineConfiguration : NSObject

{
    FigCaptureSourceConfiguration *_micConfiguration;
    NSArray *_micConnectionConfigurations;
    FigCaptureSourceConfiguration *_cameraConfigurationForStereoAudioCapture;
    BWZoomCommandHandler *_zoomCommandHandlerForStereoAudioCapture;
    _Bool _configuresAppAudioSession;
    _Bool _audioSourceNodeShouldCallEndInterruption;
    NSNumber *_clientPID;
    unsigned int _clientVersionOfLinkedSDK;
    NSData *_clientAuditToken;
}

@property (retain, nonatomic) FigCaptureSourceConfiguration *micConfiguration;
@property (retain, nonatomic) NSArray *micConnectionConfigurations;
@property (retain, nonatomic) FigCaptureSourceConfiguration *cameraConfigurationForStereoAudioCapture;
@property (retain, nonatomic) BWZoomCommandHandler *zoomCommandHandlerForStereoAudioCapture;
@property (nonatomic) _Bool configuresAppAudioSession;
@property (nonatomic) _Bool audioSourceNodeShouldCallEndInterruption;
@property (retain, nonatomic) NSNumber *clientPID;
@property (nonatomic) unsigned int clientVersionOfLinkedSDK;
@property (retain, nonatomic) NSData *clientAuditToken;

- (void)dealloc;
- (id)micConnectionConfigurationsForMicSourcePosition:(int)arg1;

@end
