/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INNote, INNoteContent, NSString;

@interface INAppendToNoteIntent : INIntent

@property (copy, nonatomic, readonly) INNote *targetNote;
@property (copy, nonatomic, readonly) INNoteContent *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)setContent:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setTargetNote:(id)arg1;
- (id)initWithTargetNote:(id)arg1 content:(id)arg2;

@end
