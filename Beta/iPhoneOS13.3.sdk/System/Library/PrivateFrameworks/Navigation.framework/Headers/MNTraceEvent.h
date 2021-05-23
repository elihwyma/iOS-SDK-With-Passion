/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNLocation, NSDictionary, NSString;

@interface MNTraceEvent : NSObject

{
    NSString *_cachedPrimaryDescription;
    NSString *_cachedSecondaryDescription;
    double _timeSinceStartOfRoute;
    unsigned long long _stepIndex;
    unsigned long long _stage;
    double _distanceToStartOfManeuver;
    MNLocation *_location;
    unsigned long long _eventType;
    NSDictionary *_eventData;
}

@property (nonatomic, readonly) double timeSinceStartOfRoute;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) unsigned long long stage;
@property (nonatomic, readonly) double distanceToStartOfManeuver;
@property (nonatomic, readonly) MNLocation *location;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, readonly) NSString *primaryDescription;
@property (nonatomic, readonly) NSString *secondaryDescription;
@property (copy, nonatomic) NSDictionary *eventData;

- (id)description;
- (id)initWithTime:(double)arg1 stepIndex:(unsigned long long)arg2 stage:(unsigned long long)arg3 distance:(double)arg4 location:(id)arg5 eventType:(unsigned long long)arg6 eventData:(id)arg7;
- (id)instructionsFromSignDescription:(id)arg1;
- (id)stringByInstructions:(id)arg1;
- (void)_calculateDescription;
- (id)shieldToText:(id)arg1;

@end
