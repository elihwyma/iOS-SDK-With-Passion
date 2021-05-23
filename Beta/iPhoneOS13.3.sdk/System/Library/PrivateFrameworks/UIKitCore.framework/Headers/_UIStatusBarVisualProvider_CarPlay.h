/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, _UIStatusBar, _UIStatusBarRegion;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_CarPlay : NSObject

{
    _UIStatusBar *_statusBar;
    NSDictionary *_orderedDisplayItemPlacements;
    _UIStatusBarRegion *_timeRegion;
    _UIStatusBarRegion *_radarRegion;
}

@property (retain, nonatomic) NSDictionary *orderedDisplayItemPlacements;
@property (retain, nonatomic) _UIStatusBarRegion *timeRegion;
@property (retain, nonatomic) _UIStatusBarRegion *radarRegion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) _UIStatusBar *statusBar;
@property (nonatomic, readonly) _Bool canFixupDisplayItemAttributes;

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;

- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;
- (id)setupInContainerView:(id)arg1;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)styleAttributesForStyle:(long long)arg1;
- (id)willUpdateWithData:(id)arg1;
- (void)itemCreated:(id)arg1;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)_animationForBackgroundActivityPill;
- (id)_animationForQuietMode;

@end
