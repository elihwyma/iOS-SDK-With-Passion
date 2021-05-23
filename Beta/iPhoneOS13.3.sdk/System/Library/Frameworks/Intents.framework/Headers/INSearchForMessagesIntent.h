/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INDateComponentsRange, NSArray, NSString;

@interface INSearchForMessagesIntent : INIntent

@property (copy, nonatomic, readonly) NSArray *recipients;
@property (nonatomic, readonly) long long recipientsOperator;
@property (copy, nonatomic, readonly) NSArray *senders;
@property (nonatomic, readonly) long long sendersOperator;
@property (copy, nonatomic, readonly) NSArray *searchTerms;
@property (nonatomic, readonly) long long searchTermsOperator;
@property (nonatomic, readonly) unsigned long long attributes;
@property (copy, nonatomic, readonly) INDateComponentsRange *dateTimeRange;
@property (copy, nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, readonly) long long identifiersOperator;
@property (copy, nonatomic, readonly) NSArray *notificationIdentifiers;
@property (nonatomic, readonly) long long notificationIdentifiersOperator;
@property (copy, nonatomic, readonly) NSArray *speakableGroupNames;
@property (nonatomic, readonly) long long speakableGroupNamesOperator;
@property (copy, nonatomic, readonly) NSArray *conversationIdentifiers;
@property (nonatomic, readonly) long long conversationIdentifiersOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)contents;
- (void)setAttributes:(unsigned long long)arg1;
- (id)_metadata;
- (void)setRecipients:(id)arg1;
- (id)attributeSet;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)setContents:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 contents:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7;
- (long long)contentsOperator;
- (id)contentPredicate;
- (void)setSearchTerms:(id)arg1;
- (void)setDateTimeRange:(id)arg1;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 groupNames:(id)arg8;
- (id)groupNames;
- (void)setGroupNames:(id)arg1;
- (long long)groupNamesOperator;
- (void)setSenders:(id)arg1;
- (void)setNotificationIdentifiers:(id)arg1;
- (void)setSpeakableGroupNames:(id)arg1;
- (void)setConversationIdentifiers:(id)arg1;
- (id)initWithRecipients:(id)arg1 senders:(id)arg2 searchTerms:(id)arg3 attributes:(unsigned long long)arg4 dateTimeRange:(id)arg5 identifiers:(id)arg6 notificationIdentifiers:(id)arg7 speakableGroupNames:(id)arg8 conversationIdentifiers:(id)arg9;

@end
