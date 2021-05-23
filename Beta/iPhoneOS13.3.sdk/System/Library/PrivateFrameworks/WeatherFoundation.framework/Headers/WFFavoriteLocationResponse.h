/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFResponse.h>

@class NSArray;

@interface WFFavoriteLocationResponse : WFResponse

{
    NSArray *_favoriteLocations;
}

@property (nonatomic, readonly) NSArray *favoriteLocations;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 favorites:(id)arg2;

@end
