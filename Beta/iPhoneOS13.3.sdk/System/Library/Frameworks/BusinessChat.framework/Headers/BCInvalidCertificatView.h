/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface BCInvalidCertificatView : UIView

{
    NSString *_host;
    UIImageView *_insecureIcon;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIView *_contentView;
}

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) UIImageView *insecureIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UIView *contentView;

- (id)initWithHost:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;

@end
