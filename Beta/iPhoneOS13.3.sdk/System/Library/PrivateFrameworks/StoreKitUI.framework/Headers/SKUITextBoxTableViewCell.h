/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUITableViewCell.h>

@class SKUITextBoxView;

__attribute__((visibility("hidden")))
@interface SKUITextBoxTableViewCell : SKUITableViewCell

{
    SKUITextBoxView *_textBoxView;
    struct UIEdgeInsets _textBoxInsets;
}

@property (nonatomic, readonly) SKUITextBoxView *textBoxView;
@property (nonatomic) struct UIEdgeInsets textBoxInsets;

- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
