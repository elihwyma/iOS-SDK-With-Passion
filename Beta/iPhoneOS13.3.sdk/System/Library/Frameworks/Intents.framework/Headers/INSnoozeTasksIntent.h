/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INDateComponentsRange, NSArray, NSNumber, NSString;

@interface INSnoozeTasksIntent : INIntent

@property (copy, nonatomic, readonly) NSArray *tasks;
@property (copy, nonatomic, readonly) INDateComponentsRange *nextTriggerTime;
@property (copy, nonatomic, readonly) NSNumber *all;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)setTasks:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setNextTriggerTime:(id)arg1;
- (void)setAll:(id)arg1;
- (id)initWithTasks:(id)arg1 nextTriggerTime:(id)arg2 all:(id)arg3;

@end
