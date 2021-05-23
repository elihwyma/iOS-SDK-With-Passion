/*
 Image: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
 */

#import <NLPLearner/QuickTypePFLTrainingData.h>

@class NSLocale, NSString;

__attribute__((visibility("hidden")))
@interface QuickTypePFLLanguageModelingData : QuickTypePFLTrainingData

{
    NSLocale *_locale;
    struct CFScopedPtr<const _LXLexicon *> _lexicon;
    NSString *_tokenIDMapPath;
}

@property (copy, nonatomic) NSString *tokenIDMapPath;

+ (void)initialize;
+ (unsigned long long)defaultMaxSequenceLength;

- (id)initWithLocale:(id)arg1;
- (id).cxx_construct;
- (void)addResource:(id)arg1;
- (_Bool)addExamples:(id)arg1;
- (_Bool)loadFromCoreDuet:(id)arg1;
- (id)getTrainingDataBatch:(unsigned long long)arg1;
- (id)getEvaluationDataPoint;

@end
