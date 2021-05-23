/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKInlineNotificationView.h>

@class NSString, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface CKTextInlineNotificationView : CKInlineNotificationView

{
    UIView *_contentView;
    UIButton *_textButton;
    UIView *_greyOutView;
}

@property (retain, nonatomic) UIButton *textButton;
@property (retain, nonatomic) UIView *greyOutView;
@property (nonatomic) _Bool greyedOut;
@property (retain, nonatomic) NSString *text;

- (void)dealloc;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_handleTouchDown:(id)arg1;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_handleTouchUpOutside:(id)arg1;

@end
