/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

#import <Memories/Swift-Protocol.h>

@class AltClipCollection, ClipBackground, Movie, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL, PHAsset, PVEffect, SpeedRanges, TitleDefinition, VideoMovie;

__attribute__((visibility("hidden")))
@interface KonaClip : NSObject <Swift>

{
    NSMutableDictionary *m_clipDict;
    _Bool placeholder;
    _Bool showActivity;
    _Bool transitionChanged;
    unsigned int _filterEffectSeed;
    int selectionStart;
    int selectionEnd;
    float _sourceStartTime;
    float _sourceDuration;
    TitleDefinition *_titleDefinition;
    NSString *_uuid;
    long long anchorItemIndex;
    SpeedRanges *_speedRanges;
    ClipBackground *_clipBackground;
    AltClipCollection *_altClips;
    double _altAspect;
    id _suggestion;
    id _freezeInfo;
    id _scene;
}

@property (nonatomic, readonly) int minStart;
@property (nonatomic, readonly) int maxEnd;
@property (nonatomic, readonly) int maxDur;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) float speed;
@property (nonatomic, readonly) SpeedRanges *speedRanges;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic, readonly) VideoMovie *videoMovie;
@property (nonatomic) int startTime;
@property (nonatomic) int duration;
@property (nonatomic) int maxDuration;
@property (nonatomic, readonly) float sourceStartTime;
@property (nonatomic, readonly) float sourceDuration;
@property (nonatomic, readonly) int rawSourceDuration;
@property (nonatomic, readonly) NSArray *multiUpContainedClips;
@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) struct CGSize naturalSizeWithTransform;
@property (nonatomic, readonly) _Bool isSlomo;
@property (nonatomic) _Bool audioEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) Movie *movie;
@property (nonatomic) int duration;
@property (nonatomic) int maxDuration;
@property (nonatomic, readonly) int rawSourceDuration;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) float rotation;
@property (retain, nonatomic) NSURL *identifierURL;
@property (nonatomic) int startOffset;
@property (retain, nonatomic) NSString *audioTitle;
@property (retain, nonatomic) NSString *audioArtist;
@property (nonatomic) _Bool audioEnabled;
@property (retain, nonatomic) NSDictionary *movieMapLocation;
@property (nonatomic) int startTime;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) int transitionEatLeft;
@property (nonatomic) int transitionEatRight;
@property (nonatomic) float audioVolume;
@property (retain, nonatomic) NSURL *movieURL;
@property (retain, nonatomic) KonaClip *anchorItem;
@property (nonatomic) int anchorLocalOffset;
@property (nonatomic) int anchorTargetOffset;
@property (retain, nonatomic) KonaClip *precisionSourceClip;
@property (nonatomic) int precisionTrack;
@property (nonatomic) int freezeFrame;
@property (nonatomic) float scaleFactor;
@property (nonatomic) float translateX;
@property (nonatomic) float translateY;
@property (nonatomic) int audioStartOffset;
@property (nonatomic) int audioEndOffset;
@property (nonatomic) int audioFadeInDuration;
@property (nonatomic) int audioFadeOutDuration;
@property (nonatomic) float speed;
@property (retain, nonatomic) SpeedRanges *speedRanges;
@property (retain, nonatomic) PVEffect *filterEffect;
@property (nonatomic, readonly) unsigned int filterEffectSeed;
@property (nonatomic, readonly) PVEffect *titleEffect;
@property (nonatomic) _Bool projectMovie;
@property (retain, nonatomic) KonaClip *nextTransition;
@property (nonatomic) int desiredDuration;
@property (nonatomic) _Bool userEditing;
@property (nonatomic) int userEditedSize;
@property (nonatomic) float sourceStartTime;
@property (nonatomic) float sourceDuration;
@property (retain, nonatomic) SpeedRanges *speedRanges;
@property (nonatomic) unsigned int filterEffectSeed;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) int clipType;
@property (nonatomic, readonly) float frameRate;
@property (nonatomic, readonly) double aspectRatio;
@property (retain, nonatomic) TitleDefinition *titleDefinition;
@property (nonatomic, readonly) _Bool hasTitle;
@property (nonatomic, readonly) int titleDuration;
@property (retain, nonatomic) ClipBackground *clipBackground;
@property (nonatomic) _Bool placeholder;
@property (nonatomic) _Bool showActivity;
@property (nonatomic) _Bool transitionChanged;
@property (nonatomic) int selectionStart;
@property (nonatomic) int selectionEnd;
@property (nonatomic, readonly) _Bool hasSelection;
@property (nonatomic) long long anchorItemIndex;
@property (retain, nonatomic) AltClipCollection *altClips;
@property (nonatomic) double altAspect;
@property (weak, nonatomic) id suggestion;
@property (retain, nonatomic) id freezeInfo;
@property (retain, nonatomic) id scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clip;
+ (id)objectFromPlist:(id)arg1 inProject:(id)arg2;
+ (id)clipWithAsset:(id)arg1;
+ (Class)classForClipType:(int)arg1;
+ (_Bool)audioEnabledByDefault;
+ (id)clipFromPlist:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)fileURL;
- (long long)volume;
- (void)clearSelection;
- (_Bool)isBurst;
- (_Bool)isPrimary;
- (_Bool)canBeDeleted;
- (_Bool)isPano;
- (CDStruct_e83c9415)sourceTimeRange;
- (_Bool)isFreezeFrame;
- (_Bool)hasVisualCharacteristic;
- (_Bool)hasPhotoCharacteristic;
- (struct CGAffineTransform)transform:(struct CGSize)arg1 fillDest:(_Bool)arg2;
- (CDStruct_e83c9415)targetTimeRange;
- (long long)specialTreatment;
- (_Bool)hasAudioCharacteristic;
- (id)sourceClips;
- (_Bool)isIris;
- (_Bool)isMultiUp;
- (int)paddedMaxEnd;
- (int)paddedMinStart;
- (int)paddedMaxDur;
- (id)loadAVAsset;
- (void)loadAVPlayerItemWithCompletionHander:(CDUnknownBlockType)arg1 progressHandler:(CDUnknownBlockType)arg2 networkAccessAllowed:(_Bool)arg3;
- (double)autoEditShortestDurationWithBlueprint:(id)arg1;
- (double)autoEditShortestIdealDurationWithBlueprint:(id)arg1;
- (double)autoEditLongestDurationWithBlueprint:(id)arg1;
- (_Bool)isSpeedAdjustable;
- (id)validationInformation;
- (void)didFinishTrimming;
- (id)deepCopyOntoClip:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)plistRepresentationFromProject:(id)arg1;
- (void)setContentsFromPlist:(id)arg1 inProject:(id)arg2;
- (void)validateEffectRange:(CDStruct_e83c9415)arg1 inProject:(id)arg2;
- (_Bool)clipContentsEqual:(id)arg1;
- (_Bool)canBeDuplicated;
- (void)generateFilterEffectSeed;
- (void)stampNewUUID;
- (void)_addDefaultKeys;
- (void)changedMapFrom:(id)arg1 to:(id)arg2;
- (_Bool)allowsTitle;
- (_Bool)isBackgroundAudio;
- (_Bool)isVideoOverlay;
- (int)titleStartTimeForClipStartTime:(int)arg1;
- (void)initializeFromURL:(id)arg1 asset:(id)arg2;
- (void)updateSourceCaches;

@end
