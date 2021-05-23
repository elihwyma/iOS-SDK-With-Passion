/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSArray;

@protocol CNUICoreContactStoreFacade;

@interface CNUICoreContactRefetcher : NSObject

{
    id <CNUICoreContactStoreFacade> _contactStore;
    NSArray *_contactsToRefetch;
    NSArray *_keysToFetch;
}

@property (nonatomic, readonly) id <CNUICoreContactStoreFacade> contactStore;
@property (nonatomic, readonly) NSArray *contactsToRefetch;
@property (nonatomic, readonly) NSArray *keysToFetch;

+ (id)contactsByReplacingContacts:(id)arg1 withContactsHavingMatchingIdentifier:(id)arg2;
+ (id)refetchedContacts:(id)arg1 fromStore:(id)arg2 keysToFetch:(id)arg3;
+ (struct CNPair *)contactsFoundAndNotFoundByPartioningContacts:(id)arg1 usingFoundContacts:(id)arg2;

- (id)init;
- (id)allContacts;
- (id)initWithContactStore:(id)arg1 contactsToRefetch:(id)arg2 keysToFetch:(id)arg3;
- (id)foundContacts;
- (id)contactsFoundAndNotFound;
- (id)initWithContactStore:(id)arg1 contactsToRefetch:(id)arg2;

@end
