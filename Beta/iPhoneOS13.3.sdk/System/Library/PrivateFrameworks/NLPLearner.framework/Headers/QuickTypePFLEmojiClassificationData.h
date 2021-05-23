/*
 Image: /System/Library/PrivateFrameworks/NLPLearner.framework/NLPLearner
 */

#import <NLPLearner/QuickTypePFLTrainingData.h>

@class NSDictionary, NSLocale, NSMutableArray, NSNumber;

__attribute__((visibility("hidden")))
@interface QuickTypePFLEmojiClassificationData : QuickTypePFLTrainingData

{
    NSMutableArray *_labels;
    NSDictionary *_labelClasses;
    NSLocale *_locale;
    NSNumber *_noneClassProbability;
    struct CFScopedPtr<void *> _embedding;
    unsigned long long _embeddingDimension;
}

@property (nonatomic, readonly) NSDictionary *labelClasses;
@property (nonatomic, readonly) unsigned long long numOutputClasses;
@property (nonatomic, readonly) unsigned long long embeddingDimension;

+ (void)initialize;

- (id)initWithLocale:(id)arg1;
- (id).cxx_construct;
- (void)addResource:(id)arg1;
- (_Bool)addExamples:(id)arg1;
- (_Bool)loadFromCoreDuet:(id)arg1;
- (id)getTrainingDataBatch:(unsigned long long)arg1;
- (id)getEvaluationDataPoint;
- (void)sampleNoneClassExample:(id)arg1;

@end
