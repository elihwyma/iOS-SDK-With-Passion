/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyPlaceholderCell.h>

@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell

{
    id <CNPropertyCellDelegate> _delegate;
}

@property (weak, nonatomic) id <CNPropertyCellDelegate> delegate;

- (void)performDefaultAction;

@end
