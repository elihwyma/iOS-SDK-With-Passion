/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@interface _INAggregator : NSObject

+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)arg1;
+ (_Bool)_canReportDistributionOfVocabularyStringType:(long long)arg1;
+ (id)_distributionKeyForVocabularyStringType:(long long)arg1;
+ (double)roundCount:(unsigned long long)arg1 toSignificantFigure:(unsigned long long)arg2;
+ (void)logReceivedCount:(unsigned long long)arg1 ofVocabularyStringType:(long long)arg2;
+ (void)resetSynapseVocabularyUpdate;

@end
