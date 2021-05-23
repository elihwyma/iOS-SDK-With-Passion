/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <AccessibilityUIUtilities/AXUISettingsBaseListController.h>

@class NSArray;

@interface AXUISettingsTouchAccommodationsAllowSwipeGesturesController : AXUISettingsBaseListController

{
    _Bool _touchAccommodationsAllowsSwipeGesturesToBypass;
    double _touchAccommodationsSwipeGestureMinimumDistance;
    NSArray *_minimumDistanceSpecifiers;
}

@property (retain, nonatomic) NSArray *minimumDistanceSpecifiers;
@property (nonatomic) _Bool touchAccommodationsAllowsSwipeGesturesToBypass;
@property (nonatomic) double touchAccommodationsSwipeGestureMinimumDistance;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)_setAllowsSwipesToBypass:(id)arg1 specifier:(id)arg2;
- (id)_allowsSwipesToBypass:(id)arg1;
- (id)_minimumDistanceSpecifiers;
- (id)_specifierWithName:(id)arg1 minimumDistance:(double)arg2;
- (_Bool)_shouldShowSwipeMinimumDistanceSpecifier;

@end
