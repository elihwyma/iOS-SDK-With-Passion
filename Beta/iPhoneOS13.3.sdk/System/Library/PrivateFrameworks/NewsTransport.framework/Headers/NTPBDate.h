/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBDate : PBCodable

{
    double _timeIntervalSince1970;
    struct {
        unsigned int timeIntervalSince1970:1;
    } _has;
}

@property (nonatomic) _Bool hasTimeIntervalSince1970;
@property (nonatomic) double timeIntervalSince1970;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
