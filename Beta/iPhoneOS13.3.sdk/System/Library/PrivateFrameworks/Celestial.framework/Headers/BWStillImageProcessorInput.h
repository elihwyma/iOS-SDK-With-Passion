/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWStillImageCaptureSettings, BWStillImageCaptureStreamSettings, FigCaptureStillImageSettings, NSString;

@interface BWStillImageProcessorInput : NSObject

{
    FigCaptureStillImageSettings *_settings;
    BWStillImageCaptureSettings *_captureSettings;
    BWStillImageCaptureStreamSettings *_captureStreamSettings;
}

@property (nonatomic, readonly) FigCaptureStillImageSettings *settings;
@property (nonatomic, readonly) BWStillImageCaptureSettings *captureSettings;
@property (nonatomic, readonly) BWStillImageCaptureStreamSettings *captureStreamSettings;
@property (nonatomic, readonly) _Bool isMaster;
@property (nonatomic, readonly) NSString *portType;

- (void)dealloc;
- (id)description;
- (id)initWithSettings:(id)arg1 captureSettings:(id)arg2 portType:(id)arg3;

@end
