/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class MiroAutoEditController, MiroAutoEditLogger, MiroAutoEditMultiUpController, MiroAutoEditTransitionController, MiroMemory, NSMutableArray, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEditProjectPolish : NSObject

{
    Project *_project;
    MiroMemory *_activeMemory;
    NSMutableArray *_layoutClips;
    MiroAutoEditTransitionController *_transitionsController;
    MiroAutoEditMultiUpController *_multiController;
    MiroAutoEditController *_editController;
    MiroAutoEditLogger *_logger;
    NSMutableArray *_conversionNeeded;
}

@property (retain, nonatomic) Project *project;
@property (nonatomic) MiroMemory *activeMemory;
@property (retain, nonatomic) NSMutableArray *layoutClips;
@property (retain, nonatomic) MiroAutoEditTransitionController *transitionsController;
@property (retain, nonatomic) MiroAutoEditMultiUpController *multiController;
@property (nonatomic) MiroAutoEditController *editController;
@property (retain, nonatomic) MiroAutoEditLogger *logger;
@property (retain, nonatomic) NSMutableArray *conversionNeeded;

- (void)cleanup;
- (_Bool)multiUpSupportedForAspect:(int)arg1;
- (void)applyTransitions;
- (void)applyIrisEffect;
- (void)applyBurstEffect;
- (void)batchConvertCompoundClipsToKenBurnsClips;
- (void)adjustVideoPositioningBasedOnMetadata;
- (void)createLayoutClips;
- (void)applyAudioPolish;
- (void)clearAllStandardClipEffects;
- (void)applyMultiUpTreatments;
- (void)createTransitionControllerAndPrepare;
- (void)applyClipPolish;
- (_Bool)clipIsViableZoomToPersonCandidate:(id)arg1;
- (void)applyAutomaticThemeTitleToClip:(id)arg1 forPoster:(_Bool)arg2;
- (_Bool)isPortraitSquareVideo:(id)arg1;
- (float)sideScaleOffsetForScaleFactor:(float)arg1;
- (id)videoFramingRangesFor:(id)arg1;
- (void)setVideoScaleFactorYPostitionFor:(id)arg1 boundingRect:(struct CGRect)arg2;
- (void)setVideoScaleFactorXPostitionFor:(id)arg1 boundingRect:(struct CGRect)arg2;
- (void)convertSpecialClipTypeToKenBurnsClip:(id)arg1;
- (unsigned long long)allowedBurstStylesFromBlueprint:(id)arg1;
- (void)_updateSpeedRampsForClip:(id)arg1 beginningRampDurationSeconds:(double)arg2 endingRampDurationSeconds:(double)arg3;
- (void)polishProject;
- (id)_everyTitleDEBUG;
- (void)applyTitleToFirstClip;
- (void)removeIrisStylesFromFirstThreeClips;
- (void)adjustSlowMotionSpeedRamps;
- (_Bool)extremeCropAllowed;

@end
