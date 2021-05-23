/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusRegion.h>

@protocol _UIFocusGuideRegionDelegate;

@interface _UIFocusGuideRegion : _UIFocusRegion

{
    id <_UIFocusGuideRegionDelegate> _delegate;
}

@property (weak, nonatomic) id <_UIFocusGuideRegionDelegate> delegate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)_fallbackFocusItemForMovementRequest:(id)arg1 inFocusMap:(id)arg2;
- (id)_visualRepresentationColor;
- (unsigned long long)_focusableBoundaries;
- (_Bool)_isEnabledForFocusedRegion:(id)arg1;
- (id)_delegatePreferredFocusEnvironmentsForMovementRequest:(id)arg1;
- (id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2;
- (long long)_preferredDistanceComparisonType;
- (long long)_visualRepresentationPatternType;
- (_Bool)_canOccludeRegionsBelow;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (_Bool)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)_debugAssociatedObject;

@end
