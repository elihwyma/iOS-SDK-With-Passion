/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <ProtocolBuffer/PBCodable.h>

@interface HealthUIAWDHealthUIOrganDonationErrorEvent : PBCodable

{
    unsigned long long _timestamp;
    int _errorType;
    struct {
        unsigned int timestamp:1;
        unsigned int errorType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasErrorType;
@property (nonatomic) int errorType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)errorTypeAsString:(int)arg1;
- (int)StringAsErrorType:(id)arg1;

@end
