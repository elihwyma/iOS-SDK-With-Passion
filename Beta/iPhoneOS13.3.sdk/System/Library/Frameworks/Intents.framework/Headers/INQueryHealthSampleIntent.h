/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class HKUnit, NSArray, NSString;

@interface INQueryHealthSampleIntent : INIntent

@property (nonatomic, readonly) long long objectType;
@property (copy, nonatomic, readonly) NSArray *recordDates;
@property (copy, nonatomic, readonly) HKUnit *unit;
@property (nonatomic, readonly) long long questionType;
@property (copy, nonatomic, readonly) NSArray *thresholdValues;
@property (nonatomic, readonly) long long expectedResultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (void)setObjectType:(long long)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setUnit:(id)arg1;
- (void)setQuestionType:(long long)arg1;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setExpectedResultType:(long long)arg1;
- (void)setRecordDates:(id)arg1;
- (void)setThresholdValues:(id)arg1;
- (id)initWithObjectType:(long long)arg1 recordDates:(id)arg2 unit:(id)arg3 questionType:(long long)arg4 thresholdValues:(id)arg5 expectedResultType:(long long)arg6;

@end
