/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@interface _INPBFinancialAccountValue : PBCodable <Swift>

{
    struct {
        unsigned int accountType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _accountType;
    _INPBDataString *_accountNickname;
    NSString *_accountNumber;
    _INPBBalanceAmountValue *_balance;
    _INPBDataString *_organizationName;
    _INPBBalanceAmountValue *_secondaryBalance;
    _INPBValueMetadata *_valueMetadata;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDataString *accountNickname;
@property (nonatomic, readonly) _Bool hasAccountNickname;
@property (copy, nonatomic) NSString *accountNumber;
@property (nonatomic, readonly) _Bool hasAccountNumber;
@property (nonatomic) int accountType;
@property (nonatomic) _Bool hasAccountType;
@property (retain, nonatomic) _INPBBalanceAmountValue *balance;
@property (nonatomic, readonly) _Bool hasBalance;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance;
@property (nonatomic, readonly) _Bool hasSecondaryBalance;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (nonatomic, readonly) _Bool hasValueMetadata;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)accountTypeAsString:(int)arg1;
- (int)StringAsAccountType:(id)arg1;

@end
