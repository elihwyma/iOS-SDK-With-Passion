/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NPKProtoStandaloneResponseHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable

{
    NSMutableArray *_paymentPasses;
    NPKProtoStandaloneResponseHeader *_responseHeader;
}

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
@property (retain, nonatomic) NSMutableArray *paymentPasses;

+ (Class)paymentPassesType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPaymentPasses:(id)arg1;
- (unsigned long long)paymentPassesCount;
- (void)clearPaymentPasses;
- (id)paymentPassesAtIndex:(unsigned long long)arg1;

@end
