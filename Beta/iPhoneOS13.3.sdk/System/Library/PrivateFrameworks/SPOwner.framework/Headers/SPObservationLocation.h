/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber;

@interface SPObservationLocation : NSObject

{
    NSDate *_timestamp;
    double _latitude;
    double _longitude;
    double _horizontalAccuracy;
    double _altitude;
    double _verticalAccuracy;
    double _speed;
    double _speedAccuracy;
    double _course;
    double _courseAccuracy;
    NSNumber *_floorLevel;
}

@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) double altitude;
@property (nonatomic) double verticalAccuracy;
@property (nonatomic) double speed;
@property (nonatomic) double speedAccuracy;
@property (nonatomic) double course;
@property (nonatomic) double courseAccuracy;
@property (copy, nonatomic) NSNumber *floorLevel;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11;
- (id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAcuracy:(double)arg4 altitude:(double)arg5 verticalAccuracy:(double)arg6 speed:(double)arg7 speedAccuracy:(double)arg8 course:(double)arg9 courseAccuracy:(double)arg10 floorLevel:(id)arg11;

@end
