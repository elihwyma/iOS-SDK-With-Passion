/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactStore, CNContainer, CNGroup, CNMutableContact, CNPolicy, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CNUIContactSaveConfiguration : NSObject

{
    _Bool _ignoresParentalRestrictions;
    _Bool _saveWasAuthorized;
    CNContact *_contact;
    CNMutableContact *_mutableContact;
    CNMutableContact *_shadowCopyOfReadonlyContact;
    NSMutableArray *_editingLinkedContacts;
    CNContactStore *_contactStore;
    CNGroup *_parentGroup;
    CNContainer *_parentContainer;
    CNPolicy *_policy;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (nonatomic, readonly) CNMutableContact *shadowCopyOfReadonlyContact;
@property (nonatomic, readonly) NSMutableArray *editingLinkedContacts;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNGroup *parentGroup;
@property (nonatomic, readonly) CNContainer *parentContainer;
@property (nonatomic, readonly) CNPolicy *policy;
@property (nonatomic, readonly) _Bool ignoresParentalRestrictions;
@property (nonatomic, readonly) _Bool saveWasAuthorized;

- (id)initWithContact:(id)arg1 mutableContact:(id)arg2 shadowCopyOfReadonlyContact:(id)arg3 editingLinkedContacts:(id)arg4 contactStore:(id)arg5 parentGroup:(id)arg6 parentContainer:(id)arg7 policy:(id)arg8 ignoresParentalRestrictions:(_Bool)arg9 saveWasAuthorized:(_Bool)arg10;

@end
