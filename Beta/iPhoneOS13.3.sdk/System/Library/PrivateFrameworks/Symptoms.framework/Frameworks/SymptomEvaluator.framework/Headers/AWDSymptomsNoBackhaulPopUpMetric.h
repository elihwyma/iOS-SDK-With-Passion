/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDSymptomsNoBackhaulPopUpMetric : PBCodable

{
    unsigned long long _timestamp;
    int _action;
    int _networkType;
    unsigned int _networksShownAtLeastOnceInLast24Hrs;
    unsigned int _popUpShownForSecs;
    unsigned int _timeSinceShownOnSameNetworkSecs;
    unsigned int _timesShownOnAnyNetworkLast24Hrs;
    struct {
        unsigned int timestamp:1;
        unsigned int action:1;
        unsigned int networkType:1;
        unsigned int networksShownAtLeastOnceInLast24Hrs:1;
        unsigned int popUpShownForSecs:1;
        unsigned int timeSinceShownOnSameNetworkSecs:1;
        unsigned int timesShownOnAnyNetworkLast24Hrs:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) _Bool hasPopUpShownForSecs;
@property (nonatomic) unsigned int popUpShownForSecs;
@property (nonatomic) _Bool hasTimeSinceShownOnSameNetworkSecs;
@property (nonatomic) unsigned int timeSinceShownOnSameNetworkSecs;
@property (nonatomic) _Bool hasTimesShownOnAnyNetworkLast24Hrs;
@property (nonatomic) unsigned int timesShownOnAnyNetworkLast24Hrs;
@property (nonatomic) _Bool hasNetworksShownAtLeastOnceInLast24Hrs;
@property (nonatomic) unsigned int networksShownAtLeastOnceInLast24Hrs;
@property (nonatomic) _Bool hasAction;
@property (nonatomic) int action;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)actionAsString:(int)arg1;
- (int)StringAsAction:(id)arg1;
- (id)networkTypeAsString:(int)arg1;
- (int)StringAsNetworkType:(id)arg1;

@end
