/*
 Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

#import <UIKit/UICollectionReusableView.h>

@class UIColor;

@interface CEKWheelScrubberRoundedCornerOverlayView : UICollectionReusableView

{
    UIColor *_cornerColor;
    double _cornerRadius;
    unsigned long long _corners;
}

@property (nonatomic, readonly) UIColor *cornerColor;
@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic) unsigned long long corners;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setCorners:(unsigned long long)arg1;

@end
