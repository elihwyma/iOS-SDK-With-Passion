/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVFigObjectInspector.h>

@class AVDispatchOnce, AVWeakReference, NSArray, NSDictionary, NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetTrackInspector : AVFigObjectInspector

{
    AVWeakReference *_weakReference;
    AVDispatchOnce *_synthesizeMediaCharacteristicsOnce;
    NSArray *_cachedMediaCharacteristics;
}

@property (nonatomic, readonly) int trackID;
@property (nonatomic, readonly, getter=_figMediaType) unsigned int figMediaType;
@property (nonatomic, readonly, getter=_figTrackReader) struct OpaqueFigTrackReader *figTrackReader;
@property (nonatomic, readonly, getter=_figAssetTrack) struct OpaqueFigAssetTrack *figAssetTrack;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSArray *formatDescriptions;
@property (nonatomic, readonly, getter=isPlayable) _Bool playable;
@property (nonatomic, readonly, getter=isDecodable) _Bool decodable;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly, getter=isSelfContained) _Bool selfContained;
@property (nonatomic, readonly) long long totalSampleDataLength;
@property (nonatomic, readonly) CDStruct_e83c9415 timeRange;
@property (nonatomic, readonly) CDStruct_e83c9415 mediaPresentationTimeRange;
@property (nonatomic, readonly) CDStruct_e83c9415 mediaDecodeTimeRange;
@property (nonatomic, readonly) CDStruct_1b6d18a9 latentBaseDecodeTimeStampOfFirstTrackFragment;
@property (nonatomic, readonly) _Bool requiresFrameReordering;
@property (nonatomic, readonly) int naturalTimeScale;
@property (nonatomic, readonly) float estimatedDataRate;
@property (nonatomic, readonly) float peakDataRate;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSArray *mediaCharacteristics;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic, readonly) struct CGAffineTransform preferredTransform;
@property (nonatomic, readonly) long long layer;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) _Bool hasAudioSampleDependencies;
@property (nonatomic, readonly) NSDictionary *loudnessInfo;
@property (nonatomic, readonly) float nominalFrameRate;
@property (nonatomic, readonly) CDStruct_1b6d18a9 minSampleDuration;
@property (copy, nonatomic, readonly) NSArray *segments;
@property (nonatomic, readonly) NSArray *commonMetadata;
@property (nonatomic, readonly) NSArray *availableMetadataFormats;
@property (nonatomic, readonly) long long alternateGroupID;
@property (nonatomic, readonly) long long defaultAlternateGroupID;
@property (nonatomic, readonly) long long provisionalAlternateGroupID;
@property (nonatomic, readonly, getter=isExcludedFromAutoselectionInTrackGroup) _Bool excludedFromAutoselectionInTrackGroup;
@property (nonatomic, readonly) struct CGSize dimensions;
@property (nonatomic, readonly, getter=_trackReferences) NSDictionary *trackReferences;
@property (nonatomic, readonly) _Bool hasProtectedContent;
@property (nonatomic, readonly) _Bool hasAudibleBooksContent;
@property (nonatomic, readonly) _Bool isAudibleBooksContentAuthorized;
@property (nonatomic, readonly) int playabilityValidationResult;

+ (id)assetTrackInspectorWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)metadataForFormat:(id)arg1;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)_weakReference;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;

@end
