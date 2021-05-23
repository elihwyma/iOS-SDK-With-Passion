/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface BWStillImageCaptureAnalyticsPayload : NSObject

{
    NSString *_portType;
    float _accelStandardDeviation;
    float _gyroStandardDeviation;
    NSDictionary *_apsSubjectDistance;
    NSDictionary *_practicalFocalLength;
    NSDictionary *_focusingMethod;
    float _maxSphereTrackingError;
    float _stdSphereTrackingError;
    float _maxAFTrackingError;
    float _stdAFTrackingError;
    float _minDistanceFromSphereEndStop;
    float _spherePowerConsumption;
    float _afPowerConsumption;
    unsigned int _cameraPosture;
    NSString *_sphereMode;
    unsigned int _apsMode;
    unsigned int _timeSinceLastCaptureInSession;
    float _flashBrightnessRatio;
    NSDictionary *_oisRecenteringLoggingData;
    _Bool _livePhotoEnabled;
    _Bool _depthEnabled;
    _Bool _timeLapse;
    _Bool _burst;
    int _activeDeviceMask;
    int _devicePosition;
    int _deviceType;
    int _captureType;
    unsigned int _processingFlags;
    int _processingDuration;
    int _streamingTime;
    int _shutterLag;
    float _zoom;
    int _luxLevel;
    float _lensPosition;
    int _sensorTemperature;
    float _exposureDuration;
    float _iso;
    float _normalizedSNR;
    float _SNR;
    int _numberOfFaces;
    int _clientIDType;
    unsigned long long _captureFlags;
    unsigned long long _sceneFlags;
}

@property (nonatomic) int activeDeviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) int deviceType;
@property (nonatomic) int captureType;
@property (nonatomic) unsigned long long captureFlags;
@property (nonatomic) unsigned int processingFlags;
@property (nonatomic) unsigned long long sceneFlags;
@property (nonatomic) int processingDuration;
@property (nonatomic) int streamingTime;
@property (nonatomic) int shutterLag;
@property (nonatomic) float zoom;
@property (nonatomic) int luxLevel;
@property (nonatomic) float lensPosition;
@property (nonatomic) int sensorTemperature;
@property (nonatomic) float exposureDuration;
@property (nonatomic) float iso;
@property (nonatomic) float normalizedSNR;
@property (nonatomic) float SNR;
@property (nonatomic) int numberOfFaces;
@property (nonatomic) int clientIDType;
@property (nonatomic) _Bool livePhotoEnabled;
@property (nonatomic) _Bool depthEnabled;
@property (nonatomic) _Bool timeLapse;
@property (nonatomic) _Bool burst;
@property (retain, nonatomic) NSString *portType;
@property (nonatomic) float accelStandardDeviation;
@property (nonatomic) float gyroStandardDeviation;
@property (retain, nonatomic) NSDictionary *apsSubjectDistance;
@property (retain, nonatomic) NSDictionary *practicalFocalLength;
@property (retain, nonatomic) NSDictionary *focusingMethod;
@property (nonatomic) float maxSphereTrackingError;
@property (nonatomic) float stdSphereTrackingError;
@property (nonatomic) float maxAFTrackingError;
@property (nonatomic) float stdAFTrackingError;
@property (nonatomic) float minDistanceFromSphereEndStop;
@property (nonatomic) float spherePowerConsumption;
@property (nonatomic) float afPowerConsumption;
@property (nonatomic) unsigned int cameraPosture;
@property (retain, nonatomic) NSString *sphereMode;
@property (nonatomic) unsigned int apsMode;
@property (nonatomic) unsigned int timeSinceLastCaptureInSession;
@property (nonatomic) float flashBrightnessRatio;
@property (retain, nonatomic) NSDictionary *oisRecenteringLoggingData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
