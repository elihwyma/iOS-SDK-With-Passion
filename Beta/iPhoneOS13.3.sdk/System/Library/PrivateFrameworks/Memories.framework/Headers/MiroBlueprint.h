/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@protocol MiroBlueprintEditStyleProtocol, MiroBlueprintMusicInfoProtocol, MiroBlueprintTitleStyleProtocol;

__attribute__((visibility("hidden")))
@interface MiroBlueprint : NSObject

{
    _Bool _songIsLocked;
    _Bool _titleIsLocked;
    unsigned int _randomizerSeed;
    NSString *_flexMusicID;
    NSString *_titleID;
    NSString *_editStyleID;
    NSArray *_moodIDs;
    NSMutableDictionary *_moodDictionary;
    unsigned long long _iTunesMediaID;
    unsigned long long _iCloudMusicMediaID;
    unsigned long long _iCloudMusicAccountID;
    NSString *_projectFilterID;
    NSString *_songID;
    NSArray *_requestedKeywords;
    NSDictionary *_requestedMusicGenreDistribution;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *effectID;
@property (nonatomic, readonly) NSString *fontName;
@property (nonatomic, readonly) NSDictionary *parametersDictionary;
@property (nonatomic, readonly) NSString *titleAndAnimationStyleDescription;
@property (nonatomic, readonly) _Bool titleRequestsColorAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long songPace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *burstStyleNames;
@property (nonatomic, readonly) NSDictionary *healingEditTransitionDictionary;
@property (nonatomic, readonly) NSArray *transitionsAsDictionaries;
@property (nonatomic, readonly) NSArray *multiUpTransitionsAsDictionaries;
@property (nonatomic, readonly) NSArray *multiUpTransitionDictionaries;
@property (nonatomic, readonly) NSArray *expandedMultiUpTransitionDictionaries;
@property (nonatomic, readonly) double maxZoomLevel;
@property (nonatomic, readonly) _Bool extremeZoomAllowed;
@property (nonatomic, readonly) NSArray *allowedCropTreatments;
@property (nonatomic, readonly) _Bool defaultCameraMotionIsPan;
@property (nonatomic, readonly) _Bool sweepingPansAllowed;
@property (nonatomic, readonly) _Bool centerOnFrame;
@property (nonatomic, readonly) _Bool healingTransitionsAllowed;
@property (nonatomic, readonly) NSString *sequentialNUpEffect;
@property (nonatomic, readonly) double hardCutPercentage;
@property (nonatomic, readonly) double kenBurnsAnyStillPercentage;
@property (nonatomic, readonly) _Bool isMoodDictionaryPopulated;
@property (retain, nonatomic) NSArray *moodIDs;
@property (retain, nonatomic) NSMutableDictionary *moodDictionary;
@property (nonatomic, readonly) NSString *flexMusicID;
@property (retain, nonatomic) NSString *songID;
@property (copy, nonatomic) NSArray *requestedKeywords;
@property (copy, nonatomic) NSDictionary *requestedMusicGenreDistribution;
@property (nonatomic) unsigned long long iTunesMediaID;
@property (nonatomic) unsigned long long iCloudMusicMediaID;
@property (nonatomic) unsigned long long iCloudMusicAccountID;
@property (copy, nonatomic) NSString *projectFilterID;
@property (nonatomic) _Bool songIsLocked;
@property (nonatomic) _Bool titleIsLocked;
@property (nonatomic) unsigned int randomizerSeed;
@property (nonatomic, readonly) NSString *moodID;
@property (nonatomic, readonly) NSString *titleID;
@property (nonatomic, readonly) NSString *editStyleID;
@property (nonatomic, readonly) NSDictionary *titleStyleDictionary;
@property (nonatomic, readonly) id debugSingleTransitionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double videoMinDuration;
@property (nonatomic, readonly) double videoIdealDuration;
@property (nonatomic, readonly) double videoMaxDuration;
@property (nonatomic, readonly) double photoMinDuration;
@property (nonatomic, readonly) double photoIdealDuration;
@property (nonatomic, readonly) double photoMaxDuration;
@property (nonatomic, readonly) double titleMinDuration;
@property (nonatomic, readonly) double titleIdealDuration;
@property (nonatomic, readonly) double irisMinDuration;
@property (nonatomic, readonly) double irisIdealDuration;
@property (nonatomic, readonly) double irisMaxDuration;
@property (nonatomic, readonly) double burstMinDuration;
@property (nonatomic, readonly) double burstIdealDuration;
@property (nonatomic, readonly) double sloMoMinDuration;
@property (nonatomic, readonly) double sloMoIdealDuration;
@property (nonatomic, readonly) double timelapseMinDuration;
@property (nonatomic, readonly) double timelapseIdealDuration;
@property (nonatomic, readonly) double halfBarDuration;
@property (nonatomic, readonly) unsigned long long toneTreatment;
@property (nonatomic, readonly) id <MiroBlueprintMusicInfoProtocol> musicInfo;
@property (nonatomic, readonly) id <MiroBlueprintTitleStyleProtocol> titleStyle;
@property (nonatomic, readonly) id <MiroBlueprintEditStyleProtocol> editStyle;

+ (_Bool)supportsSecureCoding;
+ (id)blueprint;
+ (id)blueprintWithMood:(id)arg1;
+ (id)emptyBlueprint;
+ (id)keysAffectingAutoEdit;
+ (id)blueprintFromSerializedDictionaryRepresentation:(id)arg1;
+ (id)nominalBlueprint;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)blueprintDiffersFromBlueprint:(id)arg1;
- (id)dictionaryRepresentationForSerialization;
- (double)idealDurationForAsset:(id)arg1;
- (double)panoMinDurationWithMultiplier:(double)arg1;
- (double)panoMaxDurationWithMultiplier:(double)arg1;
- (double)panoIdealDurationWithMultiplier:(double)arg1;
- (id)blueprintWithMood:(id)arg1;
- (id)titleStyleToFontMap;
- (struct DurationTriplet)durationsForAsset:(id)arg1;
- (double)_videoMinDuration;
- (double)_videoIdealDuration;
- (double)_videoMaxDuration;
- (id)_pacingKey;
- (id)_moodPaceKey;
- (double)moodPacingMultiplier;
- (double)_photoMinDuration;
- (double)_photoIdealDuration;
- (double)_photoMaxDuration;
- (double)minimumDurationForAsset:(id)arg1;
- (_Bool)durationIsNearVideoIdeal:(double)arg1;
- (double)maximumDurationForAsset:(id)arg1;

@end
