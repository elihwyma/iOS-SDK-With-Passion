/*
 Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

#import <Foundation/NSObject.h>

@interface VTInvalidSATEntriesCleaner : NSObject

+ (id)cleanupOrphanedMetafilesForLanguage:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(_Bool)arg3;
+ (id)cleanupOrphanedMetafilesAtURL:(id)arg1 dryRun:(_Bool)arg2;
+ (id)cleanupPayloadUtterancesExceedingLifeTimeInDays:(long long)arg1 forType:(unsigned long long)arg2 forLanguageCode:(id)arg3 dryRun:(_Bool)arg4;
+ (id)cleanupInvalidSATEntriesAtSATRoot:(id)arg1 payloadUtteranceLifeTimeInDays:(long long)arg2 dryRun:(_Bool)arg3;

@end
