/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@class _DKEventStream, _DKKnowledgeStore;

@interface PRSCoreDuet : NSObject

{
    _DKKnowledgeStore *_knowledgeStore;
    _DKEventStream *_spotlightStream;
}

@property (retain) _DKKnowledgeStore *knowledgeStore;
@property (retain) _DKEventStream *spotlightStream;

- (id)initWithStreamName:(id)arg1;
- (void)addResultCategoryAndGroupToHistory:(id)arg1 groupName:(id)arg2 error:(id)arg3;
- (id)getRankedCategoriesDictionaryWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;

@end
