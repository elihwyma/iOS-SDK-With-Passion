/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNContact, CNContactFormatter, CNContactListStyleApplier, CNContactStore, NSArray, NSLayoutConstraint, NSString, UIDragInteraction, UIGestureRecognizer, UILabel;

@protocol CNContactListBannerViewDelegate;

@interface CNContactListBannerView : UIView

{
    id <CNContactListBannerViewDelegate> _delegate;
    CNContactListStyleApplier *_contactListStyleApplier;
    UIView *_bottomSeparator;
    CNContactStore *_contactStore;
    CNContactFormatter *_formatter;
    CNContact *_meContact;
    UIGestureRecognizer *_longPress;
    UIView *_avatarView;
    UIView *_avatarViewContainer;
    UILabel *_titleLabel;
    UIView *_footnoteContainer;
    UILabel *_footnoteLabel;
    UILabel *_footnoteValueLabel;
    NSLayoutConstraint *_footnoteTitleToTitleVerticalConstraint;
    NSLayoutConstraint *_footnoteTitleToValueHorizontalSpaceConstraint;
    NSArray *_constraintsPendingActivation;
    UIDragInteraction *_dragInteraction;
}

@property (nonatomic, readonly) CNContactFormatter *formatter;
@property (retain, nonatomic) CNContact *meContact;
@property (nonatomic, readonly) UIGestureRecognizer *longPress;
@property (retain, nonatomic) UIView *avatarView;
@property (nonatomic, readonly) UIView *avatarViewContainer;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIView *footnoteContainer;
@property (nonatomic, readonly) UILabel *footnoteLabel;
@property (nonatomic, readonly) UILabel *footnoteValueLabel;
@property (retain, nonatomic) NSLayoutConstraint *footnoteTitleToTitleVerticalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *footnoteTitleToValueHorizontalSpaceConstraint;
@property (retain, nonatomic) NSArray *constraintsPendingActivation;
@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) id <CNContactListBannerViewDelegate> delegate;
@property (retain, nonatomic) CNContactListStyleApplier *contactListStyleApplier;
@property (nonatomic, readonly) UIView *bottomSeparator;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;

- (id)init;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)copy:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)showMenu;
- (void)applyStyle;
- (void)activatePendingConstraints;
- (void)updateFontRelatedConstraints;
- (_Bool)displaysContactInfo;
- (void)setMeContact:(id)arg1 footnoteTitle:(id)arg2 footnoteValue:(id)arg3;
- (void)configureDragInteraction;
- (void)menuDidHide:(id)arg1;
- (void)cellWasLongPressed:(id)arg1;
- (void)cellWasSingleTapped:(id)arg1;

@end
