/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIColor;

@interface UICheckeredPatternView : UIView

{
    UIColor *_patternColor;
    double _scale;
    UIColor *_checkerColor;
}

@property (retain, nonatomic) UIColor *checkerColor;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (_Bool)_canDrawContent;
- (void)updatePatternColor;

@end
