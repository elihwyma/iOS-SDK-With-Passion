/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSArray, NSSet, NSString;

@interface PKAddPaymentPassRequestConfiguration : NSObject <Swift>

{
    _Bool _requiresFelicaSecureElement;
    NSString *_encryptionScheme;
    long long _style;
    NSString *_cardholderName;
    NSString *_primaryAccountSuffix;
    NSArray *_cardDetails;
    NSString *_localizedDescription;
    NSString *_primaryAccountIdentifier;
    NSString *_paymentNetwork;
    NSSet *_productIdentifiers;
}

@property (copy, nonatomic, readonly) NSString *encryptionScheme;
@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *cardholderName;
@property (copy, nonatomic) NSString *primaryAccountSuffix;
@property (copy, nonatomic) NSArray *cardDetails;
@property (copy, nonatomic) NSString *localizedDescription;
@property (copy, nonatomic) NSString *primaryAccountIdentifier;
@property (copy, nonatomic) NSString *paymentNetwork;
@property (copy, nonatomic) NSSet *productIdentifiers;
@property (nonatomic) _Bool requiresFelicaSecureElement;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncryptionScheme:(id)arg1;

@end
