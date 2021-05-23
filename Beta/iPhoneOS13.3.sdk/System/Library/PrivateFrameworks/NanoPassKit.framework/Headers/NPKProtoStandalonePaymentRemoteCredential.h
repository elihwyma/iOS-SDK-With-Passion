/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandalonePaymentCredential, NPKProtoStandalonePaymentPass, NSString;

@interface NPKProtoStandalonePaymentRemoteCredential : PBCodable

{
    NSString *_identifier;
    NSString *_passURL;
    NPKProtoStandalonePaymentCredential *_paymentCredential;
    NPKProtoStandalonePaymentPass *_paymentPass;
    NSString *_productIdentifier;
    unsigned int _rank;
    NSString *_statusDescription;
    NSString *_summaryMetadataDescription;
    struct {
        unsigned int rank:1;
    } _has;
}

@property (retain, nonatomic) NPKProtoStandalonePaymentCredential *paymentCredential;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, readonly) _Bool hasPassURL;
@property (retain, nonatomic) NSString *passURL;
@property (nonatomic, readonly) _Bool hasSummaryMetadataDescription;
@property (retain, nonatomic) NSString *summaryMetadataDescription;
@property (nonatomic, readonly) _Bool hasStatusDescription;
@property (retain, nonatomic) NSString *statusDescription;
@property (nonatomic, readonly) _Bool hasPaymentPass;
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass;
@property (nonatomic) _Bool hasRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic, readonly) _Bool hasProductIdentifier;
@property (retain, nonatomic) NSString *productIdentifier;

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
