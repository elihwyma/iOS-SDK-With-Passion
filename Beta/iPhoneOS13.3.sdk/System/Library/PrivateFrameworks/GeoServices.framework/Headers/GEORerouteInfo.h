/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

#import <GeoServices/Swift-Protocol.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface GEORerouteInfo : NSObject <Swift>

{
    double _distancePenalty;
    double _throttledReroutesPenalty;
    double _penalty;
    NSDate *_time;
    double _distanceFromDestination;
}

@property (nonatomic, readonly) double penalty;
@property (retain, nonatomic) NSDate *time;
@property (nonatomic) double distanceFromDestination;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithCurrentTime:(id)arg1 location:(id)arg2 isMostRecentReroute:(_Bool)arg3 destinationCoordinate:(CDStruct_c3b9c2ee)arg4 numThrottledReroutes:(unsigned long long)arg5;

@end
