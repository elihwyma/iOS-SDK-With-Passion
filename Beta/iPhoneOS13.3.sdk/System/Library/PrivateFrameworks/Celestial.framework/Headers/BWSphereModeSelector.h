/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@interface BWSphereModeSelector : NSObject

{
    struct OpaqueFigCaptureStream *_stream;
    struct __CFString *_currentSphereMode;
    float _maximumFrameRate;
    _Bool _sphereVideoSupported;
    _Bool _sphereVideoEnabled;
    _Bool _avoidsSphereRecentering;
    _Bool _enablesSphereWhenAvailable;
    _Bool _motionDataInvalid;
    _Bool _lowPowerSphereModeEnabled;
    _Bool _stillPreviewActiveSupported;
    _Bool _zeroShutterLagEnabled;
    int _sphereThermalLevel;
    _Bool _tripodModeEnabled;
    _Bool _depthDataDeliveryEnabled;
    _Bool _overCaptureEnabled;
}

@property (nonatomic) float maximumFrameRate;
@property (nonatomic, readonly) _Bool sphereVideoSupported;
@property (nonatomic) _Bool sphereVideoEnabled;
@property (nonatomic) _Bool avoidsSphereRecentering;
@property (nonatomic) _Bool enablesSphereWhenAvailable;
@property (nonatomic) _Bool zeroShutterLagEnabled;
@property (nonatomic) _Bool lowPowerSphereModeEnabled;
@property (nonatomic) int systemThermalLevel;
@property (nonatomic) _Bool tripodModeEnabled;
@property (nonatomic) _Bool depthDataDeliveryEnabled;
@property (nonatomic) _Bool overCaptureEnabled;
@property (readonly) struct __CFString *currentSphereMode;

+ (void)initialize;

- (void)_updateSphereMode;
- (id)initWithStillActivePreviewSupported:(_Bool)arg1 sphereVideoSupported:(_Bool)arg2;

@end
