/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSSet, NSString;

@interface BWStreamingSessionAnalyticsPayload : NSObject

{
    int _deviceType;
    int _devicePosition;
    unsigned int _streamingTime;
    int _clientIDType;
    NSSet *_sunburnDetectOccurred;
    NSDictionary *_numberOfSphereJitterDetectAttempts;
    NSDictionary *_numberOfSphereJitterDetects;
    NSDictionary *_actuatorVendor;
    NSString *_sphereMode;
    unsigned int _numberOfPhotoCaptures;
    unsigned int _numberOfBurstPhotoCaptures;
    unsigned int _numberOfBalancedPhotoCaptures;
    unsigned int _timeToFirstPhotoCapture;
    unsigned int _maxTimeSinceLastPhotoCapture;
    unsigned int _minTimeSinceLastPhotoCapture;
    unsigned int _numberOfButtonMashingCapturesAtRate0;
    unsigned int _numberOfButtonMashingCapturesAtRate1;
    unsigned int _numberOfButtonMashingEventsAtRate0;
    unsigned int _numberOfButtonMashingEventsAtRate1;
}

@property (nonatomic) int deviceType;
@property (nonatomic) int devicePosition;
@property (nonatomic) unsigned int streamingTime;
@property (nonatomic) int clientIDType;
@property (retain, nonatomic) NSSet *sunburnDetectOccurred;
@property (retain, nonatomic) NSDictionary *numberOfSphereJitterDetectAttempts;
@property (retain, nonatomic) NSDictionary *numberOfSphereJitterDetects;
@property (retain, nonatomic) NSDictionary *actuatorVendor;
@property (retain, nonatomic) NSString *sphereMode;
@property (nonatomic) unsigned int numberOfPhotoCaptures;
@property (nonatomic) unsigned int numberOfBurstPhotoCaptures;
@property (nonatomic) unsigned int numberOfBalancedPhotoCaptures;
@property (nonatomic) unsigned int timeToFirstPhotoCapture;
@property (nonatomic) unsigned int maxTimeSinceLastPhotoCapture;
@property (nonatomic) unsigned int minTimeSinceLastPhotoCapture;
@property (nonatomic) unsigned int numberOfButtonMashingCapturesAtRate0;
@property (nonatomic) unsigned int numberOfButtonMashingCapturesAtRate1;
@property (nonatomic) unsigned int numberOfButtonMashingEventsAtRate0;
@property (nonatomic) unsigned int numberOfButtonMashingEventsAtRate1;
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
