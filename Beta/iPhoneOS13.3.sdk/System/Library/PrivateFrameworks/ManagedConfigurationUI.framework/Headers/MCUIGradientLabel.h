/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UIView.h>

@class NSString, UIFont, UIImage;

__attribute__((visibility("hidden")))
@interface MCUIGradientLabel : UIView

{
    NSString *_text;
    UIFont *_font;
    UIImage *_gradient;
    struct CGColor *_patternColor;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIImage *gradient;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGColor *)_patternColor;

@end
