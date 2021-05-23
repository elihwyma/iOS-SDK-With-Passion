/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INMediaSearch, NSArray, NSString;

@interface INSearchForMediaIntent : INIntent

@property (copy, nonatomic, readonly) NSArray *mediaItems;
@property (copy, nonatomic, readonly) INMediaSearch *mediaSearch;
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
- (void)setMediaItems:(id)arg1;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setMediaSearch:(id)arg1;
- (id)initWithMediaItems:(id)arg1 mediaSearch:(id)arg2;

@end
