/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSArray, NSString;

@interface INCreateTaskListIntent : INIntent

@property (copy, nonatomic, readonly) INSpeakableString *title;
@property (copy, nonatomic, readonly) NSArray *taskTitles;
@property (copy, nonatomic, readonly) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (void)setTitle:(id)arg1;
- (void)setGroupName:(id)arg1;
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
- (void)setTaskTitles:(id)arg1;
- (id)initWithTitle:(id)arg1 taskTitles:(id)arg2 groupName:(id)arg3;

@end
