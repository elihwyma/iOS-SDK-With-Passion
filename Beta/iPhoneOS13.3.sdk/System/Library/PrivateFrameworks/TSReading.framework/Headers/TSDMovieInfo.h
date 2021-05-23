/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDMediaInfo.h>

@class NSURL, TSDMediaStyle, TSPData;

@interface TSDMovieInfo : TSDMediaInfo

{
    TSPData *mMovieData;
    NSURL *mMovieRemoteURL;
    TSPData *mImportedAuxiliaryMovieData;
    TSPData *mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    TSPData *mPosterImageData;
    struct CGSize mNaturalSize;
    unsigned long long mLoopOption;
    float mVolume;
    _Bool mStreaming;
    int mControlStyle;
    _Bool mAllowsAirPlayVideo;
    _Bool mUsesAirPlayVideoWhileAirPlayScreenIsActive;
    NSURL *mURLForMPMPC;
    TSDMediaStyle *mStyle;
    _Bool mAudioOnly;
}

@property (retain, nonatomic) TSPData *movieData;
@property (retain, nonatomic) NSURL *movieRemoteURL;
@property (retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property (retain, nonatomic) TSPData *audioOnlyImageData;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double posterTime;
@property (retain, nonatomic) TSPData *posterImageData;
@property (nonatomic) unsigned long long loopOption;
@property (nonatomic) float volume;
@property (nonatomic, getter=isAudioOnly) _Bool audioOnly;
@property (nonatomic, getter=isStreaming) _Bool streaming;
@property (nonatomic) _Bool allowsAirPlayVideo;
@property (nonatomic) _Bool usesAirPlayVideoWhileAirPlayScreenIsActive;
@property (retain, nonatomic) NSURL *urlForMPMPC;
@property (nonatomic) int controlStyle;

+ (id)presetKinds;
+ (double)defaultPosterTimeForDuration:(double)arg1;

- (void)dealloc;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (id)mediaFileType;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (Class)repClass;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (float)floatValueForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (id)presetKind;
- (_Bool)supportsAttachedComments;
- (Class)editorClass;
- (_Bool)supportsHyperlinks;
- (_Bool)canChangeWrapType;
- (id)animationFilters;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (Class)styleClass;
- (id)mediaDisplayName;
- (struct CGSize)rawDataSize;
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;
- (id)copyWithContext:(id)arg1 stylesheet:(id)arg2;
- (id)makeAVAssetWithOptions:(id)arg1;
- (id)makeAVAsset;
- (id)makePosterImageGeneratorWithAVAsset:(id)arg1;
- (id)generateEmptyPosterImageForContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;

@end
