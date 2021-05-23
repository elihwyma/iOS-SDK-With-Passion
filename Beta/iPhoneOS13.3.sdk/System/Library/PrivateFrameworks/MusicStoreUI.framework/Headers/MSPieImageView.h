/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <UIView.h>

@class UIBezierPath, UIImage;

@interface MSPieImageView : UIView

{
    UIImage *_backgroundImage;
    UIBezierPath *_clipPath;
    UIImage *_foregroundImage;
    double _pieFraction;
    double _pieRadius;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *foregroundImage;
@property (nonatomic) double pieFraction;
@property (nonatomic) double pieRadius;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;
- (void)_reloadClipPath;

@end
