/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CKVideoCancelActionMenuItemView : UIView

{
    _Bool _highlighted;
    UIVisualEffectView *_blurView;
    UIImageView *_maskView;
    UIImageView *_xView;
}

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIImageView *maskView;
@property (retain, nonatomic) UIImageView *xView;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

@end
