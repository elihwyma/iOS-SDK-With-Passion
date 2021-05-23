/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class CLPlacemark, INDateComponentsRange, INSpeakableString, NSString;

@interface INSearchForNotebookItemsIntent : INIntent

@property (copy, nonatomic, readonly) INSpeakableString *title;
@property (copy, nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) long long itemType;
@property (nonatomic, readonly) long long status;
@property (copy, nonatomic, readonly) CLPlacemark *location;
@property (nonatomic, readonly) long long locationSearchType;
@property (copy, nonatomic, readonly) INDateComponentsRange *dateTime;
@property (nonatomic, readonly) long long dateSearchType;
@property (nonatomic, readonly) unsigned long long temporalEventTriggerTypes;
@property (nonatomic, readonly) long long taskPriority;
@property (copy, nonatomic, readonly) NSString *notebookItemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) INSpeakableString *groupName;
@property (nonatomic) _Bool includeAllNoteContents;

- (id)domain;
- (id)_metadata;
- (void)setTitle:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (void)setStatus:(long long)arg1;
- (id)_dictionaryRepresentation;
- (void)setLocation:(id)arg1;
- (void)setContent:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)setItemType:(long long)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setDateTime:(id)arg1;
- (void)setLocationSearchType:(long long)arg1;
- (void)setDateSearchType:(long long)arg1;
- (void)setTemporalEventTriggerTypes:(unsigned long long)arg1;
- (void)setTaskPriority:(long long)arg1;
- (void)setNotebookItemIdentifier:(id)arg1;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 temporalEventTriggerTypes:(unsigned long long)arg9 taskPriority:(long long)arg10 notebookItemIdentifier:(id)arg11;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8;
- (id)initWithTitle:(id)arg1 content:(id)arg2 itemType:(long long)arg3 status:(long long)arg4 location:(id)arg5 locationSearchType:(long long)arg6 dateTime:(id)arg7 dateSearchType:(long long)arg8 notebookItemIdentifier:(id)arg9;

@end
