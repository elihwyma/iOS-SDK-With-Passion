/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INContactEventTrigger, INSpatialEventTrigger, INSpeakableString, INTask, INTemporalEventTrigger, NSString;

@interface INSetTaskAttributeIntent : INIntent

@property (copy, nonatomic, readonly) INTask *targetTask;
@property (copy, nonatomic, readonly) INSpeakableString *taskTitle;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) long long priority;
@property (copy, nonatomic, readonly) INSpatialEventTrigger *spatialEventTrigger;
@property (copy, nonatomic, readonly) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) INContactEventTrigger *contactEventTrigger;

- (id)domain;
- (id)_metadata;
- (void)setPriority:(long long)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setTargetTask:(id)arg1;
- (void)setTaskTitle:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithTargetTask:(id)arg1 status:(long long)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;
- (id)initWithTargetTask:(id)arg1 taskTitle:(id)arg2 status:(long long)arg3 priority:(long long)arg4 spatialEventTrigger:(id)arg5 temporalEventTrigger:(id)arg6;

@end
