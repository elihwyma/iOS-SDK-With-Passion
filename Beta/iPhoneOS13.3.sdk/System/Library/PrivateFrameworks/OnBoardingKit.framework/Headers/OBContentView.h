/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface OBContentView : UIView

{
    _Bool _aboveHeaderLayout;
    _Bool _customizedBackgroundColor;
    UIView *_bleedView;
    UIColor *_lightColor;
    UIColor *_darkColor;
}

@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *darkColor;
@property (nonatomic) _Bool aboveHeaderLayout;
@property (nonatomic) _Bool customizedBackgroundColor;
@property (weak, nonatomic) UIView *bleedView;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)_defaultColorForCurrentTraitCollection;
- (id)initWithFrame:(struct CGRect)arg1 aboveHeaderLayout:(_Bool)arg2;
- (_Bool)_colorIsDefault:(id)arg1;

@end
