/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarVisualProvider_iOS.h>

@class NSDictionary, NSLayoutConstraint, _UIStatusBarDisplayItemPlacement;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Pad : _UIStatusBarVisualProvider_iOS

{
    NSDictionary *_orderedDisplayItemPlacements;
    NSLayoutConstraint *_trailingRegionLeadingAnchorConstraint;
    NSLayoutConstraint *_leadingRegionTrailingAnchorConstraint;
    _UIStatusBarDisplayItemPlacement *_datePlacement;
    _UIStatusBarDisplayItemPlacement *_timePlacement;
}

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (retain, nonatomic) NSLayoutConstraint *trailingRegionLeadingAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingRegionTrailingAnchorConstraint;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *datePlacement;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *timePlacement;

+ (double)height;
+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets)edgeInsets;
+ (struct CGSize)pillSize;
+ (Class)visualProviderSubclassForScreen:(id)arg1;
+ (double)regionSpacing;
+ (id)normalFont;
+ (id)expandedFont;
+ (struct CGSize)smallPillSize;
+ (id)pillFont;
+ (struct NSDirectionalEdgeInsets)expandedEdgeInsets;
+ (id)pillSmallFont;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)setupInContainerView:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;
- (void)itemCreated:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (_Bool)_updateDateAndTimePlacements;
- (void)_updateConstraintsForAvoidanceFrame:(struct CGRect)arg1;
- (void)_dateTimePreferencesUpdated;
- (double)airplaneTravelOffsetInProposedPartWithIdentifier:(id *)arg1 animationType:(long long)arg2;
- (double)airplaneSpeedForAnimationType:(long long)arg1;
- (double)airplaneShouldFadeForAnimationType:(long long)arg1;

@end
