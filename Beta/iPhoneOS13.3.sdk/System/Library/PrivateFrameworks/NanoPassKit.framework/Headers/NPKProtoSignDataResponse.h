/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface NPKProtoSignDataResponse : PBCodable

{
    NSData *_certsBytes;
    NSData *_signatureInfoBytes;
    NSData *_signedData;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property (nonatomic) _Bool hasPending;
@property (nonatomic) _Bool pending;
@property (nonatomic, readonly) _Bool hasSignedData;
@property (retain, nonatomic) NSData *signedData;
@property (nonatomic, readonly) _Bool hasCertsBytes;
@property (retain, nonatomic) NSData *certsBytes;
@property (nonatomic, readonly) _Bool hasSignatureInfoBytes;
@property (retain, nonatomic) NSData *signatureInfoBytes;

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
