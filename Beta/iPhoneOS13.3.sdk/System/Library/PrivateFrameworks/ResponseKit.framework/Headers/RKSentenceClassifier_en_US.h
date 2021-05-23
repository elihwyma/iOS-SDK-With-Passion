/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <ResponseKit/RKSentenceClassifier.h>

@interface RKSentenceClassifier_en_US : RKSentenceClassifier

+ (id)preProcessTextMessageForLinguisticTagger:(id)arg1;

- (id)addSentenceTerminatorQuestion:(id)arg1;
- (void)analyzeSentence;
- (id)classifySentence;
- (id)alternativeConjunctions;

@end
