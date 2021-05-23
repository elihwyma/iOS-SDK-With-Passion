/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INArchivedObject, INSpeakableString, NSString;

@interface INRunWorkflowIntent : INIntent

@property (copy, nonatomic, readonly) INSpeakableString *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) INArchivedObject *stepIntentResponse;

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
- (void)setWorkflow:(id)arg1;
- (id)initWithWorkflow:(id)arg1;

@end
