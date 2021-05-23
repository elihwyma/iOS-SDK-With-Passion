/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSString;

@interface _UIFocusRegion : NSObject <Swift>

{
    NSMutableArray *_mutableOccludingRegions;
    _UIFocusRegion *_originalRegion;
    struct CGRect _frame;
}

@property (nonatomic, setter=_setFrame:) struct CGRect frame;
@property (retain, nonatomic, getter=_originalRegion, setter=_setOriginRegion:) _UIFocusRegion *originalRegion;
@property (retain, nonatomic, getter=_mutableOccludingRegions, setter=_setMutableOccludingRegions:) NSMutableArray *mutableOccludingRegions;
@property (weak, nonatomic, readonly, getter=_debugAssociatedObject) id debugAssociatedObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2;
+ (id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(_Bool)arg3;
+ (id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (unsigned long long)_focusableBoundaries;
- (id)_focusedItemForLinearSorting:(id)arg1 inMap:(id)arg2;
- (long long)_preferredDistanceComparisonType;
- (_Bool)_canOccludeRegionsBelow;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (_Bool)_shouldUseNextFocusedItemForLinearSorting;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)_defaultFocusItem;
- (_Bool)_canBeOccludedByRegionsAbove;
- (_Bool)_shouldCropRegionToSearchArea;
- (id)_occludingRegions;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;
- (void)_addOccludingRegion:(id)arg1;
- (id)_subregionWithFrame:(struct CGRect)arg1;
- (id)_visibleSubregionsWhenOccludedByRegion:(id)arg1;
- (unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)arg1;
- (unsigned long long)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg1;
- (id)_resizeToRect:(struct CGRect)arg1;
- (void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1;

@end
