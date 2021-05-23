/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMURLConfigurationRequest : NSObject

{
    _Bool _wantsQRCodeForSession;
    long long _requestedCaptureMode;
    long long _requestedCaptureDevice;
}

@property (nonatomic, readonly) long long requestedCaptureMode;
@property (nonatomic, readonly) long long requestedCaptureDevice;
@property (nonatomic, readonly) _Bool wantsQRCodeForSession;

- (_Bool)_initializeFromQueryDictionary:(id)arg1;
- (_Bool)_captureModeFromString:(id)arg1 outCaptureMode:(long long *)arg2;
- (long long)_captureDeviceFromString:(id)arg1 outCaptureDevice:(long long *)arg2;
- (id)initWithQueryDictionary:(id)arg1;

@end
