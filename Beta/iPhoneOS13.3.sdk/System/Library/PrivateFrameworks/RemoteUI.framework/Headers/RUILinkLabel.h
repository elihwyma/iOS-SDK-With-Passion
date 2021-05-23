/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UIView.h>

@class NSString, UIButton, UIFont, UILabel;

@interface RUILinkLabel : UIView

{
    UIButton *_linkButton;
    long long _textAlignment;
    _Bool _enabled;
    CDUnknownBlockType _action;
    UILabel *_textLabel;
}

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long lineBreakMode;
@property (copy, nonatomic) CDUnknownBlockType action;
@property (nonatomic) _Bool enabled;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic, readonly) UIButton *linkButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_resize;
- (void)_linkPressed;

@end
