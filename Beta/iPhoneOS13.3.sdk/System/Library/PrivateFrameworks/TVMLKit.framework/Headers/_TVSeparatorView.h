/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _TVSeparatorView : UIView

{
    UIView *_line1;
    UIView *_line2;
    UIView *_separatorComponent;
    UIColor *_tintColor;
    double _lineHeight;
}

@property (weak, nonatomic) UIView *separatorComponent;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) double lineHeight;

+ (id)separatorViewWithElement:(id)arg1 existingView:(id)arg2;

- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
