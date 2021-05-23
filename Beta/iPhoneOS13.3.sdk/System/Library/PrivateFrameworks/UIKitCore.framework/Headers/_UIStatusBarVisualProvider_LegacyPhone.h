/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarVisualProvider_Phone.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_LegacyPhone : _UIStatusBarVisualProvider_Phone

{
    NSDictionary *_orderedDisplayItemPlacements;
}

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)height;
+ (double)baselineOffset;
+ (struct NSDirectionalEdgeInsets)edgeInsets;
+ (struct CGSize)pillSize;
+ (struct CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
+ (double)expandedBaselineOffset;
+ (double)regionSpacing;
+ (id)normalFont;
+ (id)expandedFont;
+ (struct CGSize)smallPillSize;
+ (id)timeFont;
+ (_Bool)wantsExpandedLeadingPlacements;
+ (id)pillFont;

- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;
- (id)setupInContainerView:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;
- (void)itemCreated:(id)arg1;
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (void)updateDataForBackgroundActivity:(id)arg1;
- (id)_backgroundActivityDetailRemovalAnimation;

@end
