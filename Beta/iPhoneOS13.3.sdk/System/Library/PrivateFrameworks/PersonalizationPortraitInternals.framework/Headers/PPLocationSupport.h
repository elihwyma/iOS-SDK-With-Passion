/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPLocationSupport : NSObject

+ (id)streetAddressOfLocation:(id)arg1;
+ (id)fullAddressOfLocation:(id)arg1;
+ (id)mapTitleForLocation:(id)arg1;
+ (_Bool)fuzzyMatchingLocations:(id)arg1 and:(id)arg2;
+ (id)locationFromThoroughfare:(id)arg1 subThoroughfare:(id)arg2 locality:(id)arg3 subLocality:(id)arg4 administrativeArea:(id)arg5 postalCode:(id)arg6 category:(unsigned short)arg7;

@end
