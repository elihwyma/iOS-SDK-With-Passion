/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class BMBehaviorRetriever, _CDInteractionStore;

@protocol _DKKnowledgeQuerying;

@interface _PSRuleOverlapFeedback : NSObject

{
    BMBehaviorRetriever *_behaviorRetriever;
    _CDInteractionStore *_interactionStore;
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

@property (nonatomic, readonly) BMBehaviorRetriever *behaviorRetriever;
@property (retain, nonatomic) _CDInteractionStore *interactionStore;
@property (retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore;

- (id)init;
- (id)sharesheetFeedbackEventsSinceDate:(id)arg1;
- (id)interactionStoreEventsSinceDate:(id)arg1;
- (id)matchFeedbackEvent:(id)arg1 WithInteractions:(id)arg2;
- (void)loggingForKnowledgeStoreEvent:(id)arg1 WithMatchingInteraction:(id)arg2;
- (id)contextItemsFromEvent:(id)arg1;
- (id)subsetOfLoiItems:(id)arg1;
- (id)constantFeaturesFromContextItems:(id)arg1;
- (id)feedbackPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4;
- (_Bool)recipientPredictedCorrectlyByRule:(id)arg1 interaction:(id)arg2 bundleId:(id)arg3;
- (_Bool)targetAppPredictedCorrectlyByRule:(id)arg1 bundleId:(id)arg2;
- (int)bucketedValue:(int)arg1;
- (void)reviewLastDayOfShares;

@end
