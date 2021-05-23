/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDTinCanAvailabilityState : PBCodable

{
    unsigned long long _timestamp;
    _Bool _tinCanAvailabilityState;
    struct {
        unsigned int timestamp:1;
        unsigned int tinCanAvailabilityState:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasTinCanAvailabilityState;
@property (nonatomic) _Bool tinCanAvailabilityState;

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
