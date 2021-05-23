/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface BCServerErrorView : UIView

{
    UIView *_contentView;
    UILabel *_messageLabel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *messageLabel;

- (id)init;
- (void)setupConstraints;
- (void)setupSubviews;

@end
