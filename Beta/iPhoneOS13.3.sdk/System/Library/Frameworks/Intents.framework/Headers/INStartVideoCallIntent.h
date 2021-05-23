/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class NSArray, NSString;

@interface INStartVideoCallIntent : INIntent

@property (copy, nonatomic, readonly) NSArray *contacts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long audioRoute;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setContacts:(id)arg1;
- (id)initWithContacts:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;
- (id)_spotlightContentType;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;

@end
