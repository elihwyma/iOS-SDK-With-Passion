//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLocale.h>

@interface NSLocale (MNExtras)
+ (void)_navigation_setNeedsUpdateOverrideDistanceUnit;
+ (id)_navigation_overrideDistanceUnitProvider;
+ (void)set_navigation_overrideDistanceUnitProvider:(id)arg1;
+ (void)_navigation_overrideDistanceUnit:(long long)arg1;
+ (id)_localeOverridesForLocaleWithCountryCode:(id)arg1;
- (BOOL)_navigation_useYardsForShortDistances;
- (BOOL)_navigation_distanceUsesMetricSystemIgnoringUserPreference:(BOOL)arg1;
- (BOOL)_navigation_distanceUsesMetricSystem;
- (id)_navigation_objectForKey:(id)arg1;
@end

