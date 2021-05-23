/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, _UIStatusBar, _UIStatusBarAnimation, _UIStatusBarDisplayItemPlacementGroup, _UIStatusBarDisplayItemPlacementNetworkGroup;

@interface _UIStatusBarVisualProvider_iOS : NSObject

{
    _Bool _expanded;
    _UIStatusBar *_statusBar;
    _UIStatusBarDisplayItemPlacementNetworkGroup *_expandedNetworkGroup;
    NSArray *_expandedCellularPlacementsAffectedByAirplaneMode;
    NSArray *_expandedLeadingPlacements;
    NSArray *_expandedTrailingPlacements;
    _UIStatusBarDisplayItemPlacementGroup *_secondaryWifiGroup;
}

@property (retain, nonatomic) _UIStatusBarDisplayItemPlacementGroup *secondaryWifiGroup;
@property (nonatomic) _Bool expanded;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacementNetworkGroup *expandedNetworkGroup;
@property (nonatomic, readonly) NSArray *expandedCellularPlacementsAffectedByAirplaneMode;
@property (nonatomic, readonly) NSArray *expandedLeadingPlacements;
@property (nonatomic, readonly) NSArray *expandedTrailingPlacements;
@property (nonatomic, readonly) _UIStatusBarAnimation *animationForAirplaneMode;
@property (nonatomic, readonly) double airplaneObstacleFadeOutDuration;
@property (nonatomic, readonly) double airplaneObstacleFadeInDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (nonatomic, readonly) _Bool canFixupDisplayItemAttributes;

+ (double)height;
+ (double)cornerRadius;
+ (double)itemSpacing;
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
+ (Class)visualProviderSubclassForScreen:(id)arg1;
+ (double)expandedItemSpacing;
+ (double)regionSpacing;
+ (_Bool)hasCellularCapability;
+ (double)bluetoothPaddingInset;
+ (_Bool)wantsExpandedLeadingPlacements;

- (id)init;
- (id)setupInContainerView:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
- (id)willUpdateWithData:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(long long)arg2;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;
- (void)updateDataForService:(id)arg1;
- (void)updateDataForSystemNavigation:(id)arg1;
- (id)defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)_createExpandedPlacements;
- (void)_applyToAppearingRegions:(_Bool)arg1 block:(CDUnknownBlockType)arg2;

@end
