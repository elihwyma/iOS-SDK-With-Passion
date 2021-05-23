/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UILayoutArrangement.h>

@class NSMapTable, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UIOrderedLayoutArrangement : _UILayoutArrangement

{
    NSMapTable *_spacingOrCenteringGuides;
    NSMapTable *_edgeToEdgeConstraintsForVisibleItems;
    NSMapTable *_edgeToEdgeConstraintsForHiddenItems;
    NSMapTable *_relatedDimensionConstraints;
    NSMapTable *_hidingDimensionConstraints;
    NSMapTable *_multilineTextWidthDisambiguationConstraints;
    NSMapTable *_customSpacings;
    double _proportionalFillDenominator;
    _Bool _itemOrderingChanged;
    _Bool _itemFittingSizeChanged;
    _Bool _baselineRelativeArrangement;
    double _spacing;
    long long _distribution;
}

@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
@property (nonatomic) long long distribution;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long axis;
@property (nonatomic) _Bool layoutFillsCanvas;
@property (nonatomic) _Bool layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic, readonly) NSSet *invalidBaselineConstraints;
@property (nonatomic, setter=_setItemOrderingChanged:) _Bool _itemOrderingChanged;
@property (nonatomic, setter=_setItemFittingSizeChanged:) _Bool _itemFittingSizeChanged;
@property (nonatomic, readonly) NSMapTable *customSpacings;

+ (Class)_configurationHistoryClass;

- (void)removeItem:(id)arg1;
- (double)_calculatedIntrinsicHeight;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (_Bool)_canvasConnectionConstraintsNeedUpdatePass;
- (_Bool)_hasStaleConfiguration;
- (void)_updateConfigurationHistory;
- (void)_updateArrangementConstraints;
- (void)_clearAllConstraintsArrays;
- (id)_identifierForSpanningLayoutGuide;
- (_Bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (_Bool)_configurationRequiresCanvasConnectionFittingConstraint;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
- (double)customSpacingAfterItem:(id)arg1;
- (id)_firstVisibleItem;
- (id)_lastVisibleItem;
- (void)_trackChangesAffectingExternalBaselineConstraints:(CDUnknownBlockType)arg1;
- (id)_orderedPropertySource;
- (id)_orderedConfigurationHistory;
- (_Bool)_customSpacingChanged;
- (_Bool)_hasStaleSpacing;
- (void)_notifyCanvasesBaselineParametersDidChange;
- (_Bool)_wantsProportionalDistribution;
- (void)_cleanUpGuides;
- (id)_dimensionRefItemFromConstraint:(id)arg1;
- (void)_cleanUpGuideAtGapFollowingItem:(id)arg1;
- (void)_cleanUpEdgeToEdgeConstraintsForVisibleItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processPrecedingVisisbleItem:(_Bool)arg3;
- (void)_cleanUpEdgeToEdgeConstraintsForHiddenItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processAdjacentHiddenItems:(_Bool)arg3;
- (double)_expectedEdgeToEdgeSpacingForPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4;
- (double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfVisibleItems:(unsigned long long)arg1;
- (long long)_minAttributeForGapConstraintRespectingBaselineRelative:(_Bool)arg1;
- (long long)_minAttributeForGapConstraint;
- (long long)_maxAttributeForGapConstraintRespectingBaselineRelative:(_Bool)arg1;
- (id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4;
- (long long)_precedingLocationAttributeForGuideConstraint;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(_Bool)arg3 isFollowedByVisibleItem:(_Bool)arg4 isHidden:(_Bool)arg5;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenSpanningLayoutGuide:(id)arg1 hiddenItem:(id)arg2;
- (id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)arg1;
- (void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg1;
- (void)_setUpHidingDimensionConstraintForItem:(id)arg1;
- (_Bool)_itemCountChanged;
- (void)_cleanUpWithoutResettingKeepAliveWorkaround;
- (void)_removeGuideAndConstraintGroupsAsNecessary;
- (void)_removeIndividualGuidesAndConstraintsAsNecessary;
- (void)_adjustConstraintConstantsIfPossible;
- (void)_insertIndividualGuidesAndConstraintsAsNecessary;
- (id)_tallestItem;
- (id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)arg1;
- (id)_baselineViewVendTallest:(_Bool)arg1 forFirstBaseline:(_Bool)arg2;

@end
