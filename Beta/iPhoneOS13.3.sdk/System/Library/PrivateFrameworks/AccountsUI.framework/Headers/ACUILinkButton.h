/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <UIKit/UIButton.h>

@class NSString;

@interface ACUILinkButton : UIButton

{
    NSString *_acui_titleString;
}

@property (retain) NSString *acui_titleString;

- (void)setHighlighted:(_Bool)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)_normalStringAttributes;
- (id)_highlightedStringAttributes;
- (id)initWithText:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end
