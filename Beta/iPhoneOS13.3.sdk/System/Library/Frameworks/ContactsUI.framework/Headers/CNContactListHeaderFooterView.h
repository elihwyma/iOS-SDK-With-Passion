/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CNContactListHeaderFooterView : UITableViewHeaderFooterView

{
    UIVisualEffectView *_visualEffectView;
}

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;

- (void)prepareForReuse;
- (void)layoutSubviews;

@end
