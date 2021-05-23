/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/Swift-Protocol.h>

@class NSIndexPath;

@protocol PUPhotosGridTransitioningLayout <Swift>

@property (nonatomic) struct CGPoint transitionEffectiveContentOrigin;
@property (nonatomic, readonly) struct CGSize transitionActualContentSize;
@property (nonatomic) _Bool transitionIsAnimated;
@property (nonatomic, readonly) long long transitionAnchorColumnOffset;
@property (copy, nonatomic) NSIndexPath *transitionExplicitAnchorItemIndexPath;
@property (nonatomic) _Bool transitionAnchorShiftsColumns;
@property (nonatomic, readonly) long long itemsPerRow;
@property (nonatomic) struct CGSize itemSize;
@property (nonatomic) struct CGSize interItemSpacing;
@property (nonatomic, readonly) long long numberOfVisualSections;
@property (copy, nonatomic, readonly) NSIndexPath *transitionFirstVisibleRowVisualPath;
@property (copy, nonatomic, readonly) NSIndexPath *transitionLastVisibleRowVisualPath;

- (unsigned short)itemIndexPathAtCenterOfRect: /* Error: Ran out of types for this method. */;
- (unsigned short)targetContentOffsetForTransitionFromGridLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)adjustEffectiveContentOriginForTransitionEndContentOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)visualSectionForRealSection: /* Error: Ran out of types for this method. */;
- (unsigned short)mainRealSectionForVisualSection: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateRealSectionsForVisualSection:usingBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfVisualItemsInVisualSection: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfRowsInVisualSection: /* Error: Ran out of types for this method. */;
- (unsigned short)itemIndexPathAtPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)itemIndexPathClosestToPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)maxItemIndexPathAbovePoint: /* Error: Ran out of types for this method. */;
- (unsigned short)maxItemIndexPathLeftOfPoint: /* Error: Ran out of types for this method. */;
- (unsigned short)frameForItemAtGridCoordinates:inVisualSection: /* Error: Ran out of types for this method. */;
- (unsigned short)frameForSectionHeaderAtVisualSection: /* Error: Ran out of types for this method. */;
- (unsigned short)gridCoordinatesInVisualSectionForItemAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)gridCoordinatesInTransitionSectionForItemAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)numberOfContiguousRowsInTransitionSection: /* Error: Ran out of types for this method. */;
- (unsigned short)frameForItemAtGridCoordinates:inTransitionSection: /* Error: Ran out of types for this method. */;
- (unsigned short)mainRealIndexPathAtGridCoordinates:inTransitionSection: /* Error: Ran out of types for this method. */;
- (unsigned short)hasItemAtGridCoordinates:inTransitionSection: /* Error: Ran out of types for this method. */;
- (unsigned short)targetTransitionGridCoordsForGridCoords:atVisualSection:outTransitionSection: /* Error: Ran out of types for this method. */;
- (unsigned short)visualGridCoordsForTransitionGridCoords:atTransitionSection:outVisualSection: /* Error: Ran out of types for this method. */;
- (unsigned short)targetTransitionRealIndexPathForIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)transitionSectionsInRect:toOrFromGridLayout: /* Error: Ran out of types for this method. */;
- (unsigned short)transitionAnchorIndexPathForTransitionSection: /* Error: Ran out of types for this method. */;

@end
