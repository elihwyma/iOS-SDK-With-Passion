/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INDateComponentsRange, INHomeUserTask, NSArray, NSString;

@interface INControlHomeIntent : INIntent

@property (copy, nonatomic, readonly) INHomeUserTask *userTask;
@property (copy, nonatomic, readonly) NSArray *filters;
@property (copy, nonatomic, readonly) INDateComponentsRange *time;
@property (copy, nonatomic, readonly) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (void)setTime:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)setContents:(id)arg1;
- (void)setFilters:(id)arg1;
- (_Bool)_hasTitle;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setUserTask:(id)arg1;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2 time:(id)arg3;
- (id)initWithUserTask:(id)arg1 filters:(id)arg2;
- (id)initWithContents:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;

@end
