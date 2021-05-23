/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INBillPayee, INDateComponentsRange, NSString;

@interface INSearchForBillsIntent : INIntent

@property (copy, nonatomic, readonly) INBillPayee *billPayee;
@property (copy, nonatomic, readonly) INDateComponentsRange *paymentDateRange;
@property (nonatomic, readonly) long long billType;
@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) INDateComponentsRange *dueDateRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setBillPayee:(id)arg1;
- (void)setBillType:(long long)arg1;
- (void)setDueDateRange:(id)arg1;
- (void)setPaymentDateRange:(id)arg1;
- (id)initWithBillPayee:(id)arg1 paymentDateRange:(id)arg2 billType:(long long)arg3 status:(long long)arg4 dueDateRange:(id)arg5;

@end
