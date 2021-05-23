/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIVisualEffect, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UITableViewCellSeparatorView : UIView

{
    UIView *_backgroundView;
    UIView *_overlayView;
    UIVisualEffect *_separatorEffect;
    UIVisualEffectView *_effectView;
    _Bool _drawsWithVibrantLightMode;
}

@property (nonatomic) _Bool drawsWithVibrantLightMode;
@property (retain, nonatomic) UIVisualEffect *separatorEffect;

- (void)layoutSubviews;

@end
