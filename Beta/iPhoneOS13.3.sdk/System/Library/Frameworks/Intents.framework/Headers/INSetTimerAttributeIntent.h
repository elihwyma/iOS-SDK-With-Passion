/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, INTimer, NSString;

@interface INSetTimerAttributeIntent : INIntent

@property (copy, nonatomic, readonly) INTimer *targetTimer;
@property (nonatomic, readonly) double toDuration;
@property (copy, nonatomic, readonly) INSpeakableString *toLabel;
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
- (void)setTargetTimer:(id)arg1;
- (void)setToDuration:(double)arg1;
- (void)setToLabel:(id)arg1;
- (id)initWithTargetTimer:(id)arg1 toDuration:(double)arg2 toLabel:(id)arg3;

@end
