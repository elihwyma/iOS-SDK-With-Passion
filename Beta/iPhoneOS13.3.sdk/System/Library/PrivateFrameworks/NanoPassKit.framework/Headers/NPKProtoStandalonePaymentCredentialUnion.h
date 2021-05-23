/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandaloneCreditAccountCredential, NPKProtoStandalonePaymentRemoteCredential, NSString;

@interface NPKProtoStandalonePaymentCredentialUnion : PBCodable

{
    NPKProtoStandaloneCreditAccountCredential *_creditAccountCredential;
    NSString *_flowIdentifier;
    NPKProtoStandalonePaymentRemoteCredential *_remoteCredential;
}

@property (nonatomic, readonly) _Bool hasFlowIdentifier;
@property (retain, nonatomic) NSString *flowIdentifier;
@property (nonatomic, readonly) _Bool hasRemoteCredential;
@property (retain, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential;
@property (nonatomic, readonly) _Bool hasCreditAccountCredential;
@property (retain, nonatomic) NPKProtoStandaloneCreditAccountCredential *creditAccountCredential;

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
