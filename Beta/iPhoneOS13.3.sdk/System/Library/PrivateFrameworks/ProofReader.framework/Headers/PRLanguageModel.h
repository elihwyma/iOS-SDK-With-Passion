/*
 Image: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
 */

#import <Foundation/NSObject.h>

@class NSString, PRLexicon;

__attribute__((visibility("hidden")))
@interface PRLanguageModel : NSObject

{
    NSString *_localization;
    NSString *_appIdentifier;
    void *_model;
    PRLexicon *_lexicon;
}

+ (void)setLogLevel:(long long)arg1;
+ (id)languageModelWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3;
+ (void)performMaintenance;

- (void)dealloc;
- (id)description;
- (void)reset;
- (id)appIdentifier;
- (id)localization;
- (void)flushDynamicData;
- (unsigned int)tokenIDForString:(id)arg1;
- (id)stringForTokenID:(unsigned int)arg1;
- (_Bool)tokenSequenceIsBlacklisted:(const unsigned int *)arg1 length:(unsigned long long)arg2;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePredictionsForContext:(const unsigned int *)arg1 length:(unsigned long long)arg2 maxPredictions:(unsigned long long)arg3 maxTokensPerPrediction:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;
- (_Bool)getUnigramProbabilityForString:(id)arg1 probability:(double *)arg2;
- (_Bool)getConditionalProbabilityForTokenID:(unsigned int)arg1 context:(const unsigned int *)arg2 length:(unsigned long long)arg3 probability:(double *)arg4;
- (_Bool)getFirstDynamicTokenID:(unsigned int *)arg1 lastDynamicTokenID:(unsigned int *)arg2;
- (float)usageCountForTokenID:(unsigned int)arg1;
- (id)initWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3;
- (_Bool)addTokenForString:(id)arg1 tokenID:(unsigned int *)arg2;
- (_Bool)shouldAdaptToTokenSequence:(const unsigned int *)arg1 length:(unsigned long long)arg2;
- (void)incrementUsageCountForTokenID:(unsigned int)arg1 context:(const unsigned int *)arg2 length:(unsigned long long)arg3;
- (void)recordWithDifferentialPrivacy:(id)arg1;
- (void)countDynamicNgramsForOrder:(unsigned long long)arg1 threshold:(float)arg2 dynamicModelCount:(unsigned long long *)arg3 cacheCount:(unsigned long long *)arg4;
- (void)applyExponentialDecay;
- (void)pruneToSize:(unsigned long long)arg1;

@end
