/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXPrivacyPreservingLocationHash : NSObject

+ (long long)privacyPreservingGeohashForLocation:(id)arg1 locationEnabled:(_Bool)arg2;
+ (long long)privacyPreservingCoarseGeohashForLocation:(id)arg1 locationEnabled:(_Bool)arg2;
+ (long long)privacyPreservingGeohashForLocation:(id)arg1 locationHashLevel:(int)arg2 locationEnabled:(_Bool)arg3;
+ (long long)geohashCollidesWithKnownLocationTypeForGeohash:(long long)arg1;
+ (long long)preservePrivacyForGeoHash:(long long)arg1;
+ (id)readDeviceSpecificSalt;
+ (id)setSaltToUserDefaults:(id)arg1 scheme:(id)arg2;
+ (id)randomData;
+ (long long)sha256HashForGeohash:(long long)arg1 salt:(id)arg2;
+ (long long)dropLastTenBitsOfSHA256Hash:(long long)arg1;

@end
