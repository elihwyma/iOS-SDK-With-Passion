/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGSharingSuggestionSource.h>

@class _TtC17KnowledgeGraphKit21MALearningStreamUtils;

@interface PGSharingSuggestionSourceMomentLearning : PGSharingSuggestionSource

{
    _TtC17KnowledgeGraphKit21MALearningStreamUtils *_learningStreamUtils;
}

- (id)name;
- (double)weight;
- (id)details;
- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (id)initWithLearningStreamUtils:(id)arg1;

@end
