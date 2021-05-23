/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactAction.h>

@class CNContactStore, CNContainer;

__attribute__((visibility("hidden")))
@interface CNContactEnableGuardianRestrictionsAction : CNContactAction

{
    CNContainer *_container;
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContainer *container;
@property (nonatomic, readonly) CNContactStore *contactStore;

- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3;

@end
