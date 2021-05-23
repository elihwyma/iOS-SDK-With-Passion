/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNAvatarViewController.h>

@class CNAvatarView, CNContactStore, NSArray, NSString, PRPersonaStore;

@protocol CNSchedulerProvider, CNUILikenessRendering, NSObject><CNAvatarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarViewController_LegacyAvatarView : CNAvatarViewController

{
    _Bool _threeDTouchEnabled;
    NSArray *_contacts;
    CNContactStore *_contactStore;
    PRPersonaStore *_personaStore;
    id <CNUILikenessRendering> _imageRenderer;
    unsigned long long _style;
    id <NSObject><CNAvatarViewControllerDelegate> _delegate;
    id <CNSchedulerProvider> _schedulerProvider;
    CNAvatarView *_avatarView;
}

@property (weak, nonatomic) CNAvatarView *avatarView;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic, readonly) id <CNUILikenessRendering> imageRenderer;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) unsigned long long style;
@property (nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled;
@property (weak, nonatomic) id <NSObject><CNAvatarViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSettings:(id)arg1;
- (id)contacts;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (id)descriptorForRequiredKeys;
- (void)setContacts:(id)arg1;
- (void)didUpdateContentForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;

@end
