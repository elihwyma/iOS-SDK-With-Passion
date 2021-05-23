/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSString;

@interface INActivateCarSignalIntent : INIntent

@property (copy, nonatomic, readonly) INSpeakableString *carName;
@property (nonatomic, readonly) unsigned long long signals;
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
- (void)setCarName:(id)arg1;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setSignals:(unsigned long long)arg1;
- (id)initWithCarName:(id)arg1 signals:(unsigned long long)arg2;

@end
