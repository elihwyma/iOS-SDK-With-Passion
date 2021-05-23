/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@protocol CNContactsLogger, CNFavoritesLogger, CNGeminiLogger, CNRegulatoryLogger, CNSpotlightIndexingLogger;

@protocol CNContactsLoggerProvider <Swift>

@property (nonatomic, readonly) id <CNContactsLogger> contactsLogger;
@property (nonatomic, readonly) id <CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property (nonatomic, readonly) id <CNRegulatoryLogger> regulatoryLogger;
@property (nonatomic, readonly) id <CNFavoritesLogger> favoritesLogger;
@property (nonatomic, readonly) id <CNGeminiLogger> geminiLogger;

@end
