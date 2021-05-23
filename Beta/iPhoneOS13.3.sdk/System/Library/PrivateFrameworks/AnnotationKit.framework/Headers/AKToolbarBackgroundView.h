/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class UIColor, UIVisualEffectView;

@interface AKToolbarBackgroundView : UIView

{
    UIVisualEffectView *_visualEffectView;
    _Bool _translucent;
    UIView *_separatorLine;
    UIColor *_separatorColor;
    long long _blurStyle;
}

@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIColor *separatorColor;
@property (nonatomic, getter=isTranslucent) _Bool translucent;
@property (nonatomic) long long blurStyle;

- (void)setOpaque:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBackgroundImage:(id)arg1 forToolbarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)setShadowImage:(id)arg1 forToolbarPosition:(long long)arg2;
- (void)_hostSeparatorInView:(id)arg1;
- (void)updateSeparatorVisibility;

@end
