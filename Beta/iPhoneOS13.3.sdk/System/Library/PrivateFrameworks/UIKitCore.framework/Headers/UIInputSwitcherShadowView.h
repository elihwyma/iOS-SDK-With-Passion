/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, UIKeyboardMenuView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView

{
    int m_mode;
    double m_pointerOffset;
    NSArray *m_gradientColors;
    UIKeyboardMenuView *_menu;
    _UIBackdropView *_blurView;
    struct CGRect _keyRect;
}

@property (nonatomic) int mode;
@property (nonatomic) UIKeyboardMenuView *menu;
@property (retain, nonatomic) _UIBackdropView *blurView;
@property (nonatomic) struct CGRect keyRect;
@property (nonatomic) double pointerOffset;
@property (retain, nonatomic) NSArray *gradientColors;

- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;

@end
