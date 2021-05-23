/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedWaypoint, NSString;

@interface MNTraceCommuteDestinationRow : NSObject

{
    unsigned long long _destinationID;
    NSString *_name;
    GEOComposedWaypoint *_waypoint;
}

@property (nonatomic) unsigned long long destinationID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) GEOComposedWaypoint *waypoint;

@end
