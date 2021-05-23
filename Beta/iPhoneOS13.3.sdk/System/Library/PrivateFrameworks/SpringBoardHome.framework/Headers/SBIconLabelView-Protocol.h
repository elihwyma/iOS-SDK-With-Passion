/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@class SBIconLabelImageParameters, SBIconView, UIImage;

@protocol SBIconLabelView

@property (weak, nonatomic) SBIconView *iconView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) SBIconLabelImageParameters *imageParameters;

- (unsigned short)initWithSettings: /* Error: Ran out of types for this method. */;
- (unsigned short)updateIconLabelWithSettings:imageParameters: /* Error: Ran out of types for this method. */;

@end
