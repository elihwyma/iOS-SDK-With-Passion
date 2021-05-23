/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class _CLLSLLocationCoordinate;

@interface _CLLSLLocation : NSObject

{
    _CLLSLLocationCoordinate *_coordinate;
    double _altitude;
    double _timestamp;
}

@property (copy, nonatomic) _CLLSLLocationCoordinate *coordinate;
@property (nonatomic) double altitude;
@property (nonatomic) double timestamp;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithCoordinate:(id)arg1 altitude:(double)arg2 timetamp:(double)arg3;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 altitude:(double)arg3 timetamp:(double)arg4;

@end
