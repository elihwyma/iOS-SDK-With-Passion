/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNAvatarCardViewController, CNAvatarView, CNContact, CNContactOrbHeaderView, NSArray, NSString, UIAlertController, UIGestureRecognizer, UITapGestureRecognizer, UIView, UIViewController, UIVisualEffectView, _UIClickPresentationInteraction;

@protocol CNAvatarCardControllerDelegate;

@interface CNAvatarCardController : NSObject

{
    _Bool _visible;
    _Bool _actionsNeedRefresh;
    _Bool _bypassActionValidation;
    NSArray *_contacts;
    NSArray *_actionCategories;
    id <CNAvatarCardControllerDelegate> _delegate;
    UIView *_sourceView;
    UIView *_highlightView;
    UIAlertController *_alertController;
    CNAvatarCardViewController *_cardViewController;
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    long long _presentationResult;
    NSArray *_cardControllerConstraints;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIVisualEffectView *_backgroundVisualEffectView;
    CNAvatarView *_avatarView;
    CNContactOrbHeaderView *_headerView;
    UIGestureRecognizer *_rolloverGestureRecognizer;
    struct CGRect _sourceRect;
}

@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) CNAvatarCardViewController *cardViewController;
@property (retain, nonatomic) _UIClickPresentationInteraction *clickPresentationInteraction;
@property (nonatomic) long long presentationResult;
@property (retain, nonatomic) NSArray *cardControllerConstraints;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView;
@property (weak, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) CNContactOrbHeaderView *headerView;
@property (nonatomic, readonly) UIViewController *presentingViewController;
@property (retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer;
@property (nonatomic) _Bool actionsNeedRefresh;
@property (nonatomic) _Bool bypassActionValidation;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSArray *actionCategories;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *message;
@property (weak, nonatomic) id <CNAvatarCardControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isVisible) _Bool visible;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) struct CGRect sourceRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(_Bool)arg1;
+ (_Bool)avatarCardEnabledForTraitCollection:(id)arg1;
+ (id)previewHeaderViewControllerForContacts:(id)arg1;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (void)prepareForDisplay;
- (void)clickPresentationInteractionEnded:(id)arg1 wasCancelled:(_Bool)arg2;
- (id)clickPresentationInteraction:(id)arg1 presentationForPresentingViewController:(id)arg2;
- (_Bool)clickPresentationInteractionShouldBegin:(id)arg1;
- (_Bool)clickPresentationInteractionShouldPresent:(id)arg1;
- (id)clickPresentationInteraction:(id)arg1 previewForHighlightingAtLocation:(struct CGPoint)arg2;
- (void)presentAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)hasActions;
- (void)showContact:(id)arg1;
- (void)orbTransitionDidPrepareTransition:(id)arg1 withContainerView:(id)arg2;
- (void)orbTransitionDidEndTransition:(id)arg1;
- (id)cardViewController:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (void)cardViewControllerWillDismiss:(id)arg1;
- (void)cardViewControllerDidDismiss:(id)arg1;
- (void)configurePreviewInteraction;
- (void)prepareWithContacts:(id)arg1 store:(id)arg2;
- (void)prepareWithContacts:(id)arg1 storeProvider:(CDUnknownBlockType)arg2;
- (_Bool)readyForContactsMatching:(id)arg1;
- (id)refetchContactsMatching:(id)arg1 storeProvider:(CDUnknownBlockType)arg2;
- (void)cleanupAfterDisplay;
- (void)showContact;
- (void)dismissAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_setupCardViewControllerWithContacts:(id)arg1;
- (void)_setupAlertController;
- (void)_setupForCardControllerPresentation;
- (void)_updateHeaderViewFrame;
- (void)presentAnimated:(_Bool)arg1;
- (id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1;

@end
