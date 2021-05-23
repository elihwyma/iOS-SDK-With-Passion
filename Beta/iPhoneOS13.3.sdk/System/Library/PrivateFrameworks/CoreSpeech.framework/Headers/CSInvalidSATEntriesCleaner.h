/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@interface CSInvalidSATEntriesCleaner : NSObject

- (id)init;
- (id)cleanupInvalidSATEntriesAtSATRoot:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(_Bool)arg3;
- (void)_cleanupInvalidModelsForAsset:(id)arg1;
- (void)_cleanupImplicitUtteranceCache;
- (id)_cleanupOrphanedMetafilesForLanguage:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(_Bool)arg3;
- (id)_cleanupOrphanedMetafilesAtURL:(id)arg1 dryRun:(_Bool)arg2;
- (id)_cleanupPayloadUtterancesExceedingLifeTimeInDays:(long long)arg1 forType:(unsigned long long)arg2 forLanguageCode:(id)arg3 dryRun:(_Bool)arg4;
- (id)_cleanupContentsOfSatFolderWithLanguageCode:(id)arg1 dryRun:(_Bool)arg2;
- (id)_cleanupInvalidAudioFiles:(id)arg1 dryRun:(_Bool)arg2;
- (void)_cleanupModelFilesAtDir:(id)arg1 forAsset:(id)arg2;
- (void)sanitizeSATFilesWithAsset:(id)arg1;

@end
