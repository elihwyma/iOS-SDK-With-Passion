/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, PGGraph;

@interface PGGraphRelationshipProcessor : NSObject

{
    unsigned long long _runOptions;
    NSMutableArray *_analyzersToRun;
    unsigned long long _numberOfSignals;
    NSSet *_personNodes;
    NSSet *_momentNodes;
    NSSet *_contactIdentifiers;
    NSDictionary *_personIdentifierByContactIdentifier;
    PGGraph *_graph;
    NSMutableDictionary *_relationshipAnalyzerPropertiesByPersonLocalIdentifier;
    NSMutableDictionary *_partnerScoreByPersonLocalIdentifier;
    NSMutableDictionary *_parentScoreByPersonLocalIdentifier;
    NSMutableDictionary *_childScoreByPersonLocalIdentifier;
    NSMutableDictionary *_familyScoreByPersonLocalIdentifier;
    NSMutableDictionary *_coworkerScoreByPersonLocalIdentifier;
    NSMutableDictionary *_friendScoreByPersonLocalIdentifier;
}

@property (nonatomic, readonly) unsigned long long runOptions;
@property (retain, nonatomic) NSMutableArray *analyzersToRun;
@property (retain, nonatomic) NSMutableDictionary *relationshipAnalyzerPropertiesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *partnerScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *parentScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *childScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *familyScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *coworkerScoreByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *friendScoreByPersonLocalIdentifier;
@property (nonatomic, readonly) NSSet *personNodes;
@property (nonatomic, readonly) NSSet *contactIdentifiers;
@property (nonatomic, readonly) NSDictionary *personIdentifierByContactIdentifier;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) unsigned long long numberOfSignals;

- (id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2;
- (void)_extractSignalsFromRunOptions;
- (void)runRelationshipAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInferredRelationshipsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_aggregateScores;
- (void)_enumerateInferredPartnerUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateInferredRelationshipMembersFromScores:(id)arg1 cumulativeThreshold:(double)arg2 minimumConfidence:(double)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)_socialGroupNodesIncludingPersonLocalIdentifiers:(id)arg1 minimumMatches:(unsigned long long)arg2 amongSocialGroupNodes:(id)arg3;
- (void)_enumerateInferredFamilyMembersUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateInferredParentsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateInferredChildrenUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateInferredFriendsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateInferredCoworkersUsingBlock:(CDUnknownBlockType)arg1;
- (id)personLocalIdentifierForContactIdentifier:(id)arg1;
- (id)relationshipAnalyzerPropertiesForPersonLocalIdentifier:(id)arg1;

@end
