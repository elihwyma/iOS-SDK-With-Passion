/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSCollectionLayoutSection, NSIndexSet, UITraitCollection;

@protocol NSCollectionLayoutContainer;

@protocol _UICollectionLayoutSectionSolver <Swift>

@property (nonatomic, readonly) NSCollectionLayoutSection *layoutSection;
@property (nonatomic, readonly) id <NSCollectionLayoutContainer> container;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) _Bool layoutRTL;
@property (nonatomic, readonly) int layoutAxis;
@property (nonatomic, readonly) long long frameCount;
@property (nonatomic, readonly) struct CGRect effectiveContentFrame;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) NSIndexSet *pinnedSupplementaryIndexes;
@property (nonatomic) _Bool shouldAdjustContentSizeForPartialLastGroupSolution;
@property (nonatomic) struct CGPoint orthogonalOffset;
@property (nonatomic, readonly) struct CGVector orthogonalScrollingPrefetchingUnitVector;

- (unsigned short)solveForContainer:traitCollection:layoutAxis:frameCount:preferredSizes:layoutRTL: /* Error: Ran out of types for this method. */;
- (unsigned short)supplementaryFrameWithKind:index: /* Error: Ran out of types for this method. */;
- (unsigned short)queryFramesIntersectingRect:frameOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)solveForContainer:traitCollection:layoutAxis:frameCount: /* Error: Ran out of types for this method. */;
- (unsigned short)solveForContainer:traitCollection:layoutAxis:frameCount:preferredSizes: /* Error: Ran out of types for this method. */;
- (unsigned short)resolveWithParameters:preferredSizes: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePinnedSupplementaryItemsWithVisibleBounds: /* Error: Ran out of types for this method. */;
- (unsigned short)queryFramesIntersectingRect: /* Error: Ran out of types for this method. */;
- (unsigned short)frameForIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)sectionSupplementaryFrameWithKind:index: /* Error: Ran out of types for this method. */;
- (unsigned short)sectionSupplementaryFrameForIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)sectionSupplementaryKindIndexForEnrollmentIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)allSupplementaryKeys;
- (unsigned short)supplementaryKeysAssociatedWithItemAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)visualDescription;
- (unsigned short)_setOrthogonalOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)_dimensionForRootGroupAlongAxis: /* Error: Ran out of types for this method. */;

@end
