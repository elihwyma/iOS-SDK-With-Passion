/*
 Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

#import <Foundation/NSObject.h>

@class CNContactStore, NSArray, NSDictionary, NSMutableSet, NSString, TCSContacts;

@protocol TCSContactsDataSourceDelegate;

@interface TCSContactsDataSource : NSObject

{
    TCSContacts *_contacts;
    NSMutableSet *_whitelistedContactIdentifiers;
    NSMutableSet *_inviterContactIdentifiers;
    NSDictionary *_whitelistedContactMap;
    NSDictionary *_inviterContactMap;
    NSDictionary *_inviteeContactMap;
    int _namePrefChangeToken;
    id <TCSContactsDataSourceDelegate> _delegate;
    CNContactStore *_contactStore;
    NSArray *_sortedContacts;
    NSArray *_sortedInviters;
    NSArray *_sortedInvitees;
}

@property (retain, nonatomic) NSArray *sortedContacts;
@property (retain, nonatomic) NSArray *sortedInviters;
@property (retain, nonatomic) NSArray *sortedInvitees;
@property (weak, nonatomic) id <TCSContactsDataSourceDelegate> delegate;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) TCSContacts *contacts;
@property (nonatomic, readonly) unsigned long long sectionCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (void)dealloc;
- (id)contactWithIdentifier:(id)arg1;
- (void)removeContact:(id)arg1;
- (void)_handleDeviceFirstUnlock;
- (void)destinationsDidChange:(id)arg1;
- (void)recencyDidChange:(id)arg1;
- (void)contactBecameAccepted:(id)arg1;
- (id)initWithContactStore:(id)arg1 contacts:(id)arg2;
- (void)_handlePersonNamePreferencesChangeNotification;
- (void)_handleContactStoreDidChange:(id)arg1;
- (void)_updateSortedContactsAndNotifyIfChanged:(_Bool)arg1;
- (id)_sortedContactsArrayFromArray:(id)arg1;
- (id)_contactMapFromArray:(id)arg1;
- (long long)_sectionForContact:(id)arg1;
- (void)removeContact:(id)arg1 inSection:(long long)arg2;
- (id)_contactsForSection:(long long)arg1;
- (void)_notifyDelegateRecencyChanged;
- (id)_unsortedContactsArray;
- (id)_sortedContactsArrayFromArray:(id)arg1 forSection:(long long)arg2;
- (_Bool)_contactArray:(id)arg1 differsFromArray:(id)arg2;
- (void)_logSortedContacts;
- (void)_notifyDelegateContactsChanged;
- (long long)inviteContact:(id)arg1;
- (_Bool)isContactWhitelisted:(id)arg1;
- (_Bool)isContactAnInviter:(id)arg1;

@end
