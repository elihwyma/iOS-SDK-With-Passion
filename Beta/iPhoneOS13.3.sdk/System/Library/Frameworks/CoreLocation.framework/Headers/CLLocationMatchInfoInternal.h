/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CLLocationMatchInfoInternal : NSObject

{
    long long fMatchQuality;
    struct CLLocationCoordinate2D fMatchCoordinate;
    double fMatchCourse;
    int fMatchFormOfWay;
    int fMatchRoadClass;
    _Bool fMatchShifted;
    NSData *fMatchDataArray;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6 matchDataArray:(id)arg7;

@end
