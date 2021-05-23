/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel;

@interface _UIAccessDeniedView : UIView

{
    UIImageView *_lockView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSString *_title;
    NSString *_message;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_textColor;

@end
