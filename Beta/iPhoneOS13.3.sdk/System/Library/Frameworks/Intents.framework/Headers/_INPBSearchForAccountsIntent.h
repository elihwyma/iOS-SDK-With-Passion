/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSearchForAccountsIntent : PBCodable <Swift>

{
    struct {
        unsigned int accountType:1;
        unsigned int requestedBalanceType:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _accountType;
    int _requestedBalanceType;
    _INPBDataString *_accountNickname;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDataString *_organizationName;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBDataString *accountNickname;
@property (nonatomic, readonly) _Bool hasAccountNickname;
@property (nonatomic) int accountType;
@property (nonatomic) _Bool hasAccountType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (nonatomic) int requestedBalanceType;
@property (nonatomic) _Bool hasRequestedBalanceType;

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
- (id)requestedBalanceTypeAsString:(int)arg1;
- (int)StringAsRequestedBalanceType:(id)arg1;

@end
