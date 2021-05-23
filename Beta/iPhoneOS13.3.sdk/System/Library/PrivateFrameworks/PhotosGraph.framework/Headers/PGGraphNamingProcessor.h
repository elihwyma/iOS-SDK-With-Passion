/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSSet, PGGraph;

@interface PGGraphNamingProcessor : NSObject

{
    unsigned long long _runOptions;
    NSMutableArray *_analyzersToRun;
    NSSet *_personNodesToName;
    NSSet *_momentNodes;
    PGGraph *_graph;
    NSArray *_sortedPoolOfContactIdentifiers;
    NSMutableDictionary *_contactMatchesByPersonLocalIdentifier;
    NSMutableDictionary *_selectedContactMatchesByPersonLocalIdentifier;
    NSMutableDictionary *_filteredOutContactMatchesByPersonLocalIdentifier;
    unsigned long long _numberOfSignals;
}

@property (nonatomic, readonly) unsigned long long runOptions;
@property (retain, nonatomic) NSMutableArray *analyzersToRun;
@property (nonatomic, readonly) NSSet *personNodesToName;
@property (nonatomic, readonly) NSSet *momentNodes;
@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) unsigned long long numberOfSignals;
@property (retain, nonatomic) NSArray *sortedPoolOfContactIdentifiers;
@property (retain, nonatomic) NSMutableDictionary *contactMatchesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *selectedContactMatchesByPersonLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *filteredOutContactMatchesByPersonLocalIdentifier;

- (id)initWithPersonNodes:(id)arg1 runOptions:(unsigned long long)arg2;
- (void)runNamingAnalysisWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)enumerateContactSuggestionsForPersonNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_extractSignalsFromRunOptions;
- (id)_extractSortedPoolOfContactIdentifiers;
- (void)filterContactMatches;
- (void)_limitNumberOfContactSuggestionsPerPerson;
- (void)_removeSuggestionOfContact:(id)arg1 forPerson:(id)arg2;
- (id)_applyMessageFrequencyPenaltyToMatchScores:(id)arg1;
- (id)_personMatchScoresByContactIdentifierFromMatchProperties:(id)arg1;
- (id)_swapPersonAndContactIdentifiersFromMatchesByContactIdentifier:(id)arg1;
- (id)matchPropertiesBetweenContactIdentifier:(id)arg1 andPersonLocalIdentifier:(id)arg2;
- (id)personNodesToNameFromPersonNodes:(id)arg1;

@end
