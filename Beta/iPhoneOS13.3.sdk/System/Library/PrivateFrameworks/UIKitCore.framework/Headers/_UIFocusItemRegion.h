/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusRegion.h>

@protocol UIFocusItem;

@interface _UIFocusItemRegion : _UIFocusRegion

{
    _Bool _itemIsEligibleForFocusInteraction;
    _Bool _itemIsFocusable;
    id <UIFocusItem> _item;
}

@property (weak, nonatomic, readonly) id <UIFocusItem> item;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)_visualRepresentationColor;
- (unsigned long long)_focusableBoundaries;
- (long long)_preferredDistanceComparisonType;
- (long long)_visualRepresentationPatternType;
- (_Bool)_canOccludeRegionsBelow;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (id)_debugAssociatedObject;
- (id)_defaultFocusItem;
- (_Bool)_canBeOccludedByRegionsAbove;
- (_Bool)_shouldCropRegionToSearchArea;

@end
