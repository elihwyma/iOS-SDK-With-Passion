/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIAssistantBarSeparatorView : UIView

{
    UIView *_innerSeparatorView;
}

@property (retain, nonatomic) UIView *innerSeparatorView;

+ (double)preferredWidth;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (_Bool)_usesLightStyle;
- (void)_updateVisualStyle;

@end
