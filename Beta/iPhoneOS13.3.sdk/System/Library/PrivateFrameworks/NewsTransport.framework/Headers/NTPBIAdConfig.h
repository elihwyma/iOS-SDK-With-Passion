/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBIAdConfig : PBCodable

{
    long long _segmentsHistoryWindowInterval;
    long long _segmentsMinimumArticleCount;
    long long _segmentsSubmissionFrequency;
    double _segmentsThreshold;
    _Bool _segmentsEnabled;
    struct {
        unsigned int segmentsHistoryWindowInterval:1;
        unsigned int segmentsMinimumArticleCount:1;
        unsigned int segmentsSubmissionFrequency:1;
        unsigned int segmentsThreshold:1;
        unsigned int segmentsEnabled:1;
    } _has;
}

@property (nonatomic) _Bool hasSegmentsEnabled;
@property (nonatomic) _Bool segmentsEnabled;
@property (nonatomic) _Bool hasSegmentsThreshold;
@property (nonatomic) double segmentsThreshold;
@property (nonatomic) _Bool hasSegmentsSubmissionFrequency;
@property (nonatomic) long long segmentsSubmissionFrequency;
@property (nonatomic) _Bool hasSegmentsHistoryWindowInterval;
@property (nonatomic) long long segmentsHistoryWindowInterval;
@property (nonatomic) _Bool hasSegmentsMinimumArticleCount;
@property (nonatomic) long long segmentsMinimumArticleCount;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
