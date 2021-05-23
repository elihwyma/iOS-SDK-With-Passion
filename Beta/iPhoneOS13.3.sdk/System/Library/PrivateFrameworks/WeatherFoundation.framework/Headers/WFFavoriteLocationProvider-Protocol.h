/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/Swift-Protocol.h>

@protocol WFFavoriteLocationProviderDelegate;

@protocol WFFavoriteLocationProvider <Swift>

@property (weak, nonatomic) id <WFFavoriteLocationProviderDelegate> delegate;

- (unsigned short)setLocations: /* Error: Ran out of types for this method. */;
- (unsigned short)locations;
- (unsigned short)addLocation: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithDelegate:persistence: /* Error: Ran out of types for this method. */;
- (unsigned short)removeLocation: /* Error: Ran out of types for this method. */;

@end
