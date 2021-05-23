/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NUIMultilineSizingHelper;

@protocol NUIContainerViewDelegate;

@interface NUIContainerView : UIView

{
    _Bool _isRTL;
    id <NUIContainerViewDelegate> _delegate;
    struct map<UIView *, _NUIContainerViewArrangedSubview, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, _NUIContainerViewArrangedSubview>>> _arrangedSubviewInfo;
    NSMutableArray *_arrangedSubviews;
    NSArray *_visibleArrangedSubviews;
    NUIMultilineSizingHelper *_multilineSizeHelper;
    struct UIEdgeInsets _effectiveLayoutMargins;
    UIView *_firstBaselineView;
    UIView *_lastBaselineView;
    struct vector<CALayer *, std::__1::allocator<CALayer *>> _debugBoundingBoxLayers;
    struct {
        unsigned int hiddenArrangedSubviewCount:16;
        unsigned int delaydInvalidation:8;
        unsigned int batchDepth:4;
        unsigned int inLayoutPass:2;
        unsigned int inMeasurementPass:2;
        unsigned int layoutDependency:2;
        unsigned int inEnsureArranged:1;
        unsigned int hasMargins:1;
        unsigned int sizeIsInvalid:1;
        unsigned int debugBoundingBoxes:1;
        unsigned int baselineRelative:1;
        unsigned int layoutMarginsRelative:1;
        unsigned int baselineLayoutMargins:1;
        unsigned int mustRestart:1;
        unsigned int delegateSystemLayoutSizeFittingSizeForArrangedSubview:1;
        unsigned int delegateLayoutFrameForArrangedSubview:1;
        unsigned int delegateWillMeasureFitting:1;
        unsigned int delegateShouldRestart:1;
        unsigned int delegateDidLayout:1;
    } _containerFlags;
}

@property (nonatomic, getter=isDebugBoundingBoxesEnabled) _Bool debugBoundingBoxesEnabled;
@property (copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic, readonly) NSArray *visibleArrangedSubviews;
@property (weak, nonatomic) id <NUIContainerViewDelegate> delegate;
@property (nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
@property (nonatomic, getter=isLayoutMarginsRelativeArrangement) _Bool layoutMarginsRelativeArrangement;
@property (nonatomic, getter=hasBaselineRelativeLayoutMarginsForArrangement) _Bool baselineRelativeLayoutMarginsForArrangement;

+ (void)initialize;
+ (Class)layerClass;
+ (_Bool)requiresConstraintBasedLayout;
+ (_Bool)isDebugBoundingBoxesEnabled;
+ (_Bool)enableAPIMisuseAssertions;
+ (void)setEnableAPIMisuseAssertions:(_Bool)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id).cxx_construct;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)invalidateIntrinsicContentSize;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)layoutMarginsDidChange;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)removeArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (id)debugDictionary;
- (id)initWithArrangedSubviews:(id)arg1;
- (_Bool)_needsDoubleUpdateConstraintsPass;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect)arg1;
- (void)_setInSecondConstraintsPass:(_Bool)arg1;
- (void)_resetToBeginningOfDoublePass;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (struct CGSize)contentLayoutSizeFittingSize:(struct CGSize)arg1 forArrangedSubview:(id)arg2;
- (struct CGRect)layoutFrameForArrangedSubview:(id)arg1 withProposedContentFrame:(struct CGRect)arg2;
- (_Bool)canCancelMeasurementForCompression;
- (_Bool)shouldCancelMeasurementForCompressionInAxis:(long long)arg1;
- (_Bool)_isContainerView;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)assertNotInLayoutPass:(_Bool)arg1;
- (_Bool)setNeedsInvalidation:(long long)arg1;
- (void)beginBatchUpdates;
- (void)endBatchUpdates;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (unsigned int)_countHiddenArrangesSubviews;
- (void)_addAsSubviewIfNeeded:(id)arg1;
- (void)didInsertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)replaceArrangedSubviewAtIndex:(unsigned long long)arg1 withView:(id)arg2;
- (struct UIEdgeInsets)effectiveLayoutMargins;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (struct CGRect)effectiveLayoutBounds;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (void)_updateDebugBoundingBoxesIfNeeded;
- (_Bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;
- (void)visibilityDidChangeForArrangedSubview:(id)arg1;
- (void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg1;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (id)arrangedDescription;
- (_Bool)_verifyInternalConsistencyWarningOnly:(_Bool)arg1;
- (void)replaceArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfArrangedSubview:(id)arg1;
- (long long)alignmentForView:(id)arg1 inAxis:(long long)arg2;
- (void)setAlignment:(long long)arg1 forView:(id)arg2 inAxis:(long long)arg3;
- (struct NSDirectionalEdgeInsets)minimumSpacingAdjacentToView:(id)arg1;
- (void)setMinimumSpacing:(struct NSDirectionalEdgeInsets)arg1 adjacentToView:(id)arg2;
- (_Bool)mustRestartMeasurement;
- (_Bool)isInBatchUpdate;
- (void)ensureArrangedSubviewsAreValid;
- (_Bool)isInLayoutPass;
- (id)debugDictionaryForVisibleArrangedSubview:(id)arg1;
- (id)debugSetDelegateRespondsToSelectors;
- (id)debugSetEnabledFlags;

@end
