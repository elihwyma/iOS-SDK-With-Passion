/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIView.h>

@class UIColor;

@interface _TVProgressBarView : UIView

{
    _Bool _useMaterial;
    _Bool _shouldProgressBarUseRoundCorner;
    double _cornerRadius;
    double _progress;
    UIColor *_progressTintColor;
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    UIColor *_completeTintColor;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) double cornerRadius;
@property (nonatomic) double progress;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (retain, nonatomic) UIColor *gradientStartColor;
@property (retain, nonatomic) UIColor *gradientEndColor;
@property (retain, nonatomic) UIColor *completeTintColor;
@property (nonatomic) _Bool useMaterial;
@property (nonatomic) _Bool shouldProgressBarUseRoundCorner;
@property (nonatomic) struct UIEdgeInsets padding;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setgradientEndColor:(id)arg1;

@end
