/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INCurrencyAmount, INPerson, NSString;

@interface INSendPaymentIntent : INIntent

@property (copy, nonatomic, readonly) INPerson *payee;
@property (copy, nonatomic, readonly) INCurrencyAmount *currencyAmount;
@property (copy, nonatomic, readonly) NSString *note;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setNote:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (_Bool)_isUserConfirmationRequired;
- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;
- (void)setCurrencyAmount:(id)arg1;
- (void)setPayee:(id)arg1;
- (id)initWithPayee:(id)arg1 currencyAmount:(id)arg2 note:(id)arg3;

@end
