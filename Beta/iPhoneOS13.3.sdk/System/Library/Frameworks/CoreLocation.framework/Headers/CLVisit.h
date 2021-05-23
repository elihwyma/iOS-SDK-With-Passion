/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CLVisit : NSObject

{
    NSDate *_arrivalDate;
    NSDate *_departureDate;
    double _horizontalAccuracy;
    NSDate *_detectionDate;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic, readonly) _Bool hasArrivalDate;
@property (nonatomic, readonly) _Bool hasDepartureDate;
@property (copy, nonatomic, readonly) NSDate *detectionDate;
@property (copy, nonatomic, readonly) NSDate *arrivalDate;
@property (copy, nonatomic, readonly) NSDate *departureDate;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) double horizontalAccuracy;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 horizontalAccuracy:(double)arg2 arrivalDate:(id)arg3 departureDate:(id)arg4 detectionDate:(id)arg5;

@end
