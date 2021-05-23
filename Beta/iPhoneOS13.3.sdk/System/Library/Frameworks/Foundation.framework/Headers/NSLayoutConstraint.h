/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSLayoutAnchor, NSSet, NSString, _NSConstraintDescriptionLayoutRuleNode;

@interface NSLayoutConstraint : NSObject

{
    id _container;
    id _firstAnchor;
    id _secondAnchor;
    double _constant;
    double _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    unsigned long long _layoutConstraintFlags;
    float _coefficient;
    float _priority;
}

@property (setter=_setAssociatedRuleNode:) _NSConstraintDescriptionLayoutRuleNode *_associatedRuleNode;
@property (copy, setter=_setFirstAnchor:) NSLayoutAnchor *firstAnchor;
@property (setter=_setRelation:) long long relation;
@property (setter=_setMultiplier:) double multiplier;
@property (copy, setter=_setSecondAnchor:) NSLayoutAnchor *secondAnchor;
@property (copy) NSString *identifier;
@property (readonly) _Bool hasBeenLowered;
@property id container;
@property (setter=_setContainerDeclaredConstraint:) _Bool _containerDeclaredConstraint;
@property (readonly) double unsatisfaction;
@property (copy) NSString *symbolicConstant;
@property (nonatomic, getter=_loweredConstantNeedsUpdate, setter=_setLoweredConstantNeedsUpdate:) _Bool loweredConstantNeedsUpdate;
@property (copy, readonly) NSSet *_referencedLayoutItems;
@property float priority;
@property _Bool shouldBeArchived;
@property (readonly) id firstItem;
@property (readonly) long long firstAttribute;
@property (readonly) id secondItem;
@property (readonly) long long secondAttribute;
@property double constant;
@property (getter=isActive) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 multiplier:(double)arg4 constant:(double)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4;
+ (double)_constraintConstantLimit;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7;
+ (void)_addOrRemoveConstraints:(id)arg1 activate:(_Bool)arg2;
+ (void)_setLegacyDecodingOnly:(_Bool)arg1;
+ (void)activateConstraints:(id)arg1;
+ (void)deactivateConstraints:(id)arg1;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 constant:(double)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 constant:(double)arg4;
+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 constant:(double)arg3;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_identifier;
- (void)_setIdentifier:(id)arg1;
- (_Bool)_addToEngine:(id)arg1 mutuallyExclusiveConstraints:(id *)arg2;
- (id)_layoutEngine;
- (id)_markerAndPositiveExtraVar;
- (id)_negativeExtraVar;
- (double)_unsatisfaction:(double *)arg1;
- (void)_removeFromEngine:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (id)equationDescription;
- (id)_ancestorRuleNodes;
- (id)sourceRuleHierarchy;
- (unsigned long long)_constraintValueHashIncludingConstant:(_Bool)arg1 includeOtherMutableProperties:(_Bool)arg2;
- (_Bool)_isEqualToConstraintValue:(id)arg1 includingConstant:(_Bool)arg2 includeOtherMutableProperties:(_Bool)arg3;
- (id)_constraintValueCopy;
- (void)_setMutablePropertiesFromConstraint:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (void)_addToEngine:(id)arg1;
- (double)priorityForVariable:(id)arg1;
- (void)_setPriority:(float)arg1 mutuallyExclusiveConstraints:(id *)arg2;
- (void)_rebuildExtraVars;
- (id)_constantDescriptionForDTrace;
- (void)_makeExtraVars;
- (void)setHasBeenLowered:(_Bool)arg1;
- (_Bool)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(_Bool *)arg2;
- (_Bool)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 lastLoweredConstantWasRounded:(_Bool)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (id)_symbolicConstant;
- (void)_setSymbolicConstant:(id)arg1;
- (_Bool)_tryToChangeContainerGeometryWithUndoHandler:(CDUnknownBlockType)arg1;
- (_Bool)_effectiveConstant:(double *)arg1 error:(id *)arg2;
- (void)_setSymbolicConstant:(id)arg1 constant:(double)arg2;
- (int)_constraintType;
- (id)_descriptionforSymbolicConstant;
- (id)descriptionAccessory;
- (id)asciiArtDescription;
- (id)_priorityDescription;
- (id)animations;
- (void)setAnimations:(id)arg1;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (id)_deallocSafeDescription;
- (void)_setActive:(_Bool)arg1 mutuallyExclusiveConstraints:(id *)arg2;
- (void)_tryToActivateMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;
- (_Bool)_nsib_isRedundantInEngine:(id)arg1;
- (void)_setFirstItem:(id)arg1 attribute:(long long)arg2;
- (void)_setSecondItem:(id)arg1 attribute:(long long)arg2;
- (double)dissatisfaction;
- (_Bool)_isIBPrototypingLayoutConstraint;
- (_Bool)_existsInEngine:(id)arg1;
- (_Bool)_isFudgeable;
- (double)_fudgeIncrement;
- (double)_allowedMagnitudeForIntegralizationAdjustment;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (void)_setNegativeExtraVar:(id)arg1;
- (_Bool)_deferDTraceLogging;
- (void)_setDeferDTraceLogging:(_Bool)arg1;
- (int)_primitiveConstraintType;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (id)_allocationDescription;
- (_Bool)_loweredConstantIsRounded;
- (void)_clearWeakContainerReference;
- (void)_containerGeometryDidChange;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (_Bool)_referencesLayoutItem:(id)arg1;
- (_Bool)_describesSameRestrictionAsConstraint:(id)arg1;
- (_Bool)_addToEngine:(id)arg1 integralizationAdjustment:(double)arg2 mutuallyExclusiveConstraints:(id *)arg3;
- (struct CGSize)_engineToContainerScalingCoefficients;
- (id)_loweredExpression;
- (void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id *)arg1 andMutuallyExclusiveConstraints:(id *)arg2;
- (id)_explainUnsatisfaction;
- (_Bool)_nsib_isRedundant;

@end
