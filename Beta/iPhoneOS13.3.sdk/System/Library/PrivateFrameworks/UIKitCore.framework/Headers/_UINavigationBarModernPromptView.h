/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface _UINavigationBarModernPromptView : UIView

{
    UILabel *_promptLabel;
    UIFont *_font;
    NSString *_prompt;
    UIColor *_textColor;
}

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) UIColor *textColor;
@property (nonatomic, readonly) double promptHeight;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updatePromptLabel;

@end
