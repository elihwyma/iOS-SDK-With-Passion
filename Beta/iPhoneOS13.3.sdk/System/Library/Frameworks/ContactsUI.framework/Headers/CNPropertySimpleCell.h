/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/CNPropertyCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleCell : CNPropertyCell

{
    UILabel *_labelLabel;
    UILabel *_valueLabel;
}

@property (nonatomic, readonly) UILabel *labelLabel;
@property (nonatomic, readonly) UILabel *valueLabel;

- (id)labelView;
- (id)valueView;

@end
