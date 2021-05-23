/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, PGGraphNode;

@protocol PGGraphRelatableEvent;

@interface PGGraphMatchingResult : NSObject

{
    PGGraphNode<PGGraphRelatableEvent> *_event;
    NSDictionary *_keywords;
    double _score;
    NSMutableDictionary *_context;
}

@property (nonatomic, readonly) NSMutableDictionary *context;
@property (nonatomic, readonly) PGGraphNode<PGGraphRelatableEvent> *event;
@property (nonatomic) double score;
@property (nonatomic, readonly) NSDictionary *keywords;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEvent:(id)arg1;
- (id)localStartDate;
- (id)localEndDate;
- (_Bool)isEqualToResult:(id)arg1;
- (id)sortedCriteria;
- (id)keywordsForRelatedType:(unsigned long long)arg1;
- (void)addKeywords:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (void)clearKeywordsForRelatedType:(unsigned long long)arg1;
- (id)contextItemForRelatedType:(unsigned long long)arg1;
- (void)setContextItem:(id)arg1 forRelatedType:(unsigned long long)arg2;
- (id)_contextItemsSortedByScoreAscending:(_Bool)arg1;
- (id)_highestScoredContextItemWithPreferredRelatedType:(unsigned long long)arg1;
- (void)enumerateContextItems:(CDUnknownBlockType)arg1;

@end
