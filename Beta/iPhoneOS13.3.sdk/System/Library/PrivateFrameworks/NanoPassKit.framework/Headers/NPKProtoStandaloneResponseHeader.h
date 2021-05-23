/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NPKProtoStandaloneResponseHeader : PBCodable

{
    int _protocolVersion;
    NSString *_sessionIdentifier;
}

@property (nonatomic) int protocolVersion;
@property (nonatomic, readonly) _Bool hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)protocolVersionAsString:(int)arg1;
- (int)StringAsProtocolVersion:(id)arg1;

@end
