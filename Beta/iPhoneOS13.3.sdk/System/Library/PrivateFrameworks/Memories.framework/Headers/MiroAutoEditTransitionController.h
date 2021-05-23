/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroAutoEditKenBurnsController, MiroBlueprint, MiroMemory, NSMutableArray, NSMutableDictionary, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEditTransitionController : NSObject

{
    int _numberOfPotentialTransitionPoints;
    Project *_project;
    MiroBlueprint *_activeBlueprint;
    NSMutableArray *_layoutClips;
    MiroAutoEditKenBurnsController *_kbController;
    NSMutableArray *_kenBurnsPanZoomPatterns;
    NSMutableArray *_transitions;
    NSMutableDictionary *_groupingTransitions;
    NSMutableArray *_specialTransitions;
    NSMutableArray *_multiTransitions;
    MiroMemory *_activeMemory;
}

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroBlueprint *activeBlueprint;
@property (retain, nonatomic) NSMutableArray *layoutClips;
@property (retain, nonatomic) MiroAutoEditKenBurnsController *kbController;
@property (retain, nonatomic) NSMutableArray *kenBurnsPanZoomPatterns;
@property (retain, nonatomic) NSMutableArray *transitions;
@property (retain, nonatomic) NSMutableDictionary *groupingTransitions;
@property (retain, nonatomic) NSMutableArray *specialTransitions;
@property (retain, nonatomic) NSMutableArray *multiTransitions;
@property (nonatomic) int numberOfPotentialTransitionPoints;
@property (nonatomic) MiroMemory *activeMemory;

- (void)establishPanAndZoomPatterns;
- (int)numberOfTransitionClipsInLayoutClips;
- (int)numberOfMultiTransitionsNeeded;
- (id)prepareTransitionsFromBlueprint:(id)arg1 forNumberOfEditPoints:(int)arg2 numberOfMultiTransitions:(int)arg3;
- (void)assignTransitionsToLayoutClips;
- (void)applyTransitionToLayoutClip:(id)arg1;
- (id)nextKBPanAndZoomSetForNumberOfEdits:(int)arg1 following:(id)arg2 forAspect:(id)arg3;
- (unsigned long long)kenBurnsPaceForBlueprint;
- (void)applyDeterminedKenBurnsTreatments:(id)arg1 forAspect:(id)arg2;
- (void)applyPanoStyleToClip:(id)arg1;
- (void)applyKenBurnsForBurstClip:(id)arg1;
- (_Bool)transitionDictatesKenBurnsMotion:(id)arg1;
- (void)applyKenBurnsOrEffectForKenBurnsClip:(id)arg1;
- (void)assignRemainingKenBurnsAnyClipTreatments;
- (id)convertMultiTransitionDictionary:(id)arg1 basedOnMultiLayout:(int)arg2;
- (_Bool)transitionCandidate:(id)arg1 validForLayoutClip:(id)arg2;
- (void)assignRequiredCutsAndMultiTransitionsIn:(id)arg1;
- (void)assignFirstAppropriateTransitionTo:(id)arg1;
- (void)updateNumberOfTransitionsToInclude:(int)arg1;
- (_Bool)findAndAssignConsecutiveClipsIn:(id)arg1 supportingTransitionGroup:(id)arg2;
- (void)shuffleTransitionsInArray:(id)arg1;
- (id)transitionForLayoutClip:(id)arg1;
- (id)transitionFromTransitions:(id)arg1 leadingClipType:(int)arg2 followingClipType:(int)arg3 includesPano:(_Bool)arg4;
- (_Bool)attemptToTransitionFromClip:(id)arg1 toClip:(id)arg2 withSettingsFromLayoutClip:(id)arg3;
- (id)transitionDictionaryForMultiFromBlueprint:(id)arg1;
- (unsigned long long)kenBurnsPreferredMovementForClip:(id)arg1;
- (_Bool)clipHasMediaLimitations:(id)arg1;
- (_Bool)clipShouldTrimToSelection:(id)arg1;
- (id)clipBeforeClip:(id)arg1;
- (int)maxTransitionDurationFromClip:(id)arg1 toClip:(id)arg2 transitionName:(id)arg3;
- (void)applyMultiUpTransitionTreatmentToLayoutClip:(id)arg1;
- (void)prepareTransitionsForBlueprint;
- (void)applyTransitions;
- (void)applyClipEffectsBasedOnTransitions;
- (unsigned long long)safeInsertIndexForTransition:(id)arg1 inTransitions:(id)arg2;
- (void)adjustChosenTransitionsToAdhereToContentRules:(id)arg1;
- (_Bool)transitionAcceptableBetween:(id)arg1 secondClip:(id)arg2;
- (id)_everyTransitionDEBUG;

@end
