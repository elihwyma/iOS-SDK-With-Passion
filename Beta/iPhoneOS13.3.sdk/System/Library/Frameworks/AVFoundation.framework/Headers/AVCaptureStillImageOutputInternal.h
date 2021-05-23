/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVWeakReference, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCaptureStillImageOutputInternal : NSObject

{
    AVWeakReference *weakReference;
    NSMutableArray *stillImageRequests;
    _Bool squareCropEnabled;
    struct CGSize previewImageSize;
    unsigned int imageDataFormatType;
    float jpegQuality;
    _Bool jpegQualitySpecified;
    long long HDRCaptureMode;
    _Bool EV0CaptureEnabled;
    _Bool noiseReductionEnabled;
    _Bool suspendsVideoProcessingDuringCapture;
    NSDictionary *outputSettings;
    _Bool isCapturingPhoto;
    _Bool rawCaptureEnabled;
    _Bool SISSupported;
    _Bool SISEnabled;
    _Bool SISActive;
    _Bool highResStillEnabled;
    unsigned int shutterSoundID;
    struct {
        unsigned int imageCount;
        int outputFormat;
        unsigned int outputWidth;
        unsigned int outputHeight;
    } preparedBracket;
    NSMutableArray *prepareRequests;
    unsigned long long maxBracketedCaptureCount;
    _Bool lensStabilizationDuringBracketedCaptureSupported;
    _Bool lensStabilizationDuringBracketedCaptureEnabled;
    _Bool bravoImageFusionSupported;
    struct ct_green_tea_logger_s *greenTeaLogger;
}

- (id)init;
- (void)dealloc;

@end
