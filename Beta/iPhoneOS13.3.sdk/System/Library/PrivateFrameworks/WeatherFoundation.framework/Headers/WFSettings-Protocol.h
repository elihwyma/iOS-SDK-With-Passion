/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/Swift-Protocol.h>

@class NSSet, NSString;

@protocol WFSettings <Swift>

@property (nonatomic, readonly) NSString *apiVersion;
@property (nonatomic, readonly) NSSet *aqiEnabledCountryCodes;
@property (nonatomic, readonly) NSString *apiVersionFallback;
@property (nonatomic, readonly) unsigned long long networkFailedAttemptsLimit;
@property (nonatomic, readonly) unsigned long long networkSwitchExpirationTimeInSeconds;
@property (nonatomic, readonly) unsigned long long locationNumDecimalsOfPrecision;

@end
