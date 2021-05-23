/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class CLPlacemark, INDateComponentsRange, INPaymentMethod, INSpeakableString, NSNumber, NSString;

@interface INRequestRideIntent : INIntent

@property (copy, nonatomic, readonly) CLPlacemark *pickupLocation;
@property (copy, nonatomic, readonly) CLPlacemark *dropOffLocation;
@property (copy, nonatomic, readonly) INSpeakableString *rideOptionName;
@property (copy, nonatomic, readonly) NSNumber *partySize;
@property (copy, nonatomic, readonly) INPaymentMethod *paymentMethod;
@property (copy, nonatomic, readonly) INDateComponentsRange *scheduledPickupTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (_Bool)_isUserConfirmationRequired;
- (void)setPickupLocation:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (void)setRideOptionName:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setScheduledPickupTime:(id)arg1;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5 scheduledPickupTime:(id)arg6;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 rideOptionName:(id)arg3 partySize:(id)arg4 paymentMethod:(id)arg5;

@end
