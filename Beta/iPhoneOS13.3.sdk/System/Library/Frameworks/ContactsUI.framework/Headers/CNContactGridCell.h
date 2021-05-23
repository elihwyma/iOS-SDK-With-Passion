/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UICollectionViewCell.h>

@class CNAvatarView, CNContact, CNContactFormatter, CNContactGridClippingView, CNQuickActionsManager, CNQuickActionsView, NSArray, NSDictionary, UILabel, UIView;

@protocol CNAvatarViewDelegate><CNQuickActionsViewDelegate;

__attribute__((visibility("hidden")))
@interface CNContactGridCell : UICollectionViewCell

{
    _Bool _showsContactOnTap;
    CNContactFormatter *_contactFormatter;
    id <CNAvatarViewDelegate><CNQuickActionsViewDelegate> _delegate;
    long long _monogrammerStyle;
    NSDictionary *_nameTextAttributes;
    NSArray *_actionCategories;
    CNQuickActionsManager *_actionsManager;
    CNAvatarView *_avatarView;
    CNContactGridClippingView *_actionsClippingView;
    UIView *_actionsContainerView;
    CNQuickActionsView *_actionsView;
    UILabel *_nameLabel;
    struct CGSize _avatarSize;
    struct UIEdgeInsets _avatarMargins;
}

@property (retain, nonatomic) CNAvatarView *avatarView;
@property (retain, nonatomic) CNContactGridClippingView *actionsClippingView;
@property (retain, nonatomic) UIView *actionsContainerView;
@property (retain, nonatomic) CNQuickActionsView *actionsView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (weak, nonatomic) id <CNAvatarViewDelegate><CNQuickActionsViewDelegate> delegate;
@property (nonatomic) struct CGSize avatarSize;
@property (nonatomic) struct UIEdgeInsets avatarMargins;
@property (nonatomic) long long monogrammerStyle;
@property (copy, nonatomic) NSDictionary *nameTextAttributes;
@property (nonatomic) _Bool showsContactOnTap;
@property (copy, nonatomic) NSArray *actionCategories;
@property (retain, nonatomic) CNQuickActionsManager *actionsManager;
@property (nonatomic, readonly) double maximumActionsWidth;

+ (double)actionsLeftMargin;

- (void)updateConstraints;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)_createViewsIfNeeded;
- (CDUnknownBlockType)animationBlockForPreparingToShowActions;
- (CDUnknownBlockType)completionBlockForHidingActions;
- (void)_updateActionsMask;

@end
