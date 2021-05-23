/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface PKExpressPassInformation : NSObject <Swift>

{
    NSDictionary *_configuration;
    _Bool _forceModernEncoding;
    long long _cardType;
    NSString *_passUniqueIdentifier;
    NSString *_paymentApplicationIdentifier;
    NSString *_expressMode;
    long long _expressPassType;
}

@property (nonatomic, readonly) long long cardType;
@property (nonatomic, readonly) NSString *passUniqueIdentifier;
@property (nonatomic) _Bool forceModernEncoding;
@property (nonatomic, readonly) NSString *paymentApplicationIdentifier;
@property (nonatomic, readonly) NSString *expressMode;
@property (nonatomic, readonly) long long expressPassType;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)criteriaForPaymentApplicationIdentifier:(id)arg1;
- (id)initForPaymentPass:(id)arg1 withTechologyTest:(CDUnknownBlockType)arg2;
- (id)initDummyExpressInfoForAutomaticSelectionCriteriaUpgradeRequest:(id)arg1 paymentPass:(id)arg2 withTechologyTest:(CDUnknownBlockType)arg3;
- (id)paymentApplicationIdentifiers;
- (id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3;
- (void)_createLegacyPropertiesIfNecessary;
- (id)_initForPaymentPass:(id)arg1 configuration:(id)arg2;
- (void)_createModernPropertiesIfNecessary;
- (void)enumerateCriteriaWithHandler:(CDUnknownBlockType)arg1;

@end
