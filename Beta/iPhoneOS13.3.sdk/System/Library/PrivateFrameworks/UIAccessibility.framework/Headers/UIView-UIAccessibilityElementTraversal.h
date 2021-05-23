/*
 Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
 */

#import <UIKit/UIView.h>

@interface UIView (UIAccessibilityElementTraversal)

+ (id)_subviewsReplacedByModalViewSubviewsIfNecessary:(id)arg1;
+ (id)_accessibilityElementsAndContainersDescendingFromViews:(id)arg1 options:(id)arg2 sorted:(_Bool)arg3;
+ (id)_accessibilityTitleForSystemTag:(long long)arg1;

- (struct CGPoint)accessibilityConvertPointFromSceneReferenceCoordinates:(struct CGPoint)arg1;
- (struct CGRect)accessibilityConvertRectToSceneReferenceCoordinates:(struct CGRect)arg1;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;
- (_Bool)_accessibilityShouldUseSupplementaryViews;
- (_Bool)_accessibilityShouldBeProcessed:(id)arg1;
- (_Bool)_accessibilityViewIsVisible;
- (id)_accessibilitySubviews;
- (_Bool)_accessibilityShouldBeAddedToViewChildrenWithOptions:(id)arg1;
- (void)_addAccessibilityElementsAndOrderedContainersWithOptions:(id)arg1 toCollection:(id)arg2;
- (id)_accessibilitySubviewsForGettingElementsWithOptions:(id)arg1;
- (_Bool)_accessibilityIsSortingInUpperFrame;
- (void)_accessibilitySetIsSortingInUpperFrame:(_Bool)arg1;
- (_Bool)_accessibilityOverridesInvalidFrames;
- (id)_accessibleSubviews:(int)arg1;
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1;
- (_Bool)_accessibilityViewIsVisibleIgnoringAXOverrides:(_Bool)arg1 stoppingBeforeContainer:(id)arg2;
- (struct CGSize)_accessibilityFrameExpansion;
- (void)_accessibilitySetFrameExpansion:(struct CGSize)arg1;
- (_Bool)_accessibilityViewIsActive;
- (void)_accessibilitySetViewIsVisible:(_Bool)arg1;
- (id)_accessibleSubviews;
- (void)_accessibilitySetOverridesInvalidFrames:(_Bool)arg1;
- (_Bool)_accessibilityAllowsSiblingsWhenOvergrown;
- (void)_accessibilitySetAllowsSiblingsWhenOvergrown:(_Bool)arg1;
- (id)_accessibilityComputedLabelForNavigationBarWithAssociatedBarButtonItem:(id)arg1;

@end
