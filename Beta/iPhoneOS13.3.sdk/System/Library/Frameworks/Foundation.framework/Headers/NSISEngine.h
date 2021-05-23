/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

#import <Foundation/Swift-Protocol.h>

@class NSHashTable, NSISObjectiveLinearExpression, NSISVariable, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSThread, _NSISVariableObservable;

@protocol NSISEngineDelegate, NSObservable;

@interface NSISEngine : NSObject <Swift>

{
    NSMutableArray *_variablesWithValueRestrictionViolations;
    NSMutableArray *_pendingRemovals;
    NSHashTable *_pendingMarkerDelegates;
    NSObject<NSObservable> *_variableChangeTransactionSignal;
    NSMapTable *_variableObservables;
    _NSISVariableObservable *_dirtyObservables;
    id <NSISEngineDelegate> _delegate;
    NSMapTable *_brokenConstraintPositiveErrors;
    NSMapTable *_brokenConstraintNegativeErrors;
    CDUnknownBlockType _unsatisfiabilityHandler;
    unsigned long long _pivotCount;
    unsigned long long _variableChangeCount;
    struct CGSize _engineScalingCoefficients;
    NSMutableDictionary *_recordedOperations;
    NSThread *_allowedBGThread;
    int _automaticOptimizationDisabledCount;
    int _engineDelegateCallsDisabledCount;
    int _variableDelegateCallsDisabledCount;
    unsigned int _totalChangeCount;
    unsigned int _changeCountAtLastOptimization;
    _Bool _revertsAfterUnsatisfiabilityHandler;
    _Bool _accumulatingRemovals;
    _Bool _engineNeedsOptimization;
    _Bool _allowUnoptimizedReads;
    _Bool _optimizationInProgress;
    _Bool _accessedFromMainThread;
    _Bool _engineNeedsRebuildFromConstraints;
    _Bool _changeNotificationsDirty;
    NSMapTable *_variablesObservations;
    NSMutableSet *_dirtyVariables;
    NSMapTable *_rows;
    CDStruct_52118125 _engineVarTable;
    CDStruct_52118125 _rowTables[2];
    CDStruct_52118125 _colTables[2];
    NSISVariable *_headForObjectiveRow;
    CDStruct_a8d20eab _objectiveRow;
    NSISVariable *_placeholderHeadForExpressionBeingAdded;
    NSISVariable *_artificialRowHead;
    NSISVariable *_artificialObjectiveRowHead;
    NSISObjectiveLinearExpression *_artificialObjectiveRowBody;
}

