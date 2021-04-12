//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSDMediaInfo.h>

#import <iWorkImport/KNImplicitAmbientAnimating-Protocol.h>
#import <iWorkImport/TSDCompatibilityAwareMediaContainer-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDPlayableInfo-Protocol.h>

@class NSString, NSURL, TSDMediaStyle, TSPData;

__attribute__((visibility("hidden")))
@interface TSDMovieInfo : TSDMediaInfo <KNImplicitAmbientAnimating, TSDMixing, TSDCompatibilityAwareMediaContainer, TSDPlayableInfo>
{
    TSPData *mMovieData;
    TSPData *mImportedAuxiliaryMovieData;
    NSString *mImportedAuxiliaryMovieDataOriginalFilename;
    BOOL mAudioOnly;
    TSPData *mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    long long mLoopOption;
    float mVolume;
    NSURL *mMovieRemoteURL;
    TSPData *mPosterImageData;
    BOOL mPosterImageGeneratedWithAlphaSupport;
    CGSize mNaturalSize;
    BOOL mStreaming;
    BOOL mNativeAudioRecording;
    TSDMediaStyle *mStyle;
}

+ (id)presetKinds;
+ (double)defaultPosterTimeForDuration:(double)arg1;
@property(nonatomic) long long loopOption; // @synthesize loopOption=mLoopOption;
@property(nonatomic, getter=isStreaming) BOOL streaming; // @synthesize streaming=mStreaming;
@property(retain, nonatomic) TSPData *posterImageData; // @synthesize posterImageData=mPosterImageData;
- (id)style;
// - (void).cxx_destruct;
- (BOOL)shouldShowInPrint;
- (BOOL)willRenderContentViaImager;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (id)promisedTSPDataForType:(id)arg1;
- (id)promisedDataForType:(id)arg1;
- (id)mediaDataForDragging;
- (BOOL)canCopyData;
- (BOOL)needsDownload;
- (BOOL)supportsHyperlinks;
- (int)intValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (id)objectForProperty:(int)arg1;
- (BOOL)containsProperty:(int)arg1;
- (BOOL)supportsAttachedComments;
- (id)p_makePosterImageDataWithAVAsset:(id)arg1 inContext:(id)arg2 time:(double)arg3;
- (id)synchronouslyGenerateNewPosterImageForAsset:(id)arg1 time:(double)arg2;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;
- (id)generateEmptyPosterImageForContext:(id)arg1;
- (id)makePosterImageGeneratorWithAVAsset:(id)arg1;
- (id)makeAVAssetWithOptions:(id)arg1;
- (id)makeAVAsset;
- (void)acceptVisitor:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)animationFilters;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
@property(readonly, nonatomic) BOOL supportsLoopingBackAndForth;
@property(readonly, nonatomic) BOOL supportsLooping;
@property(readonly, nonatomic) BOOL supportsStartTimeAndEndTime;
- (BOOL)isAllowedInGroups;
- (BOOL)canChangeWrapType;
- (Class)repClass;
- (Class)layoutClass;
- (Class)styleClass;
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;
- (BOOL)canBeReplaced;
- (BOOL)canBeMediaPlaceholder;
- (BOOL)canResetMediaSize;
- (CGSize)rawDataSize;
- (id)styleIdentifierTemplateForNewPreset;
- (id)presetKind;
- (BOOL)supportsStyleInspecting;
- (void)setStyle:(id)arg1;
- (id)mediaFileType;
- (id)mediaDisplayName;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
@property(nonatomic, getter=isNativeAudioRecording) BOOL nativeAudioRecording;
@property(nonatomic, getter=isAudioOnly) BOOL audioOnly;
@property(nonatomic) float volume;
@property(nonatomic) double posterTime;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(retain, nonatomic) TSPData *audioOnlyImageData;
@property(copy, nonatomic) NSString *importedAuxiliaryMovieDataOriginalFilename;
@property(retain, nonatomic) TSPData *importedAuxiliaryMovieData;
@property(retain, nonatomic) NSURL *movieRemoteURL;
@property(retain, nonatomic) TSPData *movieData;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct MovieArchive )arg1 archiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct MovieArchive )arg1 unarchiver:(id)arg2;
- (int)elementKind;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
@property(readonly, nonatomic, getter=isImplicitAmbientAnimationInteractive) BOOL implicitAmbientAnimationInteractive;
- (id)newImplicitAmbientBuildRendererWithAnimatedBuild:(id)arg1 buildChunk:(id)arg2 session:(id)arg3 animatedSlideView:(id)arg4;
@property(readonly, nonatomic) NSString *implicitAmbientAnimationEffectIdentifier;
@property(readonly, nonatomic) BOOL canAddImplicitAmbientAnimations;

@end

