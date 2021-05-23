/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class CLFloor, CLLocationMatchInfo, NSDate, NSString, _CLLocationGroundAltitude;

@interface CLLocation : NSObject

{
    id _internal;
}

@property (nonatomic, readonly) CLLocationMatchInfo *matchInfo;
@property (nonatomic, readonly) _CLLocationGroundAltitude *_groundAltitude;
@property (nonatomic, readonly) CDStruct_4d1fbe9a clientLocation;
@property (nonatomic, readonly) NSString *iso6709Notation;
@property (nonatomic, readonly) int type;
@property (nonatomic) int referenceFrame;
@property (nonatomic, readonly) struct CLLocationCoordinate2D rawCoordinate;
@property (nonatomic, readonly) double rawCourse;
@property (nonatomic, readonly) unsigned int integrity;
@property (nonatomic, readonly) double trustedTimestamp;
@property (nonatomic, readonly) double speedAccuracy;
@property (nonatomic, readonly) struct CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) double horizontalAccuracy;
@property (nonatomic, readonly) double verticalAccuracy;
@property (nonatomic, readonly) double course;
@property (nonatomic, readonly) double speed;
@property (copy, nonatomic, readonly) NSDate *timestamp;
@property (copy, nonatomic, readonly) CLFloor *floor;

+ (_Bool)supportsSecureCoding;
+ (id)locationByReductivelyFilteringLocations:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)distanceFromLocation:(id)arg1;
- (id)shortDescription;
- (id)initWithClientLocation:(CDStruct_4d1fbe9a)arg1;
- (void)unmatch;
- (id)initWithClientLocation:(CDStruct_4d1fbe9a)arg1 clientLocationPrivate:(CDStruct_f185aced)arg2;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 timestamp:(id)arg5;
- (double)getDistanceFrom:(id)arg1;
- (id)initWithClientLocation:(CDStruct_4d1fbe9a)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3 groundAltitude:(id)arg4;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)_initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7 floor:(int)arg8;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 altitude:(double)arg2 horizontalAccuracy:(double)arg3 verticalAccuracy:(double)arg4 course:(double)arg5 speed:(double)arg6 timestamp:(id)arg7;
- (id)jsonObject;
- (int)signalEnvironmentType;
- (id)snapToResolution:(double)arg1;
- (id)propagateLocationToTime:(double)arg1;
- (id)initWithClientLocation:(CDStruct_4d1fbe9a)arg1 matchInfo:(id)arg2 trustedTimestamp:(double)arg3;
- (id)initWithClientLocation:(CDStruct_4d1fbe9a)arg1 matchInfo:(id)arg2;

@end
