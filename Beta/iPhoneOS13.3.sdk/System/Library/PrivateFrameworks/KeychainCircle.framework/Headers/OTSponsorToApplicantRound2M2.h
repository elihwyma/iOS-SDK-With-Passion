/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface OTSponsorToApplicantRound2M2 : PBCodable

{
    NSMutableArray *_preapprovedKeys;
    NSData *_voucher;
    NSData *_voucherSignature;
}

@property (nonatomic, readonly) _Bool hasVoucher;
@property (retain, nonatomic) NSData *voucher;
@property (nonatomic, readonly) _Bool hasVoucherSignature;
@property (retain, nonatomic) NSData *voucherSignature;
@property (retain, nonatomic) NSMutableArray *preapprovedKeys;

+ (Class)preapprovedKeysType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPreapprovedKeys;
- (void)addPreapprovedKeys:(id)arg1;
- (unsigned long long)preapprovedKeysCount;
- (id)preapprovedKeysAtIndex:(unsigned long long)arg1;

@end
