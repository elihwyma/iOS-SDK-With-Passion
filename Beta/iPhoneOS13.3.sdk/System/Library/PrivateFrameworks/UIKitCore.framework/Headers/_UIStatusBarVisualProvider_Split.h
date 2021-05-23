/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>

@class NSDictionary, NSLayoutConstraint, NSString, NSTimer, UILayoutGuide, _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemPlacementGroup;

@interface _UIStatusBarVisualProvider_Split : _UIStatusBarVisualProvider_Phone

{
    NSDictionary *_orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement *_serviceNamePlacement;
    _UIStatusBarDisplayItemPlacement *_dualServiceNamePlacement;
    _UIStatusBarDisplayItemPlacementGroup *_lowerWifiGroup;
    _UIStatusBarDisplayItemPlacement *_batteryChargingPlacement;
    UILayoutGuide *_cutoutLayoutGuide;
    UILayoutGuide *_mainRegionsLayoutGuide;
    NSLayoutConstraint *_leadingBottomConstraint;
    NSLayoutConstraint *_expandedLeadingLowerTopConstraint;
    NSLayoutConstraint *_expandedTrailingBottomConstraint;
    NSTimer *_systemUpdatesTimer;
    NSTimer *_batteryExpansionTimer;
    NSTimer *_airplaneModeIgnoreChangesTimer;
}

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *serviceNamePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *dualServiceNamePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *lowerWifiGroup;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement;
@property (retain, nonatomic) UILayoutGuide *cutoutLayoutGuide;
@property (retain, nonatomic) UILayoutGuide *mainRegionsLayoutGuide;
@property (retain, nonatomic) NSLayoutConstraint *leadingBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *expandedLeadingLowerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *expandedTrailingBottomConstraint;
@property (retain, nonatomic) NSTimer *systemUpdatesTimer;
@property (retain, nonatomic) NSTimer *batteryExpansionTimer;
@property (retain, nonatomic) NSTimer *airplaneModeIgnoreChangesTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)height;
+ (double)cornerRadius;
+ (struct CGSize)pillSize;
+ (id)smallFont;
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
+ (Class)visualProviderSubclassForScreen:(id)arg1;
+ (id)normalFont;
+ (id)expandedFont;
+ (struct CGSize)smallPillSize;
+ (id)pillFont;
+ (struct NSDirectionalEdgeInsets)expandedEdgeInsets;
+ (id)pillSmallFont;
+ (double)referenceWidth;
+ (double)referenceScale;
+ (double)leadingPillInset;
+ (double)leadingCenteringEdgeInset;
+ (double)baseIconScale;
+ (struct CGSize)notchSize;
+ (double)baselineBottomInset;
+ (struct NSDirectionalEdgeInsets)_edgeInsetsFromCenteringEdgeInset:(double)arg1 trailing:(_Bool)arg2;
+ (double)trailingCenteringEdgeInset;
+ (struct NSDirectionalEdgeInsets)leadingEdgeInsets;
+ (double)leadingItemSpacing;
+ (double)leadingPillSpacing;
+ (double)pillCenteringEdgeInset;
+ (struct NSDirectionalEdgeInsets)trailingEdgeInsets;
+ (id)emphasizedFont;
+ (double)lowerExpandedBaselineOffset;
+ (double)bottomLeadingWidth;
+ (double)leadingSmallPillSpacing;
+ (double)condensedPointSizeForCellularType:(long long)arg1 defaultPointSize:(double)arg2 baselineOffset:(double *)arg3;
+ (double)bottomLeadingTopOffset;
+ (double)notchBottomCornerRadius;
+ (double)notchTopCornerRadius;

- (void)setExpanded:(_Bool)arg1;
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;
- (id)setupInContainerView:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (id)willUpdateWithData:(id)arg1;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (void)dataUpdated:(id)arg1;
- (void)statusBarRegionsUpdated;
- (void)itemCreated:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (_Bool)canFixupDisplayItemAttributes;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(long long)arg2;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (id)animationForBackgroundActivityPillWithDuration:(double)arg1 scale:(double)arg2;
- (void)_updateDataForBatteryCharging:(id)arg1;
- (void)_updateDataForSystemUpdates:(id)arg1;
- (void)_updateLowerRegionsWithData:(id)arg1;
- (void)_updateSystemNavigationWithData:(id)arg1;
- (void)_updateExpandedTrailingRegion;
- (id)_additionAnimationForBatteryCharging;
- (_Bool)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1;
- (id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1;
- (id)_removalAnimationForBatteryCharging;
- (void)updateDataForService:(id)arg1;
- (void)updateDataForSystemNavigation:(id)arg1;
- (double)airplaneObstacleFadeOutDuration;
- (id)animationForAirplaneMode;
- (void)_collapseBattery;
- (void)_stopBatteryCollapseTimer;
- (struct CGAffineTransform)_collapseChargingBoltTransformForDisplayItem:(id)arg1;
- (struct CGAffineTransform)_expandedChargingBoltTransformForDisplayItem:(id)arg1;
- (void)_resetBattery;
- (void)_disableSystemUpdates;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;

@end
