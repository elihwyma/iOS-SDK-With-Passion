/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIImageView.h>

@class SBIconLabelImageParameters, SBIconView, UIImage;

@interface SBIconSimpleLabelView : UIImageView

{
    SBIconView *_iconView;
}

@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) SBIconLabelImageParameters *imageParameters;

- (id)initWithSettings:(id)arg1;
- (void)updateIconLabelWithSettings:(id)arg1 imageParameters:(id)arg2;

@end
