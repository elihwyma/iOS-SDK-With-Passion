/*
 Image: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSCache, NSString;

@protocol IMAssistantAccountDataSource, IMAssistantChatDataSource, IMAssistantContactsDataSource, IMLocationManager;

@interface IMAssistantMessageHandlerDefaultDataSource : NSObject

{
    _Bool _didRegisterForContactStoreChangeNotifications;
    CNContactStore *_contactStore;
}

@property (nonatomic) _Bool didRegisterForContactStoreChangeNotifications;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <IMAssistantContactsDataSource> contactsDataSource;
@property (nonatomic, readonly) id <IMAssistantChatDataSource> chatDataSource;
@property (nonatomic, readonly) id <IMAssistantAccountDataSource> accountDataSource;
@property (nonatomic, readonly) id <IMLocationManager> locationManagerDataSource;
@property (nonatomic, readonly) NSCache *handleToContactIdentifierCache;
@property (nonatomic, readonly) NSCache *spiHandleToPersonCache;
@property (nonatomic, readonly) NSCache *contactIdentifierToUnifiedContactIdentifierCache;
@property (nonatomic, readonly) _Bool isInternationalSpamFilteringEnabled;

- (void)contactStoreDidChange:(id)arg1;
- (_Bool)screentimeAllowedToShowChat:(id)arg1;
- (_Bool)screentimeAllowedToShowConversationWithHandleIDs:(id)arg1;
- (void)registerForContactStoreChangeNotificationsIfNecessary;

@end
