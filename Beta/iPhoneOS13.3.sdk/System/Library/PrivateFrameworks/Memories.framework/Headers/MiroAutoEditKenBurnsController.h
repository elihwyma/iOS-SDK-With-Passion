/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class KenBurnsClip, MiroMemory, NSArray, Project;

__attribute__((visibility("hidden")))
@interface MiroAutoEditKenBurnsController : NSObject

{
    _Bool _disableCroppingWithoutPet;
    _Bool _kbReassignment;
    _Bool _targetSpecificPerson;
    _Bool _interestingRegionsEstablished;
    _Bool _hasAreasOfInterest;
    Project *_project;
    MiroMemory *_memory;
    double _targetAspect;
    KenBurnsClip *_kbClip;
    unsigned long long _panStyle;
    unsigned long long _kbStyle;
    double _maximumZoomValue;
    NSArray *_featuredPersonsDetectedFaces;
    double _projectAspect;
    struct CGRect _unionOfAllInterestingRegions;
    struct CGRect _unionOfAllFaceRegions;
    struct CGRect _unionOfAllSaliencyRegions;
    struct CGRect _titleSafeInterestingRegions;
    struct CGRect _finishAreaOfInterest;
    struct CGRect _startRect;
    struct CGRect _endRect;
}

@property (retain, nonatomic) KenBurnsClip *kbClip;
@property (nonatomic) unsigned long long panStyle;
@property (nonatomic) unsigned long long kbStyle;
@property (nonatomic) _Bool kbReassignment;
@property (nonatomic) double maximumZoomValue;
@property (nonatomic) _Bool targetSpecificPerson;
@property (nonatomic) _Bool interestingRegionsEstablished;
@property (nonatomic) _Bool hasAreasOfInterest;
@property (nonatomic) struct CGRect unionOfAllInterestingRegions;
@property (nonatomic) struct CGRect unionOfAllFaceRegions;
@property (nonatomic) struct CGRect unionOfAllSaliencyRegions;
@property (nonatomic) struct CGRect titleSafeInterestingRegions;
@property (nonatomic) struct CGRect finishAreaOfInterest;
@property (retain, nonatomic) NSArray *featuredPersonsDetectedFaces;
@property (nonatomic) struct CGRect startRect;
@property (nonatomic) struct CGRect endRect;
@property (nonatomic, readonly) double horizonNormalizedFromTop;
@property (nonatomic) double projectAspect;
@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) MiroMemory *memory;
@property (nonatomic) double targetAspect;
@property (nonatomic) _Bool disableCroppingWithoutPet;

+ (struct CGRect)titleRectForAsset:(id)arg1 targetAspect:(double)arg2 memory:(id)arg3;
+ (void)prepareKBClip:(id)arg1 project:(id)arg2;

- (_Bool)canSupportKB;
- (double)clampZoomDifference:(double)arg1 kenBurnsPace:(unsigned long long)arg2;
- (void)assignStartAndEndRect;
- (_Bool)backgroundTreatmentRequiredForStartEndRect;
- (void)finishConfiguringKBInfo;
- (struct CGRect)roundValuesInRect:(struct CGRect)arg1;
- (_Bool)canCropRectSafelyFillFrame:(struct CGRect)arg1;
- (struct CGRect)forceFeaturedPersonZoomCrop;
- (_Bool)isTitle;
- (void)prepareInterestingRegions;
- (struct CGRect)noInformationCrop;
- (struct CGRect)forceTitleZoomCrop;
- (void)establishInterestingRegions;
- (struct CGRect)extendAllTheThings:(struct CGRect)arg1;
- (struct CGRect)extendAllTheThings:(struct CGRect)arg1 alignment:(long long)arg2;
- (struct CGRect)interestingRegionsAdjusted;
- (void)_adjustZoomSpeedOfKenBurnsClip;
- (void)_customizePanOnlyKenBurnsClip;
- (void)_customizePortraitKB:(id)arg1 normalizedVerticalCenter:(double)arg2;
- (struct CGRect)_panFrameForStart:(_Bool)arg1;
- (double)_scaleToPanOffsetFromScale:(double)arg1;
- (_Bool)clipRequiresOneUp:(id)arg1;
- (_Bool)clipEligibleForNUpFraming:(id)arg1;
- (void)applyKenBurnsForClip:(id)arg1 kenBurnsStyle:(unsigned long long)arg2 panStyle:(unsigned long long)arg3 kenBurnsPace:(unsigned long long)arg4 maxiumumZoomValue:(double)arg5;

@end
