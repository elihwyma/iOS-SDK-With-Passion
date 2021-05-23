/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNContactCell.h>

@class CNStarkActionView, NSDictionary, NSString, UILabel;

@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkFaceTimeCell : CNContactCell

{
    id <CNPropertyCellDelegate> _delegate;
    NSDictionary *_labelTextAttributes;
    UILabel *_faceTimeLabel;
    CNStarkActionView *_actionView;
}

@property (retain, nonatomic) UILabel *faceTimeLabel;
@property (nonatomic, readonly) CNStarkActionView *actionView;
@property (weak, nonatomic) id <CNPropertyCellDelegate> delegate;
@property (copy, nonatomic) NSDictionary *labelTextAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;

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

@end
