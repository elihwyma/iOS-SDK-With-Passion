/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSDate, NSSet, NSString;

@interface WFRemoteAppSettings : NSObject

{
    NSString *_apiVersion;
    NSString *_apiVersionFallback;
    NSSet *_aqiEnabledCountryCodes;
    unsigned long long _networkFailedAttemptsLimit;
    unsigned long long _networkSwitchExpirationTimeInSeconds;
    unsigned long long _locationNumDecimalsOfPrecision;
    long long _appConfigRefreshRate;
    NSDate *_lastModificationDate;
    NSString *_bundleID;
    NSString *_countryCode;
    unsigned long long _apiConfigModdedHash;
    unsigned long long _apiConfigMinRange;
    unsigned long long _apiConfigMaxRange;
}

@property (nonatomic, readonly) long long appConfigRefreshRate;
@property (nonatomic, readonly) NSDate *lastModificationDate;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) unsigned long long apiConfigModdedHash;
@property (nonatomic, readonly) unsigned long long apiConfigMinRange;
@property (nonatomic, readonly) unsigned long long apiConfigMaxRange;
@property (nonatomic, readonly) _Bool isExpired;
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

+ (_Bool)useInternalBundleID;
+ (_Bool)wfSeedBuild;
+ (id)bundleIDsListFor:(id)arg1 useInternalBundleID:(_Bool)arg2 useSeedBundleID:(_Bool)arg3;
+ (id)configurationWithData:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3 userID:(id)arg4 error:(id *)arg5;
+ (_Bool)wfInternalBuild;
+ (id)configurationWithData:(id)arg1 userID:(id)arg2 error:(id *)arg3;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConfigDictionary:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3 userID:(id)arg4;
- (id)getEnvironmentSpecificConfigDictionaryFromDictionary:(id)arg1 bundleIDs:(id)arg2 country:(id)arg3;
- (id)getAPIVersionFromDictionary:(id)arg1 userID:(id)arg2;
- (id)getSpecificConfigFromConfigs:(id)arg1 configSpecifiers:(id)arg2 specifierKey:(id)arg3;
- (_Bool)shouldUseAPIVersionFromDictionary:(id)arg1 userID:(id)arg2;
- (_Bool)aqiEnabledForCountryCode:(id)arg1;

@end
