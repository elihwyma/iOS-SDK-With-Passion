/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface MNTraceRouteSelectionsRow : NSObject

{
    double _startTimestamp;
    double _endTimestamp;
    NSData *_routeID;
    unsigned long long _selectedRouteIndex;
}

@property (nonatomic) double startTimestamp;
@property (nonatomic) double endTimestamp;
@property (copy, nonatomic) NSData *routeID;
@property (nonatomic) unsigned long long selectedRouteIndex;

@end
