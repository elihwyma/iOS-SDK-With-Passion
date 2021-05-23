/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID, SPObservationLocation;

@interface SPBeaconObservation : NSObject

{
    NSUUID *_beaconIdentifier;
    long long _type;
    NSDate *_date;
    SPObservationLocation *_location;
}

@property (copy, nonatomic, readonly) NSUUID *beaconIdentifier;
@property (nonatomic, readonly) long long type;
@property (copy, nonatomic, readonly) NSDate *date;
@property (copy, nonatomic, readonly) SPObservationLocation *location;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBeaconIdentifier:(id)arg1 type:(long long)arg2 date:(id)arg3 location:(id)arg4;

@end
