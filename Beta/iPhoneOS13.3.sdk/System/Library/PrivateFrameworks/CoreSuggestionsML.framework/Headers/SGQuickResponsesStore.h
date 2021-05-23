/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class _PASLock;

@interface SGQuickResponsesStore : NSObject

{
    _PASLock *_readerWriter;
}

+ (id)sharedInstance;
+ (id)keyWithLanguage:(id)arg1 andResponse:(id)arg2;
+ (id)instanceInMemory;

- (id)init;
- (_Bool)frailWriteTransaction:(CDUnknownBlockType)arg1;
- (_Bool)frailReadTransaction:(CDUnknownBlockType)arg1;
- (void)designateFilteringBatch:(unsigned long long)arg1;
- (void)recordKnownCustomResponsesInBatchWithEmbedder:(CDUnknownBlockType)arg1 compatibilityVersion:(unsigned long long)arg2;
- (unsigned long long)countCustomResponsesAfterPruningWithMinimumCountThreshold:(unsigned long long)arg1;
- (void)filterBatchWithMinimumDistinctRecipients:(unsigned long long)arg1 minimumReplyOccurences:(unsigned long long)arg2;
- (void)recordMessagesInBatchAsCustomResponsesWithEmbedder:(CDUnknownBlockType)arg1 compatibilityVersion:(unsigned long long)arg2;
- (void)decayAllCustomResponsesWithDecayFactor:(double)arg1 filteringBatchSize:(int)arg2;
- (void)markFilteringBatchCompleted;
- (_Bool)addingMessageExceedsBatchLimit:(unsigned long long)arg1 tableLimit:(unsigned long long)arg2 message:(id)arg3 language:(id)arg4 prompt:(id)arg5 recipientHandle:(id)arg6 sentAt:(id)arg7;
- (id)initInDirectory:(id)arg1 inMemory:(_Bool)arg2 withMigration:(_Bool)arg3;
- (id)initInDirectory:(id)arg1 inMemory:(_Bool)arg2 withMigration:(_Bool)arg3 forTools:(_Bool)arg4;
- (id)recordsForResponses:(id)arg1 language:(id)arg2;
- (void)addDisplayedToResponses:(id)arg1 language:(id)arg2;
- (void)addSelectedToResponse:(id)arg1 language:(id)arg2;
- (void)addWrittenToResponse:(id)arg1 language:(id)arg2 isMatch:(_Bool)arg3;
- (id)embeddingForPrompt:(id)arg1 inLanguage:(id)arg2 withEmbedder:(CDUnknownBlockType)arg3;
- (id)getProfanityLocale;
- (id)getModelVersion;
- (void)setProfanityLocale:(id)arg1 andModelVersion:(long long)arg2;
- (_Bool)resetDbIfNeededCompareWithCompatibilityVersion:(unsigned long long)arg1;
- (id)nearestCustomResponsesToPromptEmbedding:(id)arg1 withLimit:(unsigned long long)arg2 withinRadius:(float)arg3 responseCountExponent:(float)arg4 minimumDecayedCount:(float)arg5 compatibilityVersion:(unsigned long long)arg6 inLanguage:(id)arg7 inLocale:(id)arg8 allowProfanity:(_Bool)arg9 minimumTimeInterval:(double)arg10;
- (void)destroyInstanceInMemory;

@end
