/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImageView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UICalloutBarBackground : UIView

{
    double m_dividerOffsets[24];
    UIVisualEffectView *_blurView;
    UIImageView *_selectionTintView;
    UIImageView *_separatorView;
    struct CGRect _highlightRect;
}

@property (nonatomic) struct CGRect highlightRect;

- (id)init;
- (void)layoutSubviews;
- (void)setDividerOffsets:(double *)arg1;
- (void)setHighlighted:(_Bool)arg1 forFrame:(struct CGRect)arg2;

@end
