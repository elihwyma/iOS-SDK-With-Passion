/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSString;

@interface INSearchForTimersIntent : INIntent

@property (copy, nonatomic, readonly) INSpeakableString *label;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (void)setType:(long long)arg1;
- (id)_metadata;
- (void)setState:(long long)arg1;
- (void)setLabel:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)setDuration:(double)arg1;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 state:(long long)arg3 type:(long long)arg4;

@end
