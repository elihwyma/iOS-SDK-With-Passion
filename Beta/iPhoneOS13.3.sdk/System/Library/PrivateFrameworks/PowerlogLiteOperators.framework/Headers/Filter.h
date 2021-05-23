/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface Filter : PBCodable

{
    unsigned int _port;
    unsigned int _protocol;
    struct {
        unsigned int port:1;
        unsigned int protocol:1;
    } _has;
}

@property (nonatomic) _Bool hasProtocol;
@property (nonatomic) unsigned int protocol;
@property (nonatomic) _Bool hasPort;
@property (nonatomic) unsigned int port;

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
