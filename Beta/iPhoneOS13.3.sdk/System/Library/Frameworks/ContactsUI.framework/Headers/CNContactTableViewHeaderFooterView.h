/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSAttributedString, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactTableViewHeaderFooterView : UITableViewHeaderFooterView

{
    NSAttributedString *_attributedString;
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (retain, nonatomic) NSAttributedString *attributedString;

- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;

@end
