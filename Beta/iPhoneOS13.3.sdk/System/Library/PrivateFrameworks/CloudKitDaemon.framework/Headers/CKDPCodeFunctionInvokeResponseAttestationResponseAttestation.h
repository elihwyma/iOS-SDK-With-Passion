/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDPCodeFunctionInvokeResponseAttestationResponseAttestation : PBCodable

{
    NSData *_appQuote;
    NSData *_aqeQuote;
    NSString *_pckCertificate;
    NSData *_routingToken;
}

@property (nonatomic, readonly) _Bool hasAppQuote;
@property (retain, nonatomic) NSData *appQuote;
@property (nonatomic, readonly) _Bool hasAqeQuote;
@property (retain, nonatomic) NSData *aqeQuote;
@property (nonatomic, readonly) _Bool hasPckCertificate;
@property (retain, nonatomic) NSString *pckCertificate;
@property (nonatomic, readonly) _Bool hasRoutingToken;
@property (retain, nonatomic) NSData *routingToken;

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
