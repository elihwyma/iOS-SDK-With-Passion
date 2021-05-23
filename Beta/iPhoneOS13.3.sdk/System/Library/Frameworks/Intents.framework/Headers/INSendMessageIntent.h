/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INPerson, INSpeakableString, NSArray, NSString;

@interface INSendMessageIntent : INIntent

@property (copy, nonatomic, readonly) NSArray *recipients;
@property (copy, nonatomic, readonly) NSString *content;
@property (copy, nonatomic, readonly) INSpeakableString *speakableGroupName;
@property (copy, nonatomic, readonly) NSString *conversationIdentifier;
@property (copy, nonatomic, readonly) NSString *serviceName;
@property (copy, nonatomic, readonly) INPerson *sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long effect;
@property (copy, nonatomic) NSArray *attachments;
@property (nonatomic) long long messageType;

+ (id)_ignoredParameters;

- (id)domain;
- (id)_metadata;
- (id)groupName;
- (void)setGroupName:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setRecipients:(id)arg1;
- (id)verb;
- (void)setDomain:(id)arg1;
- (void)setServiceName:(id)arg1;
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
- (id)initWithRecipients:(id)arg1 content:(id)arg2 serviceName:(id)arg3 sender:(id)arg4;
- (_Bool)_isUserConfirmationRequired;
- (_Bool)_isValidSubProducer:(id)arg1;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 groupName:(id)arg3 serviceName:(id)arg4 sender:(id)arg5;
- (_Bool)configureAttributeSet:(id)arg1 includingData:(_Bool)arg2;
- (id)_spotlightContentType;
- (void)setConversationIdentifier:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (_Bool)_supportsBackgroundExecution;
- (long long)_preferredInteractionDirection;
- (id)initWithRecipients:(id)arg1 content:(id)arg2 speakableGroupName:(id)arg3 conversationIdentifier:(id)arg4 serviceName:(id)arg5 sender:(id)arg6;
- (id)_redactedDictionaryRepresentation;

@end
