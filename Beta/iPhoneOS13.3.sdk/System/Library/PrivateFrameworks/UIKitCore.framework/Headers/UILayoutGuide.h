/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSISVariable, NSLayoutDimension, NSLayoutRect, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSMapTable, NSMutableArray, NSString, UITraitCollection, UIView;

@interface UILayoutGuide : NSObject <Swift>

{
    NSLayoutRect *_layoutRect;
    struct CGRect _layoutFrame;
    _Bool _isLayoutFrameValid;
    NSMutableArray *_constraintsToBeProcessedAfterDecoding;
    UIView *_unsafeUnretainedOwningView;
    _Bool _allowOwningViewSetting;
    _Bool _isLockedToOwningView;
    _Bool _useManualLayoutFrame;
    _Bool __allowsNegativeDimensions;
    _Bool __shouldBeArchived;
    UIView *_owningView;
    NSString *_identifier;
    NSISVariable *_minXVariable;
    NSISVariable *_minYVariable;
    NSISVariable *_boundsWidthVariable;
    NSISVariable *_boundsHeightVariable;
    NSArray *_systemConstraints;
    NSMapTable *_stashedLayoutVariableObservations;
    NSLayoutXAxisAnchor *_leadingAnchor;
    NSLayoutXAxisAnchor *_trailingAnchor;
    NSLayoutXAxisAnchor *_leftAnchor;
    NSLayoutXAxisAnchor *_rightAnchor;
    NSLayoutYAxisAnchor *_topAnchor;
    NSLayoutYAxisAnchor *_bottomAnchor;
    NSLayoutDimension *_widthAnchor;
    NSLayoutDimension *_heightAnchor;
    NSLayoutXAxisAnchor *_centerXAnchor;
    NSLayoutYAxisAnchor *_centerYAnchor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) struct CGRect _ui_bounds;
@property (nonatomic) struct CGRect _ui_frame;
@property (nonatomic, readonly) UIView *_ui_superview;
@property (nonatomic, readonly) UIView *_ui_view;
@property (nonatomic) _Bool _ui_usesManualLayout;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property (nonatomic, readonly) _Bool hasAmbiguousLayout;
@property (retain, nonatomic, readonly) NSISVariable *_minXVariable;
@property (retain, nonatomic, readonly) NSISVariable *_minYVariable;
@property (retain, nonatomic, readonly) NSISVariable *_boundsWidthVariable;
@property (retain, nonatomic, readonly) NSISVariable *_boundsHeightVariable;
@property (retain, nonatomic, readonly) NSMapTable *_stashedLayoutVariableObservations;
@property (nonatomic, setter=_setAllowsNegativeDimensions:) _Bool _allowsNegativeDimensions;
@property (nonatomic, setter=_setShouldBeArchived:) _Bool _shouldBeArchived;
@property (nonatomic, getter=_isLockedToOwningView, setter=_setLockedToOwningView:) _Bool _lockedToOwningView;
@property (retain, nonatomic, setter=_setSystemConstraints:) NSArray *_systemConstraints;
@property (nonatomic, setter=_setAllowOwningViewSetting:) _Bool _allowOwningViewSetting;
@property (nonatomic, readonly) _Bool _useManualLayoutFrame;
@property (nonatomic, readonly) struct CGRect layoutFrame;
@property (weak, nonatomic) UIView *owningView;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leadingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *trailingAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *leftAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *rightAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *topAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *bottomAnchor;
@property (nonatomic, readonly) NSLayoutDimension *widthAnchor;
@property (nonatomic, readonly) NSLayoutDimension *heightAnchor;
@property (nonatomic, readonly) NSLayoutXAxisAnchor *centerXAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *centerYAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (setter=nsli_setPiercingToken:) unsigned long long nsli_piercingToken;

+ (double)_defaultSpacingBetweenGuidesForResolvingSymbolicConstant;

- (id)init;
- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (_Bool)nsli_isRTL;
- (id)nsli_superitem;
- (_Bool)nsli_isFlipped;
- (id)nsli_minYVariable;
- (id)nsli_boundsHeightVariable;
- (id)nsli_minXVariable;
- (id)nsli_description;
- (_Bool)nsli_descriptionIncludesPointer;
- (id)nsli_layoutEngine;
- (id)nsli_installedConstraints;
- (struct CGSize)nsli_engineToUserScalingCoefficients;
- (_Bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
- (void *)_referenceView;
- (_Bool)nsli_isLegalConstraintItem;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (id)nsli_boundsWidthVariable;
- (_Bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (_Bool)nsli_resolvedValue:(double *)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id *)arg4;
- (_Bool)nsli_defaultResolvedValue:(double *)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id *)arg4;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (struct CGSize)nsli_convertSizeFromEngineSpace:(struct CGSize)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (_Bool)nsli_removeConstraint:(id)arg1;
- (unsigned long long)nsli_autoresizingMask;
- (id)nsli_layoutMarginsItem;
- (id)_layoutRect;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setManualLayoutFrame:(struct CGRect)arg1;
- (_Bool)_uili_isFocusGuide;
- (void)_ui_removeFromParentLayoutItem;
- (void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2;
- (void)_ui_addSubLayoutItem:(id)arg1;
- (void)_ui_addToView:(id)arg1 atIndex:(long long)arg2;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (void)_addConstraintToBeProcessedAfterDecoding:(id)arg1;
- (id)constraintsAffectingLayoutForAxis:(long long)arg1;
- (id)_descriptionForLayoutTrace;
- (id)_autolayoutTraceAtLevel:(long long)arg1 recursively:(_Bool)arg2;
- (void)_updateLayoutFrameInOwningView:(id)arg1 fromEngine:(id)arg2;
- (id)_uili_existingBaseFrameVariables;
- (id)_uili_observableLayoutEngineForBaseFrameVariables:(_Bool)arg1;
- (id)_uili_existingObservationEligibleLayoutVariables;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(_Bool)arg1;
- (void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;
- (_Bool)_uili_requiresObservationForVariable:(id)arg1;
- (_Bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;
- (struct CGSize)nsli_convertSizeToEngineSpace:(struct CGSize)arg1;
- (_Bool)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1;
- (id)nsli_widthVariable;
- (id)nsli_heightVariable;
- (void)_setOwningView:(id)arg1;
- (void)_snipReferencingConstraints;
- (void)_invalidateLayoutFrame;
- (id)_createAnchorWithClass:(Class)arg1 attribute:(long long)arg2;
- (void)_owningViewIsDeallocating;

@end
