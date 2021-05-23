/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDCodableRoutineLocationVisit : PBCodable <Swift>

{
    double _entryTime;
    double _exitTime;
    struct {
        unsigned int entryTime:1;
        unsigned int exitTime:1;
    } _has;
}

@property (nonatomic) _Bool hasEntryTime;
@property (nonatomic) double entryTime;
@property (nonatomic) _Bool hasExitTime;
@property (nonatomic) double exitTime;

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
