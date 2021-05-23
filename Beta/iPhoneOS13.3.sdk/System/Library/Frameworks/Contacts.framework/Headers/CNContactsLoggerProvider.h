/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNContactsLogger, CNFavoritesLogger, CNGeminiLogger, CNRegulatoryLogger, CNSpotlightIndexingLogger;

@interface CNContactsLoggerProvider : NSObject

{
    id <CNContactsLogger> _contactsLogger;
    id <CNSpotlightIndexingLogger> _spotlightIndexingLogger;
    id <CNRegulatoryLogger> _regulatoryLogger;
    id <CNFavoritesLogger> _favoritesLogger;
    id <CNGeminiLogger> _geminiLogger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CNContactsLogger> contactsLogger;
@property (nonatomic, readonly) id <CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property (nonatomic, readonly) id <CNRegulatoryLogger> regulatoryLogger;
@property (nonatomic, readonly) id <CNFavoritesLogger> favoritesLogger;
@property (nonatomic, readonly) id <CNGeminiLogger> geminiLogger;

+ (id)defaultProvider;

@end
