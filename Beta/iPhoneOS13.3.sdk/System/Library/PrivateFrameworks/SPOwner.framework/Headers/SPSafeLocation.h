/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSUUID, SPLocationAddress;

@interface SPSafeLocation : NSObject

{
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
    SPLocationAddress *_address;
    NSUUID *_identifier;
}

@property (copy, nonatomic) NSUUID *identifier;
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
@property (copy, nonatomic) SPLocationAddress *address;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11 identifier:(id)arg12;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 horizontalAcuracy:(double)arg3 altitude:(double)arg4 verticalAccuracy:(double)arg5 speed:(double)arg6 speedAccuracy:(double)arg7 course:(double)arg8 courseAccuracy:(double)arg9 floorLevel:(id)arg10 address:(id)arg11;

@end
