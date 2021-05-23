/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface WFActionDrawerButton : UIButton

{
    UIImage *_icon;
    unsigned long long _style;
    UIImageView *_iconView;
    UILabel *_textLabel;
}

@property (weak, nonatomic) UIImageView *iconView;
@property (weak, nonatomic) UILabel *textLabel;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) UIImage *icon;
@property (nonatomic, readonly) unsigned long long style;

- (id)accessibilityLabel;
- (void)tintColorDidChange;
- (void)updateColors;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 style:(unsigned long long)arg3;
- (id)mainColorForStyle:(unsigned long long)arg1;
- (id)accentColorForStyle:(unsigned long long)arg1;

@end
