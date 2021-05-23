/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@interface _SFPerSitePreferencesUtilities : NSObject

+ (_Bool)isBinaryPreferenceValueOn:(id)arg1 preference:(id)arg2 preferenceManager:(id)arg3;
+ (id)preferenceValueForBoolValue:(_Bool)arg1 preference:(id)arg2 preferenceManager:(id)arg3;
+ (id)preferenceValueForPSSpecifierValue:(id)arg1 specifier:(id)arg2 preference:(id)arg3 preferenceManager:(id)arg4;
+ (id)specifierValueForSpecifier:(id)arg1 preferenceValue:(id)arg2 preference:(id)arg3 preferenceManager:(id)arg4;

@end
