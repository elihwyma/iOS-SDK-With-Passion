/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNLabeledCell.h>

@class CNCardActionGroupItem, CNContactAction, CNTransportButton, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactActionCell : CNLabeledCell

{
    UILabel *_label;
    CNTransportButton *_transportIcon;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CNTransportButton *transportIcon;
@property (nonatomic, readonly) CNCardActionGroupItem *actionGroupItem;
@property (nonatomic, readonly) CNContactAction *action;

- (void)tintColorDidChange;
- (_Bool)shouldIndentWhileEditing;
- (id)labelView;
- (id)variableConstraints;
- (double)minCellHeight;
- (_Bool)shouldPerformDefaultAction;
- (id)rightMostView;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setCardGroupItem:(id)arg1;

@end
