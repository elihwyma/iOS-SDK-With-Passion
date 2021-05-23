/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDSymptomsNetworkAnalyticsScoring : PBCodable

{
    unsigned long long _lifetimeOldestItemSecs;
    unsigned long long _numberEntriesWithHomeLOI;
    unsigned long long _numberEntriesWithUnapprovedLOI;
    unsigned long long _numberEntriesWithUndefinedLOI;
    unsigned long long _numberEntriesWithWorkLOI;
    unsigned long long _scoredEntries;
    unsigned long long _scoredKnownGood;
    unsigned long long _timeSinceLastScoringSecs;
    unsigned long long _timestamp;
    int _networkType;
    int _scoringCompletionCode;
    struct {
        unsigned int lifetimeOldestItemSecs:1;
        unsigned int numberEntriesWithHomeLOI:1;
        unsigned int numberEntriesWithUnapprovedLOI:1;
        unsigned int numberEntriesWithUndefinedLOI:1;
        unsigned int numberEntriesWithWorkLOI:1;
        unsigned int scoredEntries:1;
        unsigned int scoredKnownGood:1;
        unsigned int timeSinceLastScoringSecs:1;
        unsigned int timestamp:1;
        unsigned int networkType:1;
        unsigned int scoringCompletionCode:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) _Bool hasTimeSinceLastScoringSecs;
@property (nonatomic) unsigned long long timeSinceLastScoringSecs;
@property (nonatomic) _Bool hasScoringCompletionCode;
@property (nonatomic) int scoringCompletionCode;
@property (nonatomic) _Bool hasScoredEntries;
@property (nonatomic) unsigned long long scoredEntries;
@property (nonatomic) _Bool hasScoredKnownGood;
@property (nonatomic) unsigned long long scoredKnownGood;
@property (nonatomic) _Bool hasLifetimeOldestItemSecs;
@property (nonatomic) unsigned long long lifetimeOldestItemSecs;
@property (nonatomic) _Bool hasNumberEntriesWithHomeLOI;
@property (nonatomic) unsigned long long numberEntriesWithHomeLOI;
@property (nonatomic) _Bool hasNumberEntriesWithWorkLOI;
@property (nonatomic) unsigned long long numberEntriesWithWorkLOI;
@property (nonatomic) _Bool hasNumberEntriesWithUndefinedLOI;
@property (nonatomic) unsigned long long numberEntriesWithUndefinedLOI;
@property (nonatomic) _Bool hasNumberEntriesWithUnapprovedLOI;
@property (nonatomic) unsigned long long numberEntriesWithUnapprovedLOI;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
- (int)StringAsNetworkType:(id)arg1;
- (id)scoringCompletionCodeAsString:(int)arg1;
- (int)StringAsScoringCompletionCode:(id)arg1;

@end
