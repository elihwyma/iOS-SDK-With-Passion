/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CNContactsLogger, CNFavoritesLogger, CNGeminiLogger, CNRegulatoryLogger, CNSpotlightIndexingLogger;

__attribute__((visibility("hidden")))
@interface CNMockLoggerProvider : NSObject

{
    id <CNContactsLogger> _contactsLogger;
    id <CNSpotlightIndexingLogger> _spotlightIndexingLogger;
    id <CNRegulatoryLogger> _regulatoryLogger;
    id <CNFavoritesLogger> _favoritesLogger;
    id <CNGeminiLogger> _geminiLogger;
}

@property (retain, nonatomic) id <CNContactsLogger> contactsLogger;
@property (retain, nonatomic) id <CNSpotlightIndexingLogger> spotlightIndexingLogger;
@property (retain, nonatomic) id <CNRegulatoryLogger> regulatoryLogger;
@property (retain, nonatomic) id <CNFavoritesLogger> favoritesLogger;
@property (retain, nonatomic) id <CNGeminiLogger> geminiLogger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)loggerProvider;

@end
