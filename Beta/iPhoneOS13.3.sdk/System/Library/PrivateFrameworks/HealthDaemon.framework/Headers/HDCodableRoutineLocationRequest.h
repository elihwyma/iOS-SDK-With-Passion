/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBRequest.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDCodableRoutineLocationRequest : PBRequest <Swift>

{
    int _locationType;
    struct {
        unsigned int locationType:1;
    } _has;
}

@property (nonatomic) _Bool hasLocationType;
@property (nonatomic) int locationType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)locationTypeAsString:(int)arg1;
- (int)StringAsLocationType:(id)arg1;

@end
