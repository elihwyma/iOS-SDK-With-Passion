/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INContactEventTrigger, INSpatialEventTrigger, INTaskList, INTemporalEventTrigger, NSArray, NSString;

@interface INAddTasksIntent : INIntent

@property (copy, nonatomic) NSArray *contactEventTriggers;
@property (copy, nonatomic, readonly) INTaskList *targetTaskList;
@property (copy, nonatomic, readonly) NSArray *taskTitles;
@property (copy, nonatomic, readonly) INSpatialEventTrigger *spatialEventTrigger;
@property (copy, nonatomic, readonly) INTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long taskReference;
@property (copy, nonatomic) NSArray *targetTaskListMembers;
@property (copy, nonatomic) INContactEventTrigger *contactEventTrigger;
@property (copy, nonatomic) INIntent *intent;

- (id)domain;
- (id)_metadata;
- (void)setPriority:(long long)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTargetTaskList:(id)arg1;
- (id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4 priority:(long long)arg5;
- (id)initWithTargetTaskList:(id)arg1 taskTitles:(id)arg2 spatialEventTrigger:(id)arg3 temporalEventTrigger:(id)arg4;

@end
