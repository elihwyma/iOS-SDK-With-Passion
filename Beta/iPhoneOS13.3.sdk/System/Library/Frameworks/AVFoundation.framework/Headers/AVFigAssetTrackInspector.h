/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVAssetTrackInspector.h>

@class AVDispatchOnce, AVWeakReference, NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVFigAssetTrackInspector : AVAssetTrackInspector

{
    struct OpaqueFigAsset *_figAsset;
    struct OpaqueFigAssetTrack *_figAssetTrack;
    AVDispatchOnce *_copyFigFormatReaderOnce;
    struct OpaqueFigFormatReader *_figFormatReader;
    AVDispatchOnce *_copyFigTrackReaderOnce;
    struct OpaqueFigTrackReader *_figTrackReader;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;
    NSMutableArray *_loadingBatches;
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
- (_Bool)hasProtectedContent;
- (CDStruct_e83c9415)timeRange;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)metadataForFormat:(id)arg1;
- (id)formatDescriptions;
- (id)commonMetadata;
- (id)extendedLanguageTag;
- (long long)totalSampleDataLength;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (float)preferredVolume;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1;
- (int)naturalTimeScale;
- (id)availableMetadataFormats;
- (_Bool)isPlayable;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (_Bool)isDecodable;
- (int)playabilityValidationResult;
- (_Bool)isSelfContained;
- (CDStruct_e83c9415)mediaPresentationTimeRange;
- (CDStruct_e83c9415)mediaDecodeTimeRange;
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;
- (_Bool)requiresFrameReordering;
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
- (_Bool)hasAudibleBooksContent;
- (_Bool)isAudibleBooksContentAuthorized;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (id)_loadingBatches;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg1;
- (unsigned int)_figMediaType;
- (int)decodabilityValidationResult;
- (void)_addFigNotifications;
- (void)_removeFigNotifications;
- (long long)_loadStatusForFigAssetTrackProperty:(id)arg1 error:(id *)arg2;
- (struct OpaqueFigFormatReader *)_figFormatReader;

@end
