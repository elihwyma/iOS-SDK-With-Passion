/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class SPAdvertisement, SPEstimatedLocation;

@interface SPBeaconPayload : NSObject

{
    SPAdvertisement *_advertisement;
    SPEstimatedLocation *_location;
    long long _observationValue;
}

@property (retain, nonatomic) SPAdvertisement *advertisement;
@property (copy, nonatomic) SPEstimatedLocation *location;
@property (nonatomic) long long observationValue;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdvertisement:(id)arg1 location:(id)arg2;

@end
