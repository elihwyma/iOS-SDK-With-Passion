/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class MKMapItem, NSArray, NSDate;

@interface MKETAResponse : NSObject

{
    MKMapItem *_source;
    MKMapItem *_destination;
    double _expectedTravelTime;
    double _distance;
    NSArray *_sortedETAs;
    unsigned long long _transportType;
    NSDate *_expectedArrivalDate;
    NSDate *_expectedDepartureDate;
}

@property (retain, nonatomic) NSDate *expectedArrivalDate;
@property (retain, nonatomic) NSDate *expectedDepartureDate;
@property (nonatomic, readonly, getter=_sortedETAs) NSArray *sortedETAs;
@property (nonatomic, readonly) MKMapItem *source;
@property (nonatomic, readonly) MKMapItem *destination;
@property (nonatomic, readonly) double expectedTravelTime;
@property (nonatomic, readonly) double distance;
@property (nonatomic, readonly) unsigned long long transportType;

- (unsigned long long)_transportType:(int)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 expectedTravelTime:(double)arg3 distance:(double)arg4 sortedETAs:(id)arg5;

@end
