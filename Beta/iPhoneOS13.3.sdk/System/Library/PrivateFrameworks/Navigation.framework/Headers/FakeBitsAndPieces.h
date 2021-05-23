/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedWaypoint, GEOLocation, MNCommuteDestinationSuggestion, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface FakeBitsAndPieces : NSObject

{
    GEOLocation *_location;
    NSString *_name;
    double _weight;
    unsigned long long _type;
    NSDate *_expires;
    NSDate *_startDate;
    NSDate *_endDate;
    GEOComposedWaypoint *_waypoint;
}

@property (retain, nonatomic) GEOLocation *location;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double weight;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *expires;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) GEOComposedWaypoint *waypoint;
@property (readonly) MNCommuteDestinationSuggestion *fakeSuggestion;

@end