@property (retain) NSMutableArray *variablesWithValueRestrictionViolations;
@property (retain) NSISVariable *artificialRowHead;
@property (retain) NSISVariable *artificialObjectiveRowHead;
@property (retain) NSISObjectiveLinearExpression *artificialObjectiveRowBody;
@property id <NSISEngineDelegate> delegate;
@property _Bool shouldIntegralize;
@property _Bool revertsAfterUnsatisfiabilityHandler;
@property (readonly) unsigned long long variableChangeCount;
@property (nonatomic) struct CGSize engineScalingCoefficients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_dbg_anyEngineContainsVariable:(id)arg1;
+ (void)setEnableEngineTrace:(_Bool)arg1;
+ (_Bool)enableEngineTrace;
+ (id)traceFileSuffix;
+ (void)setTraceFileSuffix:(id)arg1;
+ (void)setLogOnInvalidUseFromBGThread:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)hasValue:(double *)arg1 forVariable:(id)arg2;
- (id)constraints;
- (id)observableForVariable:(id)arg1;
- (id)variableChangeTransactionSignal;
- (double)valueForExpression:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (double)valueForVariable:(id)arg1;
- (_Bool)valueOfVariableIsAmbiguous:(id)arg1;
- (id)constraintsAffectingValueOfVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (int)nsis_orientationHintForVariable:(id)arg1;
- (unsigned long long)optimize;
- (unsigned long long)_optimizeWithoutRebuilding;
- (_Bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 mutuallyExclusiveConstraints:(id *)arg3;
- (_Bool)tryToAddConstraintWithMarker:(id)arg1 expression:(id)arg2 integralizationAdjustment:(double)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (void)addVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (void)removeVariableToBeOptimized:(id)arg1 priority:(double)arg2;
- (void)changeVariableToBeOptimized:(id)arg1 fromPriority:(double)arg2 toPriority:(double)arg3;
- (void)removeConstraintWithMarker:(id)arg1;
- (void)constraintDidChangeSuchThatMarker:(id)arg1 shouldBeReplacedByMarkerPlusDelta:(double)arg2;
- (_Bool)tryToChangeConstraintSuchThatMarker:(id)arg1 isReplacedByMarkerPlusDelta:(double)arg2 undoHandler:(CDUnknownBlockType)arg3;
- (void)verifyInternalIntegrity;
- (id)_brokenConstraintPositiveErrors;
- (id)_brokenConstraintPositiveErrorsIfAvailable;
- (id)_brokenConstraintNegativeErrors;
- (id)_brokenConstraintNegativeErrorsIfAvailable;
- (id)markerForBrokenConstraintWithPositiveErrorVar:(id)arg1;
- (id)markerForBrokenConstraintWithNegativeErrorVar:(id)arg1;
- (void)enumerateRows:(CDUnknownBlockType)arg1;
- (void)enumerateCols:(CDUnknownBlockType)arg1;
- (void)enumerateEngineVars:(CDUnknownBlockType)arg1;
- (void)replaceMarker:(CDStruct_a8d20eab)arg1 withMarkerPlusCoefficient:(double)arg2 timesCol:(CDStruct_a8d20eab)arg3;
- (void)setPositiveErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (void)setNegativeErrorVar:(id)arg1 forBrokenConstraintWithMarker:(id)arg2;
- (id)errorVariableIntroducedByBreakingConstraintWithMarker:(id)arg1 errorIsPositive:(_Bool)arg2;
- (_Bool)handleUnsatisfiableRow:(CDStruct_a8d20eab)arg1 usingInfeasibilityHandlingBehavior:(long long)arg2 prospectiveRowHead:(CDStruct_a8d20eab *)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (_Bool)chooseHeadForRow:(CDStruct_a8d20eab)arg1 chosenCol:(CDStruct_a8d20eab *)arg2 outNewToEngine:(_Bool *)arg3;
- (void)_addObjectiveRow;
- (void)_removeAllVariables;
- (void)withoutOptimizingAtEndRunBlockWithAutomaticOptimizationDisabled:(CDUnknownBlockType)arg1;
- (void)_flushPendingRemovals;
- (void)rebuildFromConstraints;
- (id)fixUpValueRestrictionViolationsWithInfeasibilityHandlingBehavior:(long long)arg1;
- (_Bool)_optimizeIfNotDisabled;
- (void)withBehaviors:(unsigned long long)arg1 performModifications:(CDUnknownBlockType)arg2;
- (double)valueForEngineVar:(CDStruct_a8d20eab)arg1;
- (_Bool)hasValue:(double *)arg1 forEngineVar:(CDStruct_a8d20eab)arg2;
- (void)copyExpressionSubstitutingRowHeadVariables:(id)arg1 intoRow:(CDStruct_a8d20eab)arg2;
- (_Bool)_tryToAddConstraintWithMarkerEngineVar:(CDStruct_a8d20eab)arg1 row:(CDStruct_a8d20eab)arg2 mutuallyExclusiveConstraints:(id *)arg3;
- (_Bool)tryAddingDirectly:(CDStruct_a8d20eab)arg1;
- (_Bool)tryUsingArtificialVariableToAddConstraintWithMarker:(CDStruct_a8d20eab)arg1 row:(CDStruct_a8d20eab)arg2 usingInfeasibilityHandlingBehavior:(long long)arg3 mutuallyExclusiveConstraints:(id *)arg4;
- (_Bool)containsVariable:(id)arg1;
- (_Bool)outgoingRowHeadForRemovingConstraintWithMarker:(CDStruct_a8d20eab)arg1 outgoingRowHead:(CDStruct_a8d20eab *)arg2;
- (_Bool)positiveErrorVarForBrokenConstraintWithMarker:(id)arg1 errorVar:(CDStruct_a8d20eab *)arg2;
- (_Bool)negativeErrorVarForBrokenConstraintWithMarker:(id)arg1 errorVar:(CDStruct_a8d20eab *)arg2;
- (void)_coreReplaceMarker:(id)arg1 withMarkerPlusDelta:(double)arg2;
- (id)tryToOptimizeReturningMutuallyExclusiveConstraints;
- (void)_dirtyListRemoveObservable:(id)arg1;
- (void)enumerateOriginalConstraints:(CDUnknownBlockType)arg1;
- (_Bool)bodyVarIsAmbiguous:(CDStruct_a8d20eab)arg1 withPivotOfOutgoingRowHead:(CDStruct_a8d20eab *)arg2 foundOutgoingRowHead:(_Bool *)arg3;
- (_Bool)incoming:(CDStruct_a8d20eab *)arg1 andOutgoing:(CDStruct_a8d20eab *)arg2 foundOutgoing:(_Bool *)arg3 rowHeadsThatMakeValueAmbiguousForVariable:(CDStruct_a8d20eab)arg4;
- (_Bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (double)integralizationAdjustmentForMarker:(id)arg1;
- (_Bool)_dirtyListContainsObservable:(id)arg1;
- (void)_dirtyListPrependObservable:(id)arg1;
- (_Bool)isTrackingVariableChanges;
- (void)performPendingChangeNotifications;
- (void)performPendingChangeNotificationsForItem:(id)arg1;
- (void)performModifications:(CDUnknownBlockType)arg1 withUnsatisfiableConstraintsHandler:(CDUnknownBlockType)arg2;
- (CDStruct_fcd6c539)engineVarIndexForVariable:(id)arg1;
- (id)variableForEngineVarIndex:(CDStruct_fcd6c539)arg1;
- (int)valueRestrictionForEngineVarIndex:(CDStruct_fcd6c539)arg1;
- (void)beginRecording;
- (id)recordedCommandsData;
- (unsigned long long)replayCommandsData:(id)arg1 verifyingIntegrity:(_Bool)arg2;
- (void)withAutomaticOptimizationDisabled:(CDUnknownBlockType)arg1;
- (void)withDelegateCallsDisabled:(CDUnknownBlockType)arg1;
- (_Bool)hasValueForPossiblyDeallocatedVariable:(id)arg1;
- (_Bool)hasValue:(double *)arg1 forExpression:(id)arg2;
- (void)beginBookkeepingForVariableIfNeeded:(id)arg1;
- (void)endBookkeepingForVariableIfUnused:(id)arg1;
- (_Bool)containsConstraintWithMarker:(id)arg1;
- (void)removeObservableForVariable:(id)arg1;
- (_Bool)hasObservableForVariable:(id)arg1;
- (void)startObservingChangesForVariable:(id)arg1;
- (void)stopObservingChangesForVariable:(id)arg1;
- (_Bool)isObservingChangesForVariable:(id)arg1;
- (CDStruct_fee1177a *)traceState;
- (unsigned long long)rowCount;
- (unsigned long long)colCount;
- (unsigned long long)pivotCount;
- (id)allRowHeads;
- (id)candidateRedundantConstraints;
- (_Bool)exerciseAmbiguityInVariable:(id)arg1;
- (id)allVariableValues;
- (_Bool)_disambiguateFrame:(struct CGRect *)arg1 forAmbiguousItem:(id)arg2 withOldFrame:(struct CGRect)arg3;

@end
