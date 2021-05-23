/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INTimer, NSNumber, NSString;

@interface INPauseTimerIntent : INIntent

@property (copy, nonatomic, readonly) INTimer *targetTimer;
@property (copy, nonatomic, readonly) NSNumber *pauseMultiple;
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
- (void)setTargetTimer:(id)arg1;
- (void)setPauseMultiple:(id)arg1;
- (id)initWithTargetTimer:(id)arg1 pauseMultiple:(id)arg2;

@end
