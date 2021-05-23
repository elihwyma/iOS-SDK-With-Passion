/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSLocale.h>

@interface NSLocale (MNExtras)

+ (void)_navigation_overrideDistanceUnit:(long long)arg1;
+ (id)_localeOverridesForLocaleWithCountryCode:(id)arg1;
+ (void)_navigation_setNeedsUpdateOverrideDistanceUnit;
+ (void)set_navigation_overrideDistanceUnitProvider:(id)arg1;
+ (id)_navigation_overrideDistanceUnitProvider;

- (_Bool)_navigation_distanceUsesMetricSystem;
- (_Bool)_navigation_useYardsForShortDistances;
- (_Bool)_navigation_distanceUsesMetricSystemIgnoringUserPreference:(_Bool)arg1;
- (id)_navigation_objectForKey:(id)arg1;

@end
