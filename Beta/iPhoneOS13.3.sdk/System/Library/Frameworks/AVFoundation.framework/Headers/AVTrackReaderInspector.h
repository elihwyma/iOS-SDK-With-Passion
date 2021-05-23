/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVTrackReaderInspector : AVAssetTrackInspector

{
    struct OpaqueFigFormatReader *_formatReader;
    struct OpaqueFigTrackReader *_trackReader;
    int _trackID;
    unsigned int _mediaType;
    AVWeakReference *_weakReferenceToAsset;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)languageCode;
- (_Bool)isEnabled;
- (int)trackID;
- (id)mediaType;
- (id)asset;
- (long long)layer;
- (id)segments;
- (struct CGSize)dimensions;
- (CDStruct_e83c9415)timeRange;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (id)metadataForFormat:(id)arg1;
- (id)formatDescriptions;
- (id)commonMetadata;
- (id)extendedLanguageTag;
- (long long)totalSampleDataLength;
- (float)preferredVolume;
- (int)naturalTimeScale;
- (id)availableMetadataFormats;
- (_Bool)isPlayable;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (_Bool)isDecodable;
- (int)playabilityValidationResult;
- (_Bool)isSelfContained;
- (id)mediaCharacteristics;
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;
- (_Bool)requiresFrameReordering;
- (_Bool)hasAudioSampleDependencies;
- (float)estimatedDataRate;
- (float)peakDataRate;
- (id)loudnessInfo;
- (float)nominalFrameRate;
- (CDStruct_1b6d18a9)minSampleDuration;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (long long)alternateGroupID;
- (long long)defaultAlternateGroupID;
- (long long)provisionalAlternateGroupID;
- (_Bool)isExcludedFromAutoselectionInTrackGroup;
- (id)_trackReferences;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (unsigned int)_figMediaType;
- (int)decodabilityValidationResult;

@end
