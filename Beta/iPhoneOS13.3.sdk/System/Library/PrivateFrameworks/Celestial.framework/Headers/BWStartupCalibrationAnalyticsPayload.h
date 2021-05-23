/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@interface BWStartupCalibrationAnalyticsPayload : NSObject

{
    NSString *_portType;
    float _accelStandardDeviation;
    float _gyroStandardDeviation;
    float _sessionOffset;
    float _deltaOffset;
    int _apsVoltage;
    float _maxAcceleration;
    float _deltaAcceleration;
    _Bool _headroomErrorOccurred;
    _Bool _convergeErrorOccurred;
    _Bool _motionErrorOccurred;
    _Bool _confidenceErrorOccurred;
    _Bool _largeOffsetErrorOccurred;
    _Bool _saturationErrorOccurred;
    _Bool _success;
    _Bool _gcolEntry;
    _Bool _closedLoopEntry;
}

@property (retain, nonatomic) NSString *portType;
@property (nonatomic) float accelStandardDeviation;
@property (nonatomic) float gyroStandardDeviation;
@property (nonatomic) float sessionOffset;
@property (nonatomic) float deltaOffset;
@property (nonatomic) int apsVoltage;
@property (nonatomic) float maxAcceleration;
@property (nonatomic) float deltaAcceleration;
@property (nonatomic) _Bool headroomErrorOccurred;
@property (nonatomic) _Bool convergeErrorOccurred;
@property (nonatomic) _Bool motionErrorOccurred;
@property (nonatomic) _Bool confidenceErrorOccurred;
@property (nonatomic) _Bool largeOffsetErrorOccurred;
@property (nonatomic) _Bool saturationErrorOccurred;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool gcolEntry;
@property (nonatomic) _Bool closedLoopEntry;
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
