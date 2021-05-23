/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIView.h>

@class UIImage;

@interface TSKCenterTilingImageView : UIView

{
    UIImage *mLeftCapImage;
    UIImage *mCenterTileImage;
    UIImage *mRightCapImage;
}

@property (retain, nonatomic) UIImage *leftCapImage;
@property (retain, nonatomic) UIImage *centerTileImage;
@property (retain, nonatomic) UIImage *rightCapImage;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;

@end
