/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSDecimalNumber, NSNumber, NSSet, NSString, PKColor, PKImage, PKNFCPayload, PKPaymentApplication, PKTransitAppletState;

@interface NPKPassDescription : NSObject

{
    _Bool _hasStoredValue;
    _Bool _privateLabel;
    _Bool _cobranded;
    _Bool _deletePending;
    _Bool _hasUserSelectableContactlessPaymentApplications;
    _Bool _hasAssociatedPeerPaymentAccount;
    _Bool _lazyLoadEncodedImages;
    PKImage *_logoImage;
    PKImage *_backgroundImage;
    unsigned long long _expressPassTypesMask;
    NSData *_backgroundImageEncoded;
    NSData *_logoImageEncoded;
    NSString *_uniqueID;
    NSNumber *_groupID;
    NSString *_passTypeIdentifier;
    NSData *_manifestHash;
    long long _style;
    NSDate *_relevantDate;
    NSDate *_ingestionDate;
    PKNFCPayload *_nfcPayload;
    NSData *_completeHash;
    unsigned long long _settings;
    NSString *_logoText;
    PKColor *_backgroundColor;
    PKColor *_foregroundColor;
    PKColor *_labelColor;
    NSString *_localizedDescription;
    NSSet *_devicePaymentApplications;
    PKPaymentApplication *_devicePrimaryPaymentApplication;
    PKPaymentApplication *_devicePrimaryContactlessPaymentApplication;
    PKPaymentApplication *_devicePrimaryInAppPaymentApplication;
    PKPaymentApplication *_preferredPaymentApplication;
    long long _effectivePaymentApplicationState;
    NSString *_issuerCountryCode;
    NSArray *_availableActions;
    NSString *_organizationName;
    PKTransitAppletState *_transitAppletState;
    NSArray *_frontFieldBuckets;
    NSArray *_backFieldBuckets;
    NSDecimalNumber *_lastAddValueAmount;
    NSDate *_pendingAddValueDate;
}

@property (retain, nonatomic) NSData *logoImageEncoded;
@property (retain, nonatomic) NSData *backgroundImageEncoded;
@property (nonatomic) _Bool lazyLoadEncodedImages;
@property (retain, nonatomic) NSString *uniqueID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSData *manifestHash;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSDate *relevantDate;
@property (retain, nonatomic) NSDate *ingestionDate;
@property (retain, nonatomic) PKNFCPayload *nfcPayload;
@property (nonatomic) _Bool hasStoredValue;
@property (retain, nonatomic) NSData *completeHash;
@property (nonatomic) unsigned long long settings;
@property (retain, nonatomic) NSString *logoText;
@property (retain, nonatomic) PKImage *logoImage;
@property (retain, nonatomic) PKColor *backgroundColor;
@property (retain, nonatomic) PKColor *foregroundColor;
@property (retain, nonatomic) PKColor *labelColor;
@property (retain, nonatomic) PKImage *backgroundImage;
@property (retain, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSSet *devicePaymentApplications;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryContactlessPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryInAppPaymentApplication;
@property (retain, nonatomic) PKPaymentApplication *preferredPaymentApplication;
@property (nonatomic) long long effectivePaymentApplicationState;
@property (nonatomic, getter=isPrivateLabel) _Bool privateLabel;
@property (nonatomic, getter=isCobranded) _Bool cobranded;
@property (nonatomic) _Bool deletePending;
@property (nonatomic) _Bool hasUserSelectableContactlessPaymentApplications;
@property (retain, nonatomic) NSString *issuerCountryCode;
@property (nonatomic, readonly) long long effectiveContactlessPaymentApplicationState;
@property (retain, nonatomic) NSArray *availableActions;
@property (retain, nonatomic) NSString *organizationName;
@property (retain, nonatomic) PKTransitAppletState *transitAppletState;
@property (retain, nonatomic) NSArray *frontFieldBuckets;
@property (retain, nonatomic) NSArray *backFieldBuckets;
@property (retain, nonatomic) NSDecimalNumber *lastAddValueAmount;
@property (retain, nonatomic) NSDate *pendingAddValueDate;
@property (nonatomic) _Bool hasAssociatedPeerPaymentAccount;
@property (nonatomic) unsigned long long expressPassTypesMask;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isCachingEnabled;
+ (void)setCachingEnabled:(_Bool)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPass:(id)arg1;
- (_Bool)hasValidNFCPayload;
- (id)fieldForKey:(id)arg1;
- (id)transitProperties;
- (id)initWithPass:(id)arg1 lazyLoadEncodedImages:(_Bool)arg2;
- (id)encodeAsData:(id)arg1;
- (_Bool)supportsInAppPaymentOnNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 paymentApplicationStates:(id)arg4;
- (void)encodeObject:(id)arg1 asDataInCoder:(id)arg2 withKey:(id)arg3;
- (_Bool)supportsInAppPaymentOnNetworks:(id)arg1 issuerCountryCodes:(id)arg2;
- (_Bool)isAddValuePending;
- (_Bool)isEnroute;

@end
