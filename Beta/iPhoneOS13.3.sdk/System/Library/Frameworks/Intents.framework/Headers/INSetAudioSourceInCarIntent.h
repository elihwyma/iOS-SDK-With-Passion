/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class NSString;

@interface INSetAudioSourceInCarIntent : INIntent

@property (nonatomic, readonly) long long audioSource;
@property (nonatomic, readonly) long long relativeAudioSourceReference;
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
- (void)setAudioSource:(long long)arg1;
- (void)setRelativeAudioSourceReference:(long long)arg1;
- (id)initWithAudioSource:(long long)arg1 relativeAudioSourceReference:(long long)arg2;

@end
