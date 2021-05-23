/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <IMAssistantCore/Swift-Protocol.h>

@class NSCache;

@protocol IMAssistantAccountDataSource, IMAssistantChatDataSource, IMAssistantContactsDataSource, IMLocationManager;

@protocol IMAssistantMessageHandlerDataSource <Swift>

@property (nonatomic, readonly) id <IMAssistantContactsDataSource> contactsDataSource;
@property (nonatomic, readonly) id <IMAssistantChatDataSource> chatDataSource;
@property (nonatomic, readonly) id <IMAssistantAccountDataSource> accountDataSource;
@property (nonatomic, readonly) id <IMLocationManager> locationManagerDataSource;
@property (nonatomic, readonly) NSCache *handleToContactIdentifierCache;
@property (nonatomic, readonly) NSCache *spiHandleToPersonCache;
@property (nonatomic, readonly) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property (nonatomic, readonly) _Bool isInternationalSpamFilteringEnabled;

- (unsigned short)screentimeAllowedToShowChat: /* Error: Ran out of types for this method. */;
- (unsigned short)screentimeAllowedToShowConversationWithHandleIDs: /* Error: Ran out of types for this method. */;

@end
