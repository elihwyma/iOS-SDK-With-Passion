/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject

{
    AVAssetTrackInternal *_track;
}

@property (weak, nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) int trackID;

+ (_Bool)expectsPropertyRevisedNotifications;
+ (id)mediaCharacteristicsForMediaTypes;
+ (id)keyPathsForValuesAffectingTimeRange;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)locale;
- (id)languageCode;
- (_Bool)isEnabled;
- (id)metadata;
- (id)mediaType;
- (long long)layer;
- (id)segments;
- (struct CGSize)dimensions;
- (_Bool)hasProtectedContent;
- (CDStruct_e83c9415)timeRange;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (_Bool)hasMediaCharacteristic:(id)arg1;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)metadataForFormat:(id)arg1;
- (id)formatDescriptions;
- (id)commonMetadata;
- (id)extendedLanguageTag;
- (CDStruct_1b6d18a9)minFrameDuration;
- (long long)totalSampleDataLength;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)_weakReference;
- (float)preferredVolume;
- (int)naturalTimeScale;
- (id)availableMetadataFormats;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (_Bool)isPlayable;
- (long long)statusOfValueForKey:(id)arg1;
- (_Bool)hasMediaCharacteristics:(id)arg1;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (void)_startListeningToFigAssetTrackNotifications;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (void)_stopListeningToFigAssetTrackNotifications;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (_Bool)isDecodable;
- (int)playabilityValidationResult;
- (_Bool)isSelfContained;
- (id)mediaCharacteristics;
- (CDStruct_e83c9415)mediaPresentationTimeRange;
- (CDStruct_e83c9415)mediaDecodeTimeRange;
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;
- (_Bool)requiresFrameReordering;
- (_Bool)hasAudioSampleDependencies;
- (float)estimatedDataRate;
- (float)peakDataRate;
- (id)loudnessInfo;
- (float)nominalFrameRate;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (long long)alternateGroupID;
- (long long)defaultAlternateGroupID;
- (long long)provisionalAlternateGroupID;
- (_Bool)isExcludedFromAutoselectionInTrackGroup;
- (id)associatedTracksOfType:(id)arg1;
- (id)_firstAssociatedTrackWithAssociationType:(id)arg1;
- (id)_trackReferences;
- (_Bool)hasAudibleBooksContent;
- (_Bool)isAudibleBooksContentAuthorized;
- (id)_assetTrackInspector;
- (_Bool)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg1 flagsMask:(unsigned int)arg2;
- (id)_fallbackTrack;
- (id)_followingTrackAmongTracks:(id)arg1;
- (id)_pairedForcedOnlySubtitlesTrack;
- (id)availableTrackAssociationTypes;
- (_Bool)_hasMultipleEdits;
- (_Bool)_hasScaledEdits;
- (_Bool)_hasEmptyEdits;
- (_Bool)_hasMultipleDistinctFormatDescriptions;
- (_Bool)_firstFormatDescriptionIsLPCM;

@end
