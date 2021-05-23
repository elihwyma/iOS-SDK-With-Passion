/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDTinCanInCallEvent : PBCodable

{
    long long _offsetTimeMs;
    unsigned int _eventType;
    struct {
        unsigned int offsetTimeMs:1;
        unsigned int eventType:1;
    } _has;
}

@property (nonatomic) _Bool hasOffsetTimeMs;
@property (nonatomic) long long offsetTimeMs;
@property (nonatomic) _Bool hasEventType;
@property (nonatomic) unsigned int eventType;

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
