/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSData, NSDate, NSString, PKCurrencyAmount, PKPaymentApplication;

@interface PKRemotePaymentInstrument : NSObject <Swift>

{
    _Bool _supportsAutomaticSelection;
    _Bool _hasAssociatedPeerPaymentAccount;
    NSString *_passIdentifier;
    NSString *_organizationName;
    NSData *_manifestHash;
    NSString *_displayName;
    NSString *_primaryAccountNumberSuffix;
    NSString *_primaryAccountIdentifier;
    NSString *_issuerCountryCode;
    NSArray *_paymentApplications;
    PKPaymentApplication *_primaryPaymentApplication;
    NSDate *_ingestedDate;
    PKCurrencyAmount *_peerPaymentAccountBalance;
    unsigned long long _peerPaymentAccountState;
    NSArray *_associatedWebDomains;
}

@property (copy, nonatomic) NSString *passIdentifier;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSData *manifestHash;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *issuerCountryCode;
@property (retain, nonatomic) NSArray *paymentApplications;
@property (retain, nonatomic) PKPaymentApplication *primaryPaymentApplication;
@property (retain, nonatomic) NSDate *ingestedDate;
@property (nonatomic) _Bool supportsAutomaticSelection;
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentAccountBalance;
@property (nonatomic) _Bool hasAssociatedPeerPaymentAccount;
@property (nonatomic) unsigned long long peerPaymentAccountState;
@property (retain, nonatomic) NSArray *associatedWebDomains;

+ (_Bool)supportsSecureCoding;
+ (id)sortDescriptorForDefaultPaymentInstrument:(id)arg1 supportedNetworks:(id)arg2 merchantCapabilities:(unsigned long long)arg3 webService:(id)arg4;
+ (id)remotePaymentInstrumentWithProtobuf:(id)arg1;
+ (id)thumbnailCachePathForManifestHash:(id)arg1 size:(struct CGSize)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)protobuf;
- (id)initWithPaymentPass:(id)arg1;
- (id)sortedPaymentApplications:(id)arg1 ascending:(_Bool)arg2;
- (_Bool)isEqualToRemotePaymentInstrument:(id)arg1;

@end
