/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@interface _MKRouteETA : NSObject

{
    int _status;
    double _distance;
    unsigned long long _transportType;
    double _travelTime;
    double _responseTime;
}

@property (nonatomic) int status;
@property (nonatomic) double distance;
@property (nonatomic) double travelTime;
@property (nonatomic) unsigned long long transportType;
@property (nonatomic, readonly) double responseTime;

+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3 status:(int)arg4;
+ (id)routeETAWithDistance:(double)arg1 travelTime:(double)arg2 transportType:(unsigned long long)arg3;

@end
