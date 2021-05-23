/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyPhoneNumberCell.h>

@class CNStarkActionView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface CNStarkContactPropertyCell : CNPropertyPhoneNumberCell

{
    _Bool _allowsFocus;
    CNStarkActionView *_actionView1;
    CNStarkActionView *_actionView2;
    NSLayoutConstraint *_labelViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_valueViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) CNStarkActionView *actionView1;
@property (nonatomic, readonly) CNStarkActionView *actionView2;
@property (nonatomic) _Bool allowsFocus;
@property (retain, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)minimumContentHeight;
+ (double)contentViewBottomAnchorConstraintConstant;
+ (_Bool)wantsHorizontalLayout;
+ (double)valueLabelFirstBaselineAnchorConstraintConstant;
+ (double)labelViewFirstBaselineAnchorConstraintConstant;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)setSeparatorStyle:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)variableConstraints;
- (id)constantConstraints;
- (void)performDefaultAction;
- (void)_cnui_applyContactStyle;
- (void)actionViewTapped:(id)arg1;
- (_Bool)supportsTintColorValue;
- (_Bool)shouldShowStar;
- (void)updateTransportButtons;
- (_Bool)allowsCellSelection;
- (_Bool)supportsValueColorUsesLabelColor;
- (long long)transportTypeForActionType:(id)arg1;
- (void)performActionForMessage;

@end
