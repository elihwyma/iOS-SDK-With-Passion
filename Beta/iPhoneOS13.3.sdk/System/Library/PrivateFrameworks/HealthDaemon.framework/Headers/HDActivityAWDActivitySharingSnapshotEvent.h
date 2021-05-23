/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDActivityAWDActivitySharingSnapshotEvent : PBCodable <Swift>

{
    long long _count;
    unsigned long long _timestamp;
    int _kind;
    _Bool _success;
    struct {
        unsigned int count:1;
        unsigned int timestamp:1;
        unsigned int kind:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasSuccess;
@property (nonatomic) _Bool success;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) long long count;
@property (nonatomic) _Bool hasKind;
@property (nonatomic) int kind;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)kindAsString:(int)arg1;
- (int)StringAsKind:(id)arg1;

@end
