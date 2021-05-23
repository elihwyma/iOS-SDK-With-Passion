/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@interface NTPBAppSessionStartWatch : PBCodable

{
    int _sessionStartMethodWatch;
    struct {
        unsigned int sessionStartMethodWatch:1;
    } _has;
}

@property (nonatomic) _Bool hasSessionStartMethodWatch;
@property (nonatomic) int sessionStartMethodWatch;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
