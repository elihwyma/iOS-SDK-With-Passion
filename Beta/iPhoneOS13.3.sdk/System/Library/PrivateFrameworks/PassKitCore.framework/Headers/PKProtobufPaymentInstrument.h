/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, NSString;

@interface PKProtobufPaymentInstrument : PBCodable

{
    double _ingestedDate;
    long long _peerPaymentAccountBalance;
    NSMutableArray *_associatedWebDomains;
    NSString *_displayName;
    NSString *_issuerCountryCode;
    NSData *_manifestHash;
    NSString *_organizationName;
    NSString *_passID;
    NSMutableArray *_paymentApplications;
    NSString *_peerPaymentAccountCurrency;
    unsigned int _peerPaymentAccountState;
    NSString *_primaryAccountIdentifier;
    NSString *_primaryAccountNumberSuffix;
    _Bool _hasAssociatedPeerPaymentAccount;
    _Bool _supportsAutomaticSelection;
    struct {
        unsigned int ingestedDate:1;
        unsigned int peerPaymentAccountBalance:1;
        unsigned int peerPaymentAccountState:1;
        unsigned int hasAssociatedPeerPaymentAccount:1;
        unsigned int supportsAutomaticSelection:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *paymentApplications;
@property (nonatomic) _Bool hasIngestedDate;
@property (nonatomic) double ingestedDate;
@property (nonatomic, readonly) _Bool hasPrimaryAccountNumberSuffix;
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix;
@property (nonatomic, readonly) _Bool hasManifestHash;
@property (retain, nonatomic) NSData *manifestHash;
@property (nonatomic, readonly) _Bool hasPrimaryAccountIdentifier;
@property (retain, nonatomic) NSString *primaryAccountIdentifier;
@property (retain, nonatomic) NSMutableArray *associatedWebDomains;
@property (nonatomic) _Bool hasSupportsAutomaticSelection;
@property (nonatomic) _Bool supportsAutomaticSelection;
@property (nonatomic, readonly) _Bool hasIssuerCountryCode;
@property (retain, nonatomic) NSString *issuerCountryCode;
@property (nonatomic) _Bool hasHasAssociatedPeerPaymentAccount;
@property (nonatomic) _Bool hasAssociatedPeerPaymentAccount;
@property (nonatomic, readonly) _Bool hasPeerPaymentAccountCurrency;
@property (retain, nonatomic) NSString *peerPaymentAccountCurrency;
@property (nonatomic) _Bool hasPeerPaymentAccountBalance;
@property (nonatomic) long long peerPaymentAccountBalance;
@property (nonatomic) _Bool hasPeerPaymentAccountState;
@property (nonatomic) unsigned int peerPaymentAccountState;
@property (nonatomic, readonly) _Bool hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;

+ (Class)paymentApplicationsType;
+ (Class)associatedWebDomainsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPaymentApplications:(id)arg1;
- (void)addAssociatedWebDomains:(id)arg1;
- (unsigned long long)paymentApplicationsCount;
- (void)clearPaymentApplications;
- (id)paymentApplicationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedWebDomainsCount;
- (void)clearAssociatedWebDomains;
- (id)associatedWebDomainsAtIndex:(unsigned long long)arg1;

@end
