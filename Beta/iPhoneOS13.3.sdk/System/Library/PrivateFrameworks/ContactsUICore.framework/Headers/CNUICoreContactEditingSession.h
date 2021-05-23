/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNUICoreContactScratchpad, NSArray;

@interface CNUICoreContactEditingSession : NSObject

{
    CNUICoreContactScratchpad *_contactsAdded;
    CNUICoreContactScratchpad *_contactsUpdated;
    CNUICoreContactScratchpad *_contactsRemoved;
}

@property (retain, nonatomic) CNUICoreContactScratchpad *contactsAdded;
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsUpdated;
@property (retain, nonatomic) CNUICoreContactScratchpad *contactsRemoved;
@property (nonatomic, readonly) NSArray *addedContacts;
@property (nonatomic, readonly) NSArray *updatedContacts;
@property (nonatomic, readonly) NSArray *removedContacts;
@property (nonatomic, readonly) _Bool inProgress;

+ (_Bool)isEdiingStateOfContactValid:(long long)arg1;

- (id)init;
- (id)description;
- (id)updatedContactsMatchingContacts:(id)arg1;
- (_Bool)containsUpdatedContactMatchingContact:(id)arg1;
- (void)updateContacts:(id)arg1;
- (void)addContacts:(id)arg1;
- (void)removeContacts:(id)arg1;
- (long long)editingStateOfContact:(id)arg1;
- (void)verifyConsistencyOfEditingSessionForContact:(id)arg1;
- (_Bool)isContactUnseen:(id)arg1;
- (_Bool)wasContactAdded:(id)arg1;
- (_Bool)wasContactUpdated:(id)arg1;
- (_Bool)wasContactRemoved:(id)arg1;
- (_Bool)containsAddedContactMatchingContact:(id)arg1;
- (_Bool)containsRemovedContactMatchingContact:(id)arg1;
- (id)addedContactsMatchingContacts:(id)arg1;
- (id)removedContactsMatchingContacts:(id)arg1;
- (id)generateSaveRequest;
- (id)applyChangesToContacts:(id)arg1;

@end
