/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPDataDetectors : NSObject

+ (void)scanString:(id)arg1 inRange:(CDStruct_912cb5d2)arg2 withScanner:(struct __DDScanner *)arg3 options:(long long)arg4 block:(CDUnknownBlockType)arg5;
+ (void)addAddressComponentsInResult:(struct __DDResult *)arg1 toDictionary:(id)arg2;
+ (id)addressComponentsFromString:(id)arg1 extractedAddress:(id *)arg2;
+ (id)addressComponentsFromString:(id)arg1 extractedAddress:(id *)arg2 locale:(id)arg3;
+ (_Bool)isValidDataDetectorsMatch:(struct __DDResult *)arg1 addressComponents:(id *)arg2;
+ (_Bool)_components:(id)arg1 haveHongKongAtKey:(id)arg2;
+ (_Bool)_componentsHaveStreetAndCityOrZip:(id)arg1;

@end
