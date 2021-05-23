/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetInspector.h>

@class AVDispatchOnce, AVDisplayCriteria, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface AVFigAssetInspector : AVAssetInspector

{
    struct OpaqueFigAsset *_figAsset;
    struct OpaqueFigFormatReader *_formatReader;
    AVDispatchOnce *_formatReaderOnce;
    AVDispatchOnce *_checkIsStreamingOnce;
    AVDispatchOnce *_makeDisplayCriteriaOnce;
    AVDisplayCriteria *_displayCriteria;
    _Bool _isStreaming;
    _Bool didCheckForSaveRestriction;
    _Bool hasSaveRestriction;
}

@property (nonatomic, readonly, getter=_figAsset) struct OpaqueFigAsset *figAsset;
@property (nonatomic, readonly, getter=_formatReader) struct OpaqueFigFormatReader *formatReader;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSArray *figChapterGroupInfo;
@property (nonatomic, readonly) NSArray *figChapters;
@property (nonatomic, readonly) NSURL *resolvedURL;
@property (nonatomic, readonly) NSURL *originalNetworkContentURL;
@property (nonatomic, readonly) _Bool hasProtectedContent;
@property (nonatomic, readonly, getter=_isStreaming) _Bool streaming;
@property (nonatomic, readonly) unsigned long long downloadToken;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (CDStruct_1b6d18a9)duration;
- (id)creationDate;
- (id)_instanceIdentifier;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (id)metadataForFormat:(id)arg1;
- (id)commonMetadata;
- (CDStruct_1b6d18a9)overallDurationHint;
- (float)preferredRate;
- (float)preferredVolume;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGSize)maximumVideoResolution;
- (id)availableVideoDynamicRanges;
- (id)preferredDisplayCriteria;
- (CDStruct_1b6d18a9)minimumTimeOffsetFromLive;
- (int)naturalTimeScale;
- (_Bool)providesPreciseDurationAndTiming;
- (id)alternateTrackGroups;
- (id)_mediaSelectionGroupDictionaries;
- (id)trackReferences;
- (id)lyrics;
- (id)availableMetadataFormats;
- (long long)trackCount;
- (_Bool)isPlayable;
- (_Bool)isExportable;
- (_Bool)isReadable;
- (_Bool)isComposable;
- (_Bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;
- (_Bool)isCompatibleWithSavedPhotosAlbum;
- (_Bool)isCompatibleWithAirPlayVideo;
- (_Bool)canContainFragments;
- (_Bool)containsFragments;
- (_Bool)supportsAnalysisReporting;
- (id)_assetAnalysisMessages;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;
- (id)identifyingTagClass;
- (id)identifyingTag;
- (id)SHA1Digest;
- (id)propertyListForProxy;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
- (_Bool)_hasQTSaveRestriction;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (id)_nameForProxy;

@end
