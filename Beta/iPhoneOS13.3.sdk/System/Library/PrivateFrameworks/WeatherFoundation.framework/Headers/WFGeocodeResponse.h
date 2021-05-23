/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFResponse.h>

@class WFLocation;

@interface WFGeocodeResponse : WFResponse

{
    WFLocation *_location;
}

@property (readonly) WFLocation *location;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 location:(id)arg2;

@end
