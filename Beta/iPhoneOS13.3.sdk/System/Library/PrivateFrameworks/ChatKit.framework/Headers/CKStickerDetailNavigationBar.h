/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIVisualEffectView.h>

@class UIButton, UILabel;

@interface CKStickerDetailNavigationBar : UIVisualEffectView

{
    UIButton *_closeButton;
    UILabel *_titleLabel;
    struct UIEdgeInsets _parentLayoutMargins;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) struct UIEdgeInsets parentLayoutMargins;

- (id)initWithEffect:(id)arg1;
- (void)layoutSubviews;

@end
