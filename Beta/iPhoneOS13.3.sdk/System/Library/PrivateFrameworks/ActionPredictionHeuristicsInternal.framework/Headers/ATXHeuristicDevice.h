/*
 Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

#import <NSObject.h>

@class CNContact, CNContactStore, CNFavorites, NSDate, NSMutableDictionary;

@interface ATXHeuristicDevice : NSObject

{
    CNContactStore *_contactStoreLazy;
    CNContact *_meContactLazy;
    CNFavorites *_favoriteContactsLazy;
    NSDate *_now;
    NSMutableDictionary *_wrappedObjects;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNFavorites *favoriteContacts;
@property (nonatomic, readonly) NSDate *now;

+ (id)sharedEventStore;
+ (id)sharedCalendarVisibilityManager;

- (id)meContact;
- (id)_unwrap:(id)arg1;
- (void)setNow:(id)arg1;
- (id)_contactKeysToFetch;
- (id)_wrap:(id)arg1;
- (id)contactsForPredicate:(id)arg1;
- (id)_contactForPredicate:(id)arg1;
- (id)dictContactForCNContact:(id)arg1;
- (id)_dictContactForIdentifier:(id)arg1;
- (id)_dictContactForParticipant:(id)arg1;
- (id)_dictForAttachment:(id)arg1;
- (id)dictForEvent:(id)arg1;
- (id)wrap:(id)arg1;

@end
