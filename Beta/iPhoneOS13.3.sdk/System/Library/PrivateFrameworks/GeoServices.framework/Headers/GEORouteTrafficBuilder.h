/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableData;

@interface GEORouteTrafficBuilder : NSObject

{
    NSMutableData *_trafficColors;
    NSMutableData *_trafficOffsets;
    unsigned int _trafficDistance;
}

- (id)init;
- (id)trafficColors;
- (void)addTrafficFromRoute:(id)arg1 withStepRange:(struct _NSRange)arg2;
- (void)copyTrafficToRoute:(id)arg1;
- (void)addTrafficFromRoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3;
- (void)addTrafficFromETARoute:(id)arg1;
- (id)trafficOffsets;
- (void)_removeDuplicateTraffic;

@end
