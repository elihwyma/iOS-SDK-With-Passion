/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNAvatarViewController.h>

@class CNContactStore, NSArray, NSString, PRPersonaStore, _CNAvatarView;

@protocol CNUIPRLikenessResolver;

__attribute__((visibility("hidden")))
@interface CNAvatarViewController_NewAvatarView : CNAvatarViewController

{
    _Bool _threeDTouchEnabled;
    _Bool _animated;
    NSArray *_contacts;
    CNContactStore *_contactStore;
    PRPersonaStore *_personaStore;
    id <CNUIPRLikenessResolver> _likenessResolver;
    _CNAvatarView *_avatarView;
    NSArray *_likenessProviders;
}

@property (weak, nonatomic) _CNAvatarView *avatarView;
@property (retain, nonatomic) NSArray *likenessProviders;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic, readonly) id <CNUIPRLikenessResolver> likenessResolver;
@property (nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled;
@property (nonatomic) _Bool animated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)defaultThreeDTouchSupport;

- (id)initWithSettings:(id)arg1;
- (id)contacts;
- (void)loadView;
- (id)descriptorForRequiredKeys;
- (void)setContacts:(id)arg1;

@end
