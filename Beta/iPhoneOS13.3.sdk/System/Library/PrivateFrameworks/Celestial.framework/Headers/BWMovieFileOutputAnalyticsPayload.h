/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSDictionary, NSString;

@interface BWMovieFileOutputAnalyticsPayload : NSObject

{
    struct BWCoreAnalyticsMovieRecordingSphereAFStatistics *_sphereAFStatistics;
    NSDictionary *_sphereModeByPortType;
    NSDictionary *_APSModeByPortType;
    _Bool _videoMirrored;
    int _activeDeviceMask;
    int _devicePosition;
    int _videoOrientation;
    int _deviceType;
    int _clientIDType;
    float _nominalFramerate;
    int _height;
    int _width;
    double _duration;
    double _durationFront;
    double _durationRearWide;
    double _durationRearTele;
    double _durationRearSuperWide;
}

@property (nonatomic) int activeDeviceMask;
@property (nonatomic) int devicePosition;
@property (nonatomic) int videoOrientation;
@property (nonatomic) _Bool videoMirrored;
@property (nonatomic) int deviceType;
@property (nonatomic) int clientIDType;
@property (nonatomic) double duration;
@property (nonatomic) double durationFront;
@property (nonatomic) double durationRearWide;
@property (nonatomic) double durationRearTele;
@property (nonatomic) double durationRearSuperWide;
@property (nonatomic) float nominalFramerate;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (nonatomic) struct BWCoreAnalyticsMovieRecordingSphereAFStatistics *sphereAFStatistics;
@property (retain, nonatomic) NSDictionary *sphereModeByPortType;
@property (retain, nonatomic) NSDictionary *APSModeByPortType;
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
