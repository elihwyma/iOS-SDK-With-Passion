/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFOpportuneSpeakingModelFeedback, NSMutableDictionary;

@protocol _DKKnowledgeQuerying;

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject

{
    AFOpportuneSpeakingModelFeedback *_feedback;
    id <_DKKnowledgeQuerying> _knowledgeStore;
    NSMutableDictionary *_usageEventsBySpeakableId;
}

- (id)init;
- (void)save;
- (void)loadIfNecessary;
- (id)lastNegativeFeedbackForContact:(id)arg1;
- (void)setLastNegativeFeedbackForContact:(id)arg1;
- (void)fetchNotificationUsageForSpeakableId:(id)arg1 withStartDate:(id)arg2 withEndDate:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (_Bool)interactionDetectedForSpeakableId:(id)arg1;

@end
