/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface CLLocationMatchInfo : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) long long matchQuality;
@property (nonatomic, readonly) struct CLLocationCoordinate2D matchCoordinate;
@property (nonatomic, readonly) double matchCourse;
@property (nonatomic, readonly) int matchFormOfWay;
@property (nonatomic, readonly) int matchRoadClass;
@property (nonatomic, readonly, getter=isMatchShifted) _Bool matchShifted;
@property (copy, nonatomic, readonly) NSData *matchDataArray;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6 matchDataArray:(id)arg7;
- (id)initWithMatchQuality:(long long)arg1 matchCoordinate:(struct CLLocationCoordinate2D)arg2 matchCourse:(double)arg3 matchFormOfWay:(int)arg4 matchRoadClass:(int)arg5 matchShifted:(_Bool)arg6;

@end
