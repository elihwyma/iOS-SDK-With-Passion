/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBPersonalizationBucket : PBCodable

{
    long long _maximum;
    long long _minimum;
    long long _treatmentId;
    struct {
        unsigned int maximum:1;
        unsigned int minimum:1;
        unsigned int treatmentId:1;
    } _has;
}

@property (nonatomic) _Bool hasMinimum;
@property (nonatomic) long long minimum;
@property (nonatomic) _Bool hasMaximum;
@property (nonatomic) long long maximum;
@property (nonatomic) _Bool hasTreatmentId;
@property (nonatomic) long long treatmentId;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
