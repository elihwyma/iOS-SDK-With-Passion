/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <ProtocolBuffer/PBCodable.h>

@interface TRILogTime : PBCodable

{
    unsigned long long _secondsSince1970;
    int _minutesDstOffset;
    int _secondsFromUtc;
    struct {
        unsigned int secondsSince1970:1;
        unsigned int minutesDstOffset:1;
        unsigned int secondsFromUtc:1;
    } _has;
}

@property (nonatomic) _Bool hasSecondsSince1970;
@property (nonatomic) unsigned long long secondsSince1970;
@property (nonatomic) _Bool hasSecondsFromUtc;
@property (nonatomic) int secondsFromUtc;
@property (nonatomic) _Bool hasMinutesDstOffset;
@property (nonatomic) int minutesDstOffset;

+ (id)logTimeFromDate:(id)arg1;

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
