/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSNumber, NSString;

@interface INStartWorkoutIntent : INIntent

@property (copy, nonatomic, readonly) INSpeakableString *workoutName;
@property (copy, nonatomic, readonly) NSNumber *goalValue;
@property (nonatomic, readonly) long long workoutGoalUnitType;
@property (nonatomic, readonly) long long workoutLocationType;
@property (copy, nonatomic, readonly) NSNumber *isOpenEnded;
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
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (void)setWorkoutName:(id)arg1;
- (void)setGoalValue:(id)arg1;
- (void)setIsOpenEnded:(id)arg1;
- (void)setWorkoutGoalUnitType:(long long)arg1;
- (void)setWorkoutLocationType:(long long)arg1;
- (id)initWithWorkoutName:(id)arg1 goalValue:(id)arg2 workoutGoalUnitType:(long long)arg3 workoutLocationType:(long long)arg4 isOpenEnded:(id)arg5;

@end
