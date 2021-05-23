/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSCountedSet, NSSet, NSString;

@interface FCTopicalNode : NSObject <Swift>

{
    double _score;
    _Bool _scored;
    NSSet *_identifiers;
    NSString *_identifier;
    NSSet *_displayedElements;
    NSCountedSet *_topicCollections;
    FCTopicalNode *_parent;
    NSSet *_children;
    double _scoreMultiplier;
    double _relatedness;
    double _specificity;
    double _parentRawScore;
    double _relatednessThreshold;
    double _relatednessKWeight;
    double _topicScoreWeight;
    double _highestScoringRelativeScoreMultiplier;
    NSString *_storedNodeIdentifier;
}

@property (retain) NSString *identifier;
@property (retain, nonatomic) NSSet *identifiers;
@property (retain, nonatomic) NSSet *displayedElements;
@property (retain, nonatomic) NSCountedSet *topicCollections;
@property (weak, nonatomic) FCTopicalNode *parent;
@property (retain, nonatomic) NSSet *children;
@property (nonatomic) double score;
@property (nonatomic) double scoreMultiplier;
@property (nonatomic) _Bool scored;
@property (nonatomic) double relatedness;
@property (nonatomic) double specificity;
@property (nonatomic) double parentRawScore;
@property (nonatomic) double relatednessThreshold;
@property (nonatomic) double relatednessKWeight;
@property (nonatomic) double topicScoreWeight;
@property (nonatomic) double highestScoringRelativeScoreMultiplier;
@property (retain, nonatomic) NSString *storedNodeIdentifier;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)leaves;
- (id)calculateLeafScoresWithTopicScoreProvider:(CDUnknownBlockType)arg1;
- (double)individualScoreWithTopicScoreProvider:(CDUnknownBlockType)arg1;
- (void)calculateNonLeafScoresWithTopicProvider:(CDUnknownBlockType)arg1;
- (id)initWithIdentifier:(id)arg1 displayedElements:(id)arg2 allTopicCollections:(id)arg3 relatednessThreshold:(double)arg4 relatednessKWeight:(double)arg5 topicScoreWeight:(double)arg6 highestScoringRelativeScoreMultiplier:(double)arg7;
- (void)considerEdge:(id)arg1 withNodeScorer:(CDUnknownBlockType)arg2;
- (void)calculateScoreWithTopicScoreProvider:(CDUnknownBlockType)arg1;

@end
