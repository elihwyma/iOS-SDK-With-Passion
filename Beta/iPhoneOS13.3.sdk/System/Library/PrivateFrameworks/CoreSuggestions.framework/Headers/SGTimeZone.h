/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGTimeZone : NSObject

+ (id)sharedDetector;
+ (id)timeZoneForAddress:(id)arg1;
+ (id)countryCodeForAddress:(id)arg1;
+ (id)timeZoneNameForAddress:(id)arg1 withCountryCode:(id)arg2;

@end
