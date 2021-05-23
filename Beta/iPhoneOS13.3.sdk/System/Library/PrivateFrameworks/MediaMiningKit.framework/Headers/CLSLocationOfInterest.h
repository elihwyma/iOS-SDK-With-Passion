/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLCircularRegion, CLLocation, CLSLitePlacemark, NSArray, NSMutableArray, NSUUID;

@interface CLSLocationOfInterest : NSObject

{
    NSMutableArray *_visits;
    NSUUID *_identifier;
    long long _type;
    CLLocation *_location;
    CLSLitePlacemark *_placemark;
    CLCircularRegion *_placemarkRegion;
    double _radius;
    unsigned long long _businessItemMuid;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) CLLocation *location;
@property (nonatomic, readonly) CLCircularRegion *placemarkRegion;
@property (nonatomic, readonly) CLSLitePlacemark *placemark;
@property (nonatomic, readonly) unsigned long long businessItemMuid;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) NSArray *visits;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addVisit:(id)arg1;
- (void)removeVisit:(id)arg1;
- (id)initWithIdentifier:(id)arg1 locationOfInterestType:(long long)arg2 location:(id)arg3 placemarkRegion:(id)arg4 businessItemMuid:(unsigned long long)arg5 radius:(double)arg6;
- (double)placemarkLocationDistanceFromLocation:(id)arg1;

@end
