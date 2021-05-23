/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyPostalAddressCell.h>

@class CNStarkActionView, NSLayoutConstraint, NSString;

__attribute__((visibility("hidden")))
@interface CNStarkContactAddressPropertyCell : CNPropertyPostalAddressCell

{
    CNStarkActionView *_actionView;
    NSLayoutConstraint *_labelViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_valueViewFirstBaselineAnchorConstraint;
    NSLayoutConstraint *_contentViewBottomAnchorConstraint;
}

@property (nonatomic, readonly) CNStarkActionView *actionView;
@property (retain, nonatomic) NSLayoutConstraint *labelViewFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *valueViewFirstBaselineAnchorConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewBottomAnchorConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
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
- (_Bool)supportsValueColorUsesLabelColor;

@end
