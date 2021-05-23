/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@interface PPConnectionsAddressFormatter : NSObject

+ (id)addressComponentValueWithLocationField:(unsigned char)arg1 forAddress:(id)arg2 duetEvent:(id)arg3;
+ (_Bool)isValidAddressDictionary:(id)arg1;
+ (id)formattedStreetNameWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2;
+ (id)formattedCityAndStateWithCity:(id)arg1 state:(id)arg2;
+ (id)singleLineFormattedAddressWithPostalAddress:(id)arg1 shortStyle:(_Bool)arg2;
+ (id)postalAddressFromDuetEvent:(id)arg1;
+ (id)postalAddressFromAttributeSet:(id)arg1;
+ (id)formattedAddressWithLocationField:(unsigned char)arg1 address:(id)arg2 duetEvent:(id)arg3 shortStyle:(_Bool)arg4;
+ (id)addressDictionaryFromAttributeSet:(id)arg1;

@end
