/*
 Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSString, NSUUID;

@interface SRVisit : NSObject

{
    double _distanceFromHome;
    NSDateInterval *_arrivalDateInterval;
    NSDateInterval *_departureDateInterval;
    long long _locationCategory;
    NSUUID *_identifier;
}

@property (copy, readonly) NSString *label;
@property (readonly) double distanceFromHome;
@property (readonly) NSDateInterval *arrivalDateInterval;
@property (readonly) NSDateInterval *departureDateInterval;
@property (readonly) long long locationCategory;
@property (readonly) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)binarySampleRepresentation;
- (id)sr_dictionaryRepresentation;
- (id)initWithDistanceFromHome:(double)arg1 arrive:(id)arg2 depart:(id)arg3 category:(long long)arg4 uuid:(id)arg5;

@end
