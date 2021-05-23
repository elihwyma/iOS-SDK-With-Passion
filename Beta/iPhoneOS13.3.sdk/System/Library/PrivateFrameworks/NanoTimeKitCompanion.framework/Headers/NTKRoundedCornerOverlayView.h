/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CLKDevice, UIImageView;

@interface NTKRoundedCornerOverlayView : UIView

{
    double _cornerRadius;
    UIImageView *_upperLeftCorner;
    UIImageView *_upperRightCorner;
    UIImageView *_bottomLeftCorner;
    UIImageView *_bottomRightCorner;
    CLKDevice *_device;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDeviceCornerRadius:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2 cornerRadius:(double)arg3;

@end
