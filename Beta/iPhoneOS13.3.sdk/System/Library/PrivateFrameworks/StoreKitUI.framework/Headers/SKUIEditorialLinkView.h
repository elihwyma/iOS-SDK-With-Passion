/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSMutableArray, SKUIEditorialLinkLayout, UIColor;

@protocol SKUIEditorialLinkViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLinkView : UIView

{
    NSMutableArray *_buttons;
    id <SKUIEditorialLinkViewDelegate> _delegate;
    UIColor *_highlightedTextColor;
    long long _horizontalAlignment;
    SKUIEditorialLinkLayout *_layout;
    UIColor *_textColor;
}

@property (weak, nonatomic) id <SKUIEditorialLinkViewDelegate> delegate;
@property (nonatomic) long long horizontalAlignment;
@property (retain, nonatomic) SKUIEditorialLinkLayout *linkLayout;

- (void)dealloc;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (id)_newButton;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)_linkButtonAction:(id)arg1;

@end
