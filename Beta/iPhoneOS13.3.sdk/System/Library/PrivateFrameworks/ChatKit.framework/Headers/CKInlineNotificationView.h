/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class UIVisualEffectView;

@protocol CKInlineNotificationViewDelegate;

__attribute__((visibility("hidden")))
@interface CKInlineNotificationView : UIView

{
    _Bool _visible;
    _Bool _animatingVisibility;
    id <CKInlineNotificationViewDelegate> _delegate;
    UIView *_clippingView;
    UIView *_containerView;
    UIVisualEffectView *_backdropView;
    UIView *_bottomLineView;
}

@property (nonatomic, readonly) _Bool _shouldSuppressLayout;
@property (nonatomic, readonly) UIView *contentView;
@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIVisualEffectView *backdropView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) _Bool animatingVisibility;
@property (weak, nonatomic) id <CKInlineNotificationViewDelegate> delegate;
@property (nonatomic) _Bool visible;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_invalidateContentViewHeight;

@end
