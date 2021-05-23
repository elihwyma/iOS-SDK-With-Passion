/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, NSURL;

@interface RCComposition : NSObject

{
    _Bool _cachedComposedAVURLDurationIsValid;
    _Bool _readonly;
    NSArray *_composedFragments;
    NSString *_savedRecordingUUID;
    NSDate *_creationDate;
    NSURL *_composedAVURL;
    NSURL *_composedWaveformURL;
    NSArray *_decomposedFragments;
    NSString *_title;
    double _cachedComposedAVURLDuration;
    NSObject *_composedFragmentsMutex;
}

@property (retain, nonatomic) NSString *savedRecordingUUID;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *decomposedFragments;
@property (nonatomic) _Bool cachedComposedAVURLDurationIsValid;
@property (nonatomic) double cachedComposedAVURLDuration;
@property (nonatomic) _Bool readonly;
@property (retain, nonatomic) NSArray *composedFragments;
@property (retain, nonatomic) NSObject *composedFragmentsMutex;
@property (nonatomic, readonly) _Bool isContentBeingModified;
@property (nonatomic, readonly) NSURL *composedAVURL;
@property (nonatomic, readonly) NSURL *composedWaveformURL;
@property (nonatomic, readonly) double composedDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)migrateBackupExclusionFlag:(id)arg1;
+ (void)deleteFromFilesystem:(id)arg1;
+ (id)compositionLoadedForSavedRecording:(id)arg1;
+ (id)_compositionMetadataURLForCompositionBundleURL:(id)arg1;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 composedAVURL:(id)arg2 savedRecordingUUID:(id)arg3 creationDate:(id)arg4 createIfNeeded:(_Bool)arg5;
+ (id)compositionMetadataURLForComposedAVURL:(id)arg1;
+ (id)_compositionLoadedFromMetadataURL:(id)arg1 savedRecording:(id)arg2;
+ (_Bool)_isSessionWithModificationAccessActiveForComposedAVURL:(id)arg1;
+ (id)_compositionFragmentsFolderForComposedAVURL:(id)arg1;
+ (id)compositionLoadedForSavedRecordingUUID:(id)arg1;
+ (id)compositionLoadedForComposedAVURL:(id)arg1 createIfNeeded:(_Bool)arg2;
+ (id)compositionBundleURLForComposedAVURL:(id)arg1;
+ (id)_unitTestingCompositionWithDecomposedFragments:(id)arg1;
+ (id)compositionLoadedFromCompositionBundleURL:(id)arg1;
+ (id)compositionLoadedForEditingSavedRecording:(id)arg1 error:(id *)arg2;
+ (id)compositionWithComposedAVURL:(id)arg1;
+ (_Bool)excludeFromBackup:(id)arg1 error:(id *)arg2;
+ (_Bool)includeInBackup:(id)arg1 error:(id *)arg2;
+ (_Bool)_markCompositionAVURLsBeingModified:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionaryPListRepresentation:(id)arg1;
- (id)dictionaryPListRepresentation;
- (void)deleteFromFilesystem;
- (unsigned long long)fileSizeOfAssetsIncludingRelatedResources:(_Bool)arg1;
- (id)_calculateComposedFragments;
- (id)_initWithComposedAVURL:(id)arg1 savedRecordingUUID:(id)arg2 creationDate:(id)arg3 title:(id)arg4 decomposedFragments:(id)arg5 composedFragments:(id)arg6;
- (id)_initWithSavedRecording:(id)arg1 decomposedFragments:(id)arg2 composedFragments:(id)arg3;
- (id)newRandomFragmentWithInsertionTimeRangeInComposition:(CDStruct_73a5d3ca)arg1 pathExtension:(id)arg2;
- (_Bool)saveMetadataToDefaultLocation;
- (double)_composedDuration;
- (unsigned long long)_fileSizeOfComposedAssetsIncludingRelatedResources:(_Bool)arg1;
- (id)compositionByClippingToComposedTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)composedFragmentsIntersectingTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)_privateModel;
- (id)_compositionByReplacingDecomposedFragments:(id)arg1;
- (void)_eaccess_saveCompositionAndRecordingDuration:(_Bool)arg1;
- (id)_eaccess_repairDecomposedFragmentMetadataIfNecessaryAndSave:(_Bool)arg1;
- (void)enumerateOrphanedFragmentsWithBlock:(CDUnknownBlockType)arg1;
- (void)setSavedRecordingUUIDFromRecoveredRecordingUUID:(id)arg1;
- (unsigned long long)estimatedFileSizeOfComposedAssetIncludingRelatedResources:(_Bool)arg1;
- (id)compositionByDeletingAndSplittingAtComposedTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)compositionByAppendingFragment:(id)arg1;
- (id)compositionByOverdubbingWithFragment:(id)arg1;
- (id)compositionByReloadingFromDefaultMetadataLocation;
- (id)compositionByDuplicatingResourcesToDestinationComposedAVURL:(id)arg1;
- (void)recacheComposedDuration;
- (void)rcs_composeToFinalDestinationAndDeleteDecomposedFragments:(_Bool)arg1 composeWaveform:(_Bool)arg2 canGenerateWaveformByProcessingAVURL:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)rcs_repairDecomposedFragmentMetadataIfNecessary;
- (id)compositionAsset;
- (id)playableAsset;

@end
