/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, PGMoodVector;

@interface PGMemoryDebug : NSObject

{
    NSDictionary *_matchingKeywords;
    NSDictionary *_referenceKeywords;
    NSDictionary *_eventKeywords;
    NSDictionary *_additionalInfoKeywords;
    double _contentScore;
    double _meanContentScore;
    double _matchingScore;
    double _graphScore;
    double _neighborScore;
    NSArray *_meaningLabels;
    double _collectionMeaningScore;
    double _collectionContentScore;
    NSArray *_collectionMeaningLabels;
    unsigned long long _numberOfPeople;
    unsigned long long _numberOfMoments;
    unsigned long long _numberOfCollections;
    unsigned long long _numberOfRelevantAssets;
    unsigned long long _suggestedMood;
    unsigned long long _recommendedMoods;
    unsigned long long _forbiddenMoods;
    PGMoodVector *_positiveMoodVector;
    PGMoodVector *_negativeMoodVector;
    PGMoodVector *_historyWeightedPositiveMoodVector;
    NSArray *_moodKeywords;
}

@property (retain, nonatomic) NSDictionary *matchingKeywords;
@property (retain, nonatomic) NSDictionary *referenceKeywords;
@property (retain, nonatomic) NSDictionary *eventKeywords;
@property (retain, nonatomic) NSDictionary *additionalInfoKeywords;
@property (nonatomic) double contentScore;
@property (nonatomic) double meanContentScore;
@property (nonatomic) double matchingScore;
@property (nonatomic) double graphScore;
@property (nonatomic) double neighborScore;
@property (retain, nonatomic) NSArray *meaningLabels;
@property (nonatomic) double collectionMeaningScore;
@property (nonatomic) double collectionContentScore;
@property (retain, nonatomic) NSArray *collectionMeaningLabels;
@property (nonatomic) unsigned long long numberOfPeople;
@property (nonatomic) unsigned long long numberOfMoments;
@property (nonatomic) unsigned long long numberOfCollections;
@property (nonatomic) unsigned long long numberOfRelevantAssets;
@property (nonatomic) unsigned long long suggestedMood;
@property (nonatomic) unsigned long long recommendedMoods;
@property (nonatomic) unsigned long long forbiddenMoods;
@property (retain, nonatomic) PGMoodVector *positiveMoodVector;
@property (retain, nonatomic) PGMoodVector *negativeMoodVector;
@property (retain, nonatomic) PGMoodVector *historyWeightedPositiveMoodVector;
@property (retain, nonatomic) NSArray *moodKeywords;

@end
