/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class CLPlacemark, NSString;

@interface INListRideOptionsIntent : INIntent

@property (copy, nonatomic, readonly) CLPlacemark *pickupLocation;
@property (copy, nonatomic, readonly) CLPlacemark *dropOffLocation;
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
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setPickupLocation:(id)arg1;
- (void)setDropOffLocation:(id)arg1;
- (id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2;

@end
