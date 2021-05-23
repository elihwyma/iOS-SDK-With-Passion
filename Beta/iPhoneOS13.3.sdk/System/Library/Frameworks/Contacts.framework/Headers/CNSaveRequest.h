/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface CNSaveRequest : NSObject <Swift>

{
    NSMutableDictionary *_addedContactsByIdentifier;
    NSMutableArray *_updatedContacts;
    NSMutableDictionary *_deletedContactsByIdentifier;
    NSString *_meCardIdentifier;
    NSMutableDictionary *_addedGroupsByIdentifier;
    NSMutableArray *_updatedGroups;
    NSMutableDictionary *_deletedGroupsByIdentifier;
    NSMutableDictionary *_addedMembersByGroupIdentifier;
    NSMutableDictionary *_removedMembersByGroupIdentifier;
    NSMutableDictionary *_addedSubgroupsByGroupIdentifier;
    NSMutableDictionary *_removedSubgroupsByGroupIdentifier;
    NSMutableDictionary *_addedContainersByIdentifier;
    NSMutableArray *_updatedContainers;
    NSMutableDictionary *_deletedContainersByIdentifier;
    NSMutableDictionary *_movedContainersByIdentifier;
    NSMutableDictionary *_addedAccountContainersByIdentifier;
    NSMutableDictionary *_defaultAccountContainersByIdentifier;
    NSMutableArray *_contactChangeRequests;
    NSMutableArray *_addedAccounts;
    NSMutableArray *_removedAccounts;
    NSMutableDictionary *_parentRecordsByIdentifier;
    _Bool _unsafeApplyChangesOnly;
    _Bool _ignoresGuardianRestrictions;
    NSString *_saveRequestIdentifier;
    NSString *_changeHistoryClientIdentifier;
}

@property (copy, nonatomic, readonly) NSString *storeIdentifier;
@property (copy, nonatomic, readonly) NSArray *allGroupIdentifiers;
@property (copy, nonatomic, readonly) NSArray *allContactIdentifiers;
@property (copy, nonatomic, readonly) NSArray *allContacts;
@property (copy, nonatomic, readonly) NSArray *allGroups;
@property (copy, nonatomic, readonly) NSArray *allContainers;
@property (copy, nonatomic, readonly) NSArray *allAccountIdentifierStrings;
@property (copy, nonatomic, readonly) NSArray *contactChangeRequests;
@property (nonatomic) _Bool unsafeApplyChangesOnly;
@property (copy, nonatomic, readonly) NSArray *addedAccounts;
@property (copy, nonatomic, readonly) NSArray *removedAccounts;
@property (copy, nonatomic, readonly) NSDictionary *defaultAccountContainersByAccountIdentifier;
@property (copy, nonatomic, readonly) NSString *saveRequestIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *addedContactsByContainerIdentifier;
@property (copy, nonatomic, readonly) NSArray *updatedContacts;
@property (copy, nonatomic, readonly) NSArray *deletedContacts;
@property (copy, nonatomic, readonly) NSDictionary *deletedContactsByIdentifier;
@property (copy, nonatomic, readonly) NSString *meCardIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *addedGroupsByContainerIdentifier;
@property (copy, nonatomic, readonly) NSArray *updatedGroups;
@property (copy, nonatomic, readonly) NSArray *deletedGroups;
@property (copy, nonatomic, readonly) NSDictionary *addedMembersByGroupIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *removedMembersByGroupIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *addedSubgroupsByGroupIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *removedSubgroupsByGroupIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *addedContainersByParentContainerIdentifier;
@property (copy, nonatomic, readonly) NSDictionary *addedAccountContainersByParentContainerIdentifier;
@property (copy, nonatomic, readonly) NSArray *deletedContainers;
@property (copy, nonatomic, readonly) NSArray *updatedContainers;
@property (copy, nonatomic, readonly) NSDictionary *movedContainersByParentContainerIdentifier;
@property (nonatomic) _Bool ignoresGuardianRestrictions;
@property (nonatomic) _Bool ignoresParentalRestrictions;
@property (copy, nonatomic) NSString *changeHistoryClientIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addAccount:(id)arg1;
- (void)removeAccount:(id)arg1;
- (void)updateContact:(id)arg1;
- (id)allAccountIdentifiers;
- (id)groupWithAddedSubgroupForGroupIdentifier:(id)arg1;
- (id)allContainerIdentifierStrings:(_Bool *)arg1;
- (id)groupWithAddedMemberForGroupIdentifier:(id)arg1;
- (id)groupWithRemovedMemberForGroupIdentifier:(id)arg1;
- (id)groupWithRemovedSubgroupForGroupIdentifier:(id)arg1;
- (void)deleteGroup:(id)arg1;
- (void)addMember:(id)arg1 toGroup:(id)arg2;
- (void)queueUpdatedObject:(id)arg1 intoArray:(id)arg2;
- (void)_insertContact:(id)arg1 intoDictionary:(id)arg2 complementDictionary:(id)arg3;
- (id)flattenedDictionaryForDictionaryOfTuples:(id)arg1;
- (id)_dictionaryOfArraysFromDictionaryOfDictionaries:(id)arg1;
- (id)allContainerIdentifiers:(_Bool *)arg1;
- (void)addContact:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)deleteContact:(id)arg1;
- (void)setMeCardIdentifier:(id)arg1;
- (void)addGroup:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)updateGroup:(id)arg1;
- (void)removeMember:(id)arg1 fromGroup:(id)arg2;
- (void)addSubgroup:(id)arg1 toGroup:(id)arg2;
- (void)removeSubgroup:(id)arg1 fromGroup:(id)arg2;
- (void)addContainer:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)addContainer:(id)arg1 toAccountWithIdentifier:(id)arg2;
- (void)setContainer:(id)arg1 asDefaultContainerOfAccountWithIdentifier:(id)arg2;
- (void)moveContainer:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (void)deleteContainer:(id)arg1;
- (void)updateContainer:(id)arg1;
- (void)linkContact:(id)arg1 toContact:(id)arg2;
- (void)unlinkContact:(id)arg1;
- (void)preferLinkedContactForName:(id)arg1 inUnifiedContact:(id)arg2;
- (void)preferLinkedContactForImage:(id)arg1 inUnifiedContact:(id)arg2;
- (void)setLinkIdentifier:(id)arg1 forContact:(id)arg2;

@end
