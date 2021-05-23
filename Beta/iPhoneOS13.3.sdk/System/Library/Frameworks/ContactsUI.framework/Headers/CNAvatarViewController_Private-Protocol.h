/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class CNContactStore, PRPersonaStore;

@protocol CNAvatarViewControllerDelegate;

@protocol CNAvatarViewController_Private <Swift>

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled;
@property (weak, nonatomic) id <CNAvatarViewControllerDelegate> delegate;

@end
