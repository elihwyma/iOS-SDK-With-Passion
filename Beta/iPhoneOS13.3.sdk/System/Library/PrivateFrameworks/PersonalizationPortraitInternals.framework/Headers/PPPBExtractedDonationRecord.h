/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBExtractedDonationRecord : PBCodable

{
    double _score;
    unsigned long long _topicId;
    unsigned long long _unixTimestampSec;
    NSString *_algorithm;
    NSString *_namedEntity;
    NSString *_sourceBundleId;
    struct {
        unsigned int score:1;
        unsigned int topicId:1;
        unsigned int unixTimestampSec:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (nonatomic, readonly) _Bool hasAlgorithm;
@property (retain, nonatomic) NSString *algorithm;
@property (nonatomic) _Bool hasScore;
@property (nonatomic) double score;
@property (nonatomic) _Bool hasTopicId;
@property (nonatomic) unsigned long long topicId;
@property (nonatomic, readonly) _Bool hasNamedEntity;
@property (retain, nonatomic) NSString *namedEntity;
@property (nonatomic) _Bool hasUnixTimestampSec;
@property (nonatomic) unsigned long long unixTimestampSec;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
