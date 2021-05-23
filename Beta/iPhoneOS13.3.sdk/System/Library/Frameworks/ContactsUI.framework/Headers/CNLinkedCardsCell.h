/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNLinkedCardsCell : CNLabeledCell

{
    id <CNPropertyCellDelegate> _delegate;
    UILabel *_sourceLabel;
    UILabel *_nameLabel;
}

@property (nonatomic, readonly) UILabel *sourceLabel;
@property (nonatomic, readonly) UILabel *nameLabel;
@property (weak, nonatomic) id <CNPropertyCellDelegate> delegate;

+ (_Bool)wantsChevron;

- (void)updateConstraints;
- (id)labelView;
- (id)valueView;
- (_Bool)shouldPerformDefaultAction;
- (void)setCardGroupItem:(id)arg1;
- (void)performDefaultAction;

@end
