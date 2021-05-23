/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PBCodable.h>

@class NSString;

@interface PKProtobufPaymentApplication : PBCodable

{
    long long _inAppPINRequiredAmount;
    long long _inAppPriority;
    NSString *_applicationIdentifier;
    NSString *_displayName;
    NSString *_dpanIdentifier;
    NSString *_dpanSuffix;
    NSString *_inAppPINRequiredCurrency;
    unsigned int _paymentNetworkIdentifier;
    unsigned int _paymentType;
    NSString *_sanitizedDpan;
    NSString *_secureElementIdenfitier;
    unsigned int _state;
    NSString *_suspendedReason;
    _Bool _auxiliary;
    _Bool _inAppPINRequired;
    _Bool _supportsContactlessPayment;
    _Bool _supportsInAppPayment;
    struct {
        unsigned int inAppPINRequiredAmount:1;
        unsigned int inAppPriority:1;
        unsigned int paymentNetworkIdentifier:1;
        unsigned int paymentType:1;
        unsigned int state:1;
        unsigned int auxiliary:1;
        unsigned int inAppPINRequired:1;
        unsigned int supportsContactlessPayment:1;
        unsigned int supportsInAppPayment:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDpanIdentifier;
@property (retain, nonatomic) NSString *dpanIdentifier;
@property (nonatomic, readonly) _Bool hasDpanSuffix;
@property (retain, nonatomic) NSString *dpanSuffix;
@property (nonatomic, readonly) _Bool hasSanitizedDpan;
@property (retain, nonatomic) NSString *sanitizedDpan;
@property (nonatomic, readonly) _Bool hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (nonatomic, readonly) _Bool hasSecureElementIdenfitier;
@property (retain, nonatomic) NSString *secureElementIdenfitier;
@property (nonatomic) _Bool hasState;
@property (nonatomic) unsigned int state;
@property (nonatomic, readonly) _Bool hasSuspendedReason;
@property (retain, nonatomic) NSString *suspendedReason;
@property (nonatomic) _Bool hasSupportsContactlessPayment;
@property (nonatomic) _Bool supportsContactlessPayment;
@property (nonatomic) _Bool hasSupportsInAppPayment;
@property (nonatomic) _Bool supportsInAppPayment;
@property (nonatomic) _Bool hasPaymentNetworkIdentifier;
@property (nonatomic) unsigned int paymentNetworkIdentifier;
@property (nonatomic) _Bool hasInAppPINRequired;
@property (nonatomic) _Bool inAppPINRequired;
@property (nonatomic) _Bool hasInAppPINRequiredAmount;
@property (nonatomic) long long inAppPINRequiredAmount;
@property (nonatomic, readonly) _Bool hasInAppPINRequiredCurrency;
@property (retain, nonatomic) NSString *inAppPINRequiredCurrency;
@property (nonatomic) _Bool hasPaymentType;
@property (nonatomic) unsigned int paymentType;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool hasAuxiliary;
@property (nonatomic) _Bool auxiliary;
@property (nonatomic) _Bool hasInAppPriority;
@property (nonatomic) long long inAppPriority;

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
