/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSSet;

@interface PGDejunkerDeduperOptions : NSObject

{
    _Bool _doIdenticalDeduping;
    _Bool _useFaceprintsForIdenticalDeduping;
    _Bool _doSemanticalDeduping;
    _Bool _doNotSemanticallyDedupePeople;
    _Bool _doNotSemanticallyDedupePersons;
    _Bool _allowAdaptiveForSemanticalDeduping;
    _Bool _useOnlyScenesForDeduping;
    _Bool _useAllPersonsForDeduping;
    _Bool _useFaceQualityForElection;
    _Bool _doNotDedupeVideos;
    _Bool _doNotDedupeInterestingPortraitsAndLivePictures;
    _Bool _onlyDedupeContiguousItems;
    _Bool _doDejunk;
    _Bool _returnDedupedJunkIfOnlyJunk;
    _Bool _doFinalPass;
    double _identicalDedupingTimeInterval;
    double _identicalDedupingTimeIntervalForPeople;
    double _identicalDedupingMaximumTimeGroupExtension;
    unsigned long long _maximumNumberOfItemsPerIdenticalCluster;
    double _identicalDedupingThreshold;
    double _identicalDedupingThresholdForPeople;
    double _identicalDedupingThresholdForBestItems;
    double _identicalDedupingFaceprintDistance;
    double _semanticalDedupingTimeInterval;
    double _semanticalDedupingTimeIntervalForPeople;
    double _semanticalDedupingTimeIntervalForPersons;
    double _semanticalDedupingMaximumTimeGroupExtension;
    unsigned long long _maximumNumberOfItemsPerSemanticalCluster;
    double _semanticalDedupingThreshold;
    double _semanticalDedupingThresholdForPeople;
    double _semanticalDedupingThresholdForPersons;
    double _finalPassTimeInterval;
    double _finalPassMaximumTimeGroupExtension;
    double _finalPassDedupingThreshold;
    NSSet *_identifiersOfRequiredItems;
}

@property (nonatomic) _Bool doIdenticalDeduping;
@property (nonatomic) double identicalDedupingTimeInterval;
@property (nonatomic) double identicalDedupingTimeIntervalForPeople;
@property (nonatomic) double identicalDedupingMaximumTimeGroupExtension;
@property (nonatomic) unsigned long long maximumNumberOfItemsPerIdenticalCluster;
@property (nonatomic) double identicalDedupingThreshold;
@property (nonatomic) double identicalDedupingThresholdForPeople;
@property (nonatomic) double identicalDedupingThresholdForBestItems;
@property (nonatomic) _Bool useFaceprintsForIdenticalDeduping;
@property (nonatomic) double identicalDedupingFaceprintDistance;
@property (nonatomic) _Bool doSemanticalDeduping;
@property (nonatomic) double semanticalDedupingTimeInterval;
@property (nonatomic) double semanticalDedupingTimeIntervalForPeople;
@property (nonatomic) double semanticalDedupingTimeIntervalForPersons;
@property (nonatomic) double semanticalDedupingMaximumTimeGroupExtension;
@property (nonatomic) unsigned long long maximumNumberOfItemsPerSemanticalCluster;
@property (nonatomic) double semanticalDedupingThreshold;
@property (nonatomic) double semanticalDedupingThresholdForPeople;
@property (nonatomic) double semanticalDedupingThresholdForPersons;
@property (nonatomic) _Bool dontSemanticallyDedupePeople;
@property (nonatomic) _Bool dontSemanticallyDedupePersons;
@property (nonatomic) _Bool allowAdaptiveForSemanticalDeduping;
@property (nonatomic) _Bool useOnlyScenesForDeduping;
@property (nonatomic) _Bool useAllPersonsForDeduping;
@property (nonatomic) _Bool useFaceQualityForElection;
@property (nonatomic) _Bool doNotDedupeVideos;
@property (nonatomic) _Bool doNotDedupeInterestingPortraitsAndLivePictures;
@property (nonatomic) _Bool onlyDedupeContiguousItems;
@property (nonatomic) _Bool doDejunk;
@property (nonatomic) _Bool returnDedupedJunkIfOnlyJunk;
@property (nonatomic) _Bool doFinalPass;
@property (nonatomic) double finalPassTimeInterval;
@property (nonatomic) double finalPassMaximumTimeGroupExtension;
@property (nonatomic) double finalPassDedupingThreshold;
@property (retain, nonatomic) NSSet *identifiersOfRequiredItems;

- (id)init;
- (id)description;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentationRestrictingToGlobalOptions:(_Bool)arg1;

@end
