/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface SBSwitcherSnapshotImageView : UIView

{
    UIImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    unsigned long long _maskedCorners;
    _Bool _usesNonuniformScaling;
    _Bool _hasOpaqueContents;
    long long _orientationForClassicLayout;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long maskedCorners;
@property (nonatomic) _Bool usesNonuniformScaling;
@property (nonatomic) _Bool hasOpaqueContents;
@property (nonatomic) long long orientationForClassicLayout;

- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;
- (void)_updateCornerRadius;
- (struct CGAffineTransform)scalingTransform;
- (double)_transformHorizontalScale;
- (double)_transformVerticalScale;
- (double)_transformScale;
- (_Bool)_isUsingExternalClassicLayout;

@end
