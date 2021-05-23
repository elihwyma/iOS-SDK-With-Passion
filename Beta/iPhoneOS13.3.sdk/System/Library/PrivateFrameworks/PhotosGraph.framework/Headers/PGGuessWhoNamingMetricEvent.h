/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, PGGraph;

@interface PGGuessWhoNamingMetricEvent : NSObject

{
    _Bool _hasMeNodeAndMeContact;
    NSString *_identifier;
    NSDictionary *_payload;
    PGGraph *_graph;
    unsigned long long _numberOfPeople;
    unsigned long long _numberOfPeopleToName;
    unsigned long long _numberOfPeopleFavorited;
    unsigned long long _librarySize;
    double _proportionOfNamedPeople;
    unsigned long long _numberOfNamedPeople;
    double _recallContactSuggestion;
    double _numberOfPeopleWithAContactSuggestion;
    double _recallHighConfidenceContactSuggestion;
    double _numberOfPeopleWithAHighConfidenceContactSuggestion;
}

@property (retain, nonatomic) PGGraph *graph;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) _Bool hasMeNodeAndMeContact;
@property (nonatomic) unsigned long long numberOfPeopleToName;
@property (nonatomic) unsigned long long numberOfPeopleFavorited;
@property (nonatomic) unsigned long long librarySize;
@property (nonatomic) unsigned long long numberOfNamedPeople;
@property (nonatomic) double proportionOfNamedPeople;
@property (nonatomic) double numberOfPeopleWithAContactSuggestion;
@property (nonatomic) double recallContactSuggestion;
@property (nonatomic) double numberOfPeopleWithAHighConfidenceContactSuggestion;
@property (nonatomic) double recallHighConfidenceContactSuggestion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithGraphManager:(id)arg1;
- (void)gatherMetricsWithProgressBlock:(CDUnknownBlockType)arg1;

@end
