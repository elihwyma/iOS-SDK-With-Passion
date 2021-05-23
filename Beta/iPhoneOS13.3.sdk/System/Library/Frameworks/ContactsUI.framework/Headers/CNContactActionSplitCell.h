/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNLabeledCell.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface CNContactActionSplitCell : CNLabeledCell

{
    UIButton *_leftLabel;
    UIButton *_rightLabel;
}

@property (nonatomic, readonly) UIButton *leftLabel;
@property (nonatomic, readonly) UIButton *rightLabel;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)labelView;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (id)standardButton;
- (id)constantConstraints;
- (void)_setupButton:(id)arg1 forAction:(id)arg2;

@end
