/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBEnvelopeBatch : PBCodable

{
    int _envelopeDroppedCountDueToSizeLimit;
    NSMutableArray *_envelopes;
    int _majorVersion;
    int _minorVersion;
    int _patchVersion;
    struct {
        unsigned int envelopeDroppedCountDueToSizeLimit:1;
        unsigned int majorVersion:1;
        unsigned int minorVersion:1;
        unsigned int patchVersion:1;
    } _has;
}

@property (retain, nonatomic) NSMutableArray *envelopes;
@property (nonatomic) _Bool hasMajorVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) _Bool hasMinorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) _Bool hasPatchVersion;
@property (nonatomic) int patchVersion;
@property (nonatomic) _Bool hasEnvelopeDroppedCountDueToSizeLimit;
@property (nonatomic) int envelopeDroppedCountDueToSizeLimit;

+ (Class)envelopeType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addEnvelope:(id)arg1;
- (void)clearEnvelopes;
- (unsigned long long)envelopesCount;
- (id)envelopeAtIndex:(unsigned long long)arg1;

@end
