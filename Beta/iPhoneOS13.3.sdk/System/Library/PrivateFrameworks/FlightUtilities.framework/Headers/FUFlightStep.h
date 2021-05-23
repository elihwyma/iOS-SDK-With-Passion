/*
 Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

#import <NSObject.h>

@class FUAirport, FUStepTime, NSNumber, NSString;

@interface FUFlightStep : NSObject

{
    NSNumber *_delayFromSchedule;
    _Bool _departure;
    FUAirport *_airport;
    NSString *_gate;
    NSString *_terminal;
    long long _legStatus;
    FUStepTime *_scheduledTime;
    FUStepTime *_estimatedTime;
    FUStepTime *_actualTime;
    FUStepTime *_runwayTime;
    FUStepTime *_plannedTime;
}

@property (retain) FUAirport *airport;
@property (retain) NSString *gate;
@property (retain) NSString *terminal;
@property long long legStatus;
@property (retain, nonatomic) NSNumber *delayFromSchedule;
@property (retain) FUStepTime *scheduledTime;
@property (retain) FUStepTime *estimatedTime;
@property (retain) FUStepTime *actualTime;
@property (retain) FUStepTime *runwayTime;
@property (readonly) _Bool taxiing;
@property _Bool departure;
@property (retain) FUStepTime *plannedTime;
@property (readonly) FUStepTime *time;
@property (nonatomic, readonly) unsigned long long status;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
