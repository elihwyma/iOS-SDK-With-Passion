/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <ProtocolBuffer/PBCodable.h>

@class OTApplicantToSponsorRound2M1, OTSOSMessage, OTSponsorToApplicantRound1M2, OTSponsorToApplicantRound2M2;

__attribute__((visibility("hidden")))
@interface OTPairingMessage : PBCodable

{
    OTSponsorToApplicantRound1M2 *_epoch;
    OTApplicantToSponsorRound2M1 *_prepare;
    OTSOSMessage *_sosPairingMessage;
    OTSponsorToApplicantRound2M2 *_voucher;
}

@property (nonatomic, readonly) _Bool hasEpoch;
@property (retain, nonatomic) OTSponsorToApplicantRound1M2 *epoch;
@property (nonatomic, readonly) _Bool hasPrepare;
@property (retain, nonatomic) OTApplicantToSponsorRound2M1 *prepare;
@property (nonatomic, readonly) _Bool hasVoucher;
@property (retain, nonatomic) OTSponsorToApplicantRound2M2 *voucher;
@property (nonatomic, readonly) _Bool hasSosPairingMessage;
@property (retain, nonatomic) OTSOSMessage *sosPairingMessage;

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
