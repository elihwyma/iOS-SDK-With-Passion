/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, SPUnauthorizedTrackingAdvertisement;

@interface SPUnauthorizedTrackingObservation : NSObject

{
    SPUnauthorizedTrackingAdvertisement *_trackingIdentifier;
    NSArray *_observedLocations;
    NSDate *_observedAt;
}

@property (retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier;
@property (copy, nonatomic) NSArray *observedLocations;
@property (copy, nonatomic) NSDate *observedAt;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2;

@end
