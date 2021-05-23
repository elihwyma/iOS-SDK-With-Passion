/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface NSObject (AXUISettingsWelcomeControllerCommon)

@property (retain, nonatomic, setter=ax_setBuddyObservedTableViews:) NSMutableArray *ax_buddyObservedTableViews;
@property (retain, nonatomic, setter=ax_setBuddyDynamicHeightConstraints:) NSMutableArray *ax_buddyDynamicHeightConstraints;
@property (nonatomic, readonly) NSString *_atvaccessibilityITMLAccessibilityContent;

- (id)_atvaccessibilityClosestElementAbove:(id)arg1;
- (id)_atvAccessibilityITMLAccessibilityContentWithElement:(id)arg1;
- (id)_accessibilityBadgeTextForTextElement:(id)arg1;
- (id)_atvaccessibilityGeometricNearestHeader;
- (id)_atvaccessibilityAncestorHasAXID:(id)arg1;
- (id)_atvaccessibilityITMLClass;

@end
