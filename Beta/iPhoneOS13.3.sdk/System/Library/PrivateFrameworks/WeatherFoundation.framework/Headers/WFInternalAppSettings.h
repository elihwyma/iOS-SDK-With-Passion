/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface WFInternalAppSettings : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *apiVersion;
@property (nonatomic, readonly) NSSet *aqiEnabledCountryCodes;
@property (nonatomic, readonly) NSString *apiVersionFallback;
@property (nonatomic, readonly) unsigned long long networkFailedAttemptsLimit;
@property (nonatomic, readonly) unsigned long long networkSwitchExpirationTimeInSeconds;
@property (nonatomic, readonly) unsigned long long locationNumDecimalsOfPrecision;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
