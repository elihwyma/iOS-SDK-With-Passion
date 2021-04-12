//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;
@protocol CKInlineNotificationViewDelegate;

__attribute__((visibility("hidden")))
@interface CKInlineNotificationView : UIView
{
    BOOL _visible;
    BOOL _animatingVisibility;
    id <CKInlineNotificationViewDelegate> _delegate;
    UIView *_clippingView;
    UIView *_containerView;
    UIVisualEffectView *_backdropView;
    UIView *_bottomLineView;
}

@property(nonatomic) BOOL animatingVisibility; // @synthesize animatingVisibility=_animatingVisibility;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) __weak id <CKInlineNotificationViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@property(nonatomic) BOOL visible;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)_invalidateContentViewHeight;
@property(readonly, nonatomic) BOOL _shouldSuppressLayout;
- (CGSize)contentViewSizeThatFits:(CGSize)arg1;
@property(readonly, nonatomic) UIView *contentView;

@end

