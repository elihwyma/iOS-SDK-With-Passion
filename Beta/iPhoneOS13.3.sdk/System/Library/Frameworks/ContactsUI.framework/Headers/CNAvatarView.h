/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNAvatarCardController, CNContact, CNContactStore, NSArray, NSString, PRPersonaStore, UIImage, UIImageView, UINavigationController;

@protocol CNAvatarViewDelegate, CNCancelable, CNSchedulerProvider, CNUILikenessRendering;

@interface CNAvatarView : UIView

{
    _Bool _showsActionsOnTap;
    _Bool _showsActionsOnForcePress;
    _Bool _threeDTouchEnabled;
    _Bool _showsContactOnTap;
    _Bool _registeredInNotifier;
    _Bool _registeredContactAction;
    _Bool _disableCornerRadiusForAvatar;
    _Bool _autoUpdateContact;
    _Bool _asynchronousRendering;
    _Bool _allowStaleRendering;
    _Bool _allowsAnimation;
    _Bool _prohibitsPersonaFetch;
    UIView *_forcePressView;
    unsigned long long _style;
    CNContactStore *_contactStore;
    PRPersonaStore *_personaStore;
    NSArray *_contacts;
    NSString *_name;
    NSString *_message;
    id <CNAvatarViewDelegate> _delegate;
    id <CNUILikenessRendering> _imageRenderer;
    id <CNCancelable> _rendererToken;
    UIImageView *_imageView;
    long long _displayedImageState;
    UINavigationController *_contactViewNavigationController;
    CNAvatarCardController *_cardController;
    id <CNSchedulerProvider> _schedulerProvider;
    unsigned long long _stateCaptureHandle;
    UIImage *_overrideImage;
    long long _monogrammerStyle;
}

@property (nonatomic) _Bool showsActionsOnTap;
@property (nonatomic) _Bool showsActionsOnForcePress;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) id <CNUILikenessRendering> imageRenderer;
@property (retain, nonatomic) id <CNCancelable> rendererToken;
@property (copy, nonatomic) UIImageView *imageView;
@property (nonatomic) long long displayedImageState;
@property (retain, nonatomic) UINavigationController *contactViewNavigationController;
@property (retain, nonatomic) CNAvatarCardController *cardController;
@property (retain, nonatomic) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) unsigned long long stateCaptureHandle;
@property _Bool registeredInNotifier;
@property _Bool registeredContactAction;
@property (retain, nonatomic) UIImage *overrideImage;
@property (nonatomic) _Bool disableCornerRadiusForAvatar;
@property (nonatomic) long long monogrammerStyle;
@property (nonatomic, readonly) UIImage *contentImage;
@property (nonatomic, readonly) struct CGRect contentImageFrame;
@property (nonatomic) _Bool autoUpdateContact;
@property (nonatomic) _Bool asynchronousRendering;
@property (nonatomic) _Bool bypassActionValidation;
@property (nonatomic) _Bool allowStaleRendering;
@property (nonatomic) _Bool allowsAnimation;
@property (nonatomic) _Bool prohibitsPersonaFetch;
@property (nonatomic) unsigned long long style;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic, getter=isThreeDTouchEnabled) _Bool threeDTouchEnabled;
@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *message;
@property (weak, nonatomic) id <CNAvatarViewDelegate> delegate;
@property (nonatomic) _Bool showsContactOnTap;
@property (copy, nonatomic) NSArray *actionCategories;
@property (weak, nonatomic) UIView *forcePressView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *transitioningView;
@property (nonatomic, readonly) struct CGRect transitioningFrame;
@property (nonatomic, readonly) struct CGRect transitioningContentFrame;
@property (nonatomic, readonly) UIImage *transitioningImage;
@property (nonatomic, readonly) struct CGRect transitioningImageFrame;
@property _Bool transitioningImageVisible;
@property (nonatomic, readonly) UIView *transitioningContentView;

+ (id)descriptorForRequiredKeys;
+ (_Bool)defaultThreeDTouchSupport;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1;
+ (id)descriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1 shouldUseCachingRenderer:(_Bool)arg2 description:(id)arg3;
+ (id)makeDescriptorForRequiredKeysWithThreeDTouchEnabled:(_Bool)arg1 shouldUseCachingRenderer:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)enabled;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (void)clearImage;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (double)_diameter;
- (id)descriptorForRequiredKeys;
- (id)initWithContact:(id)arg1;
- (void)contactDidChange:(id)arg1;
- (long long)avatarCardController:(id)arg1 presentationResultForLocation:(struct CGPoint)arg2;
- (id)avatarCardController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (_Bool)avatarCardController:(id)arg1 shouldShowContact:(id)arg2;
- (void)avatarCardControllerWillBeginPreviewInteraction:(id)arg1;
- (void)avatarCardControllerWillDismiss:(id)arg1;
- (void)avatarCardControllerDidDismiss:(id)arg1;
- (id)presentingViewControllerForAvatarCardController:(id)arg1;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(_Bool)arg3;
- (id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(_Bool)arg2 contactStore:(id)arg3;
- (id)initWithImageRenderer:(id)arg1 threeDTouchEnabled:(_Bool)arg2 contactStore:(id)arg3 style:(unsigned long long)arg4 schedulerProvider:(id)arg5;
- (id)currentLikenessScope;
- (void)_renderContactsImage;
- (void)setImage:(id)arg1 state:(long long)arg2;
- (void)setupAvatarCardControllerIfNeeded;
- (void)_updateRegistration;
- (void)showContact:(id)arg1;
- (void)dismissContactViewController:(id)arg1;
- (void)contactDidChange;
- (id)imageForTransitioningToFullScreen;
- (void)_updateCardActions;

@end
