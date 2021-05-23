/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class HKUnit, INDateComponentsRange, NSArray, NSString;

@interface INSaveHealthSampleIntent : INIntent

@property (copy, nonatomic, readonly) INDateComponentsRange *recordDate;
@property (nonatomic, readonly) long long objectType;
@property (copy, nonatomic, readonly) NSArray *values;
@property (copy, nonatomic, readonly) HKUnit *unit;
@property (copy, nonatomic, readonly) NSArray *sampleMetadatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (void)setValues:(id)arg1;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (void)setObjectType:(long long)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setRecordDate:(id)arg1;
- (void)setSampleMetadatas:(id)arg1;
- (id)initWithRecordDate:(id)arg1 objectType:(long long)arg2 values:(id)arg3 unit:(id)arg4 sampleMetadatas:(id)arg5;

@end
