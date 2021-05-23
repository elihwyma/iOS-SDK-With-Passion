/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@interface INTransferMoneyIntent : INIntent

@property (copy, nonatomic, readonly) INPaymentAccount *fromAccount;
@property (copy, nonatomic, readonly) INPaymentAccount *toAccount;
@property (copy, nonatomic, readonly) INPaymentAmount *transactionAmount;
@property (copy, nonatomic, readonly) INDateComponentsRange *transactionScheduledDate;
@property (copy, nonatomic, readonly) NSString *transactionNote;
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
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setFromAccount:(id)arg1;
- (void)setToAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (id)initWithFromAccount:(id)arg1 toAccount:(id)arg2 transactionAmount:(id)arg3 transactionScheduledDate:(id)arg4 transactionNote:(id)arg5;
- (_Bool)_isUserConfirmationRequired;

@end
