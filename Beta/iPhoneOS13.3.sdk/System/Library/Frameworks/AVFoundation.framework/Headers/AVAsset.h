/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetInternal, AVDisplayCriteria, NSArray;

@protocol AVLoggingIdentifier;

@interface AVAsset : NSObject

{
    AVAssetInternal *_asset;
}

@property (readonly) NSArray *availableChapterLocales;
@property (nonatomic, readonly) long long moovAtomSize;
@property (nonatomic, readonly) NSArray *fragments;
@property (retain, nonatomic, readonly) id <AVLoggingIdentifier> loggingIdentifier;
@property (nonatomic, readonly) id propertyListForProxy;
@property (nonatomic, readonly) _Bool isProxy;
@property (nonatomic, readonly) CDStruct_1b6d18a9 duration;
@property (nonatomic, readonly) float preferredRate;
@property (nonatomic, readonly) float preferredVolume;
@property (nonatomic, readonly) struct CGAffineTransform preferredTransform;
@property (nonatomic, readonly) struct CGSize naturalSize;
@property (nonatomic, readonly) AVDisplayCriteria *preferredDisplayCriteria;
@property (nonatomic, readonly) CDStruct_1b6d18a9 minimumTimeOffsetFromLive;

+ (id)assetWithURL:(id)arg1;
+ (id)assetWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
+ (id)makeAssetLoggingIdentifier;
+ (id)assetWithURL:(id)arg1 figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg2 trackIDs:(id)arg3 dynamicBehavior:(_Bool)arg4;
+ (_Bool)expectsPropertyRevisedNotifications;
+ (_Bool)supportsPlayerItems;
+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)inspectionOnlyAssetWithFigAsset:(struct OpaqueFigAsset *)arg1;
+ (id)inspectionOnlyAssetWithStreamDataParser:(id)arg1 tracks:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)creationDate;
- (id)metadata;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (_Bool)hasProtectedContent;
- (id)tracksWithMediaType:(id)arg1;
- (id)tracks;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)metadataForFormat:(id)arg1;
- (id)commonMetadata;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (void)cancelLoading;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (CDStruct_1b6d18a9)overallDurationHint;
- (id)_weakReference;
- (struct OpaqueFigAsset *)_figAsset;
- (id)availableChapterLanguages;
- (id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (_Bool)_isStreaming;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (_Bool)_mindsFragments;
- (double)_fragmentMindingInterval;
- (void)_setFragmentMindingInterval:(double)arg1;
- (void)_setIsAssociatedWithFragmentMinder:(_Bool)arg1;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGSize)maximumVideoResolution;
- (id)availableVideoDynamicRanges;
- (int)naturalTimeScale;
- (_Bool)providesPreciseDurationAndTiming;
- (id)alternateTrackGroups;
- (id)trackGroups;
- (id)trackWithTrackID:(int)arg1;
- (id)_firstTrackGroupWithMediaTypes:(id)arg1;
- (id)_mediaSelectionGroupDictionaries;
- (id)preferredMediaSelection;
- (id)availableMediaCharacteristicsWithMediaSelectionOptions;
- (id)trackReferences;
- (id)lyrics;
- (id)availableMetadataFormats;
- (id)tracksWithMediaCharacteristics:(id)arg1;
- (void)_serverHasDied;
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
- (void)_setLoggingIdentifier:(id)arg1;
- (id)_nameForLogging;
- (id)_comparisonToken;
- (long long)statusOfValueForKey:(id)arg1;
- (void)_loadValuesSynchronouslyForKeys:(id)arg1 trackKeys:(id)arg2;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (id)_absoluteURL;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (_Bool)_needsLegacyChangeNotifications;
- (unsigned long long)referenceRestrictions;
- (id)audioAlternatesTrackGroup;
- (id)subtitleAlternatesTrackGroup;
- (id)mediaSelectionGroupForPropertyList:(id)arg1 mediaSelectionOption:(id *)arg2;
- (id)allMediaSelections;
- (id)_ID3Metadata;
- (id)_tracksWithClass:(Class)arg1;
- (void)_tracksDidChange;
- (id)compatibleTrackForCompositionTrack:(id)arg1;
- (_Bool)_hasResourceLoaderDelegate;
- (void)_handleURLRequest:(id)arg1;
- (void)_loadChapterInfo;
- (id)_chapterDataTypeForMediaSubType:(int)arg1;
- (unsigned long long)_addChapterMetadataItem:(id)arg1 timeRange:(CDStruct_e83c9415)arg2 toChapters:(id)arg3 fromIndex:(unsigned long long)arg4;
- (id)_chapterMetadataGroupsWithFigChapterGroups:(id)arg1 titleLanguage:(id)arg2 containingItemsWithCommonKeys:(id)arg3;
- (id)_availableCanonicalizedChapterLanguages;
- (id)_chapterMetadataGroupsWithTitleLanguage:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)chapterMetadataGroupsBestMatchingPreferredLanguages:(id)arg1;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (id)_chapterTracks;
- (_Bool)_containsAtLeastOnePlayableAudioTrack;
- (_Bool)_containsAtLeastOnePlayableVideoTrack;
- (id)_exportURL;
- (int)unusedTrackID;
- (id)makePropertyListForProxyWithOptions:(id)arg1;

@end
