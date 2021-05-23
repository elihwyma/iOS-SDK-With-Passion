/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNContact, CNContactAction, CNContactStore, CNContainer;

__attribute__((visibility("hidden")))
@interface CNContactActionProvider : NSObject

{
    CNContactAction *_shareWithFamilyAction;
    CNContactAction *_stopSharingWithFamilyAction;
    CNContactAction *_enableGuardianRestrictionsAction;
    CNContactAction *_disableGuardianRestrictionsAction;
    CNContact *_contact;
    CNContainer *_container;
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, readonly) CNContainer *container;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNContactAction *shareWithFamilyAction;
@property (nonatomic, readonly) CNContactAction *stopSharingWithFamilyAction;
@property (nonatomic, readonly) CNContactAction *enableGuardianRestrictionsAction;
@property (nonatomic, readonly) CNContactAction *disableGuardianRestrictionsAction;

- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3;

@end
