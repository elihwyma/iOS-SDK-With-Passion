/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyView.h>

@class UIKBBackdropView, UIView;

@protocol UIKBKeyViewContentView;

__attribute__((visibility("hidden")))
@interface UIKBViewBackedKeyView : UIKBKeyView

{
    UIView<UIKBKeyViewContentView> *_contentView;
    UIKBBackdropView *_backdropView;
}

@property (retain, nonatomic) UIKBBackdropView *backdropView;
@property (retain, nonatomic) UIView<UIKBKeyViewContentView> *contentView;

- (void)layoutSubviews;
- (void)setRenderConfig:(id)arg1;
- (void)setDrawFrame:(struct CGRect)arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)renderFlagsForTraits:(id)arg1;
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;

@end
