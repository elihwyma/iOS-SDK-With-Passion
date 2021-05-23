/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <VoiceMemos/Swift-Protocol.h>

@protocol RCSSavedRecordingServiceProtocol <Swift>

- (unsigned short)importRecordingWithSourceAudioURL:name:date:importCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSearchMetadataWithRecordingURIsToInsert:recordingURIsToUpdate:recordingURIsToDelete:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToCaptureToCompositionAVURL:accessRequestHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performDatabaseMigrationWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enableCloudRecordingsWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)disableCloudRecordingsSaveLocalCopies:withCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)importRecordingsFromCloud: /* Error: Ran out of types for this method. */;
- (unsigned short)exportRecordingsToCloud: /* Error: Ran out of types for this method. */;
- (unsigned short)expungeRecordingsFromCloud: /* Error: Ran out of types for this method. */;
- (unsigned short)openAudioFile:settings:accessRequestHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)closeAudioFile:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)writeAudioFile:buffer:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToPreviewCompositionAVURL:accessRequestHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToExportCompositionAVURL:cacheWaveform:accessRequestHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)prepareToTrimCompositionAVURL:accessRequestHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAllUserDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)endAccessSessionWithToken:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)disableOrphanedFragmentCleanupForCompositionAVURL:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enableOrphanedFragmentCleanupForCompositionAVURL: /* Error: Ran out of types for this method. */;
- (unsigned short)disableOrphanHandlingWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enableOrphanHandlingWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCompositionAVURLsBeingExported: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchCompositionAVURLsBeingModified: /* Error: Ran out of types for this method. */;
- (unsigned short)_fetchAllAccessTokens: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadExistingSearchMetadataWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAndReloadSearchMetadataWithCompletionBlock: /* Error: Ran out of types for this method. */;

@end
