/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/_UILegibilityView.h>

@class SBIconLabelImageParameters, SBIconView, UIImage;

@interface SBIconLegibilityLabelView : _UILegibilityView

{
    SBIconView *_iconView;
    SBIconLabelImageParameters *_imageParameters;
}

@property (retain, nonatomic) SBIconLabelImageParameters *imageParameters;
@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIImage *image;

- (id)initWithSettings:(id)arg1;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;

@end
