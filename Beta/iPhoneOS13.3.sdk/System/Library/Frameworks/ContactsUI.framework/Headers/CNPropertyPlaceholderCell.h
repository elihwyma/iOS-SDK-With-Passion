/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNPropertyPlaceholderCell : CNLabeledCell

{
    UILabel *_label;
}

@property (retain, nonatomic) UILabel *label;

- (_Bool)shouldIndentWhileEditing;
- (id)labelView;
- (double)minCellHeight;
- (_Bool)shouldPerformDefaultAction;
- (void)setCardGroupItem:(id)arg1;

@end
