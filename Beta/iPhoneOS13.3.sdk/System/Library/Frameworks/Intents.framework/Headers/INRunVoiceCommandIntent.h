/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INIntentExecutionResult, INSpeakableString, INVoiceCommandDeviceInformation, NSString;

@interface INRunVoiceCommandIntent : INIntent

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) INSpeakableString *voiceCommand;
@property (copy, nonatomic, readonly) INVoiceCommandDeviceInformation *originDevice;
@property (copy, nonatomic, readonly) INIntentExecutionResult *executionResult;
@property (copy, nonatomic, readonly) NSString *previousIntentIdentifier;
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
- (_Bool)_intents_enumerateObjectsOfClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)setExecutionResult:(id)arg1;
- (void)setOriginDevice:(id)arg1;
- (void)setPreviousIntentIdentifier:(id)arg1;
- (void)setVoiceCommand:(id)arg1;
- (id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3 previousIntentIdentifier:(id)arg4;
- (id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2;
- (id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2 executionResult:(id)arg3;

@end
