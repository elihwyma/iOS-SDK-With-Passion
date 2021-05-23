/*
 Image: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
 */

#import <UIKit/UIView.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface TFDeviceInstructionView : UIView

{
    UIImageView *_deviceImageView;
}

@property (nonatomic, readonly) UIImageView *deviceImageView;

+ (id)backgroundColor;
+ (double)cornerRadius;
+ (struct UIEdgeInsets)imageLayoutInsets;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)displayDeviceImage:(id)arg1 inOrientation:(long long)arg2;
- (void)updateCurrentDeviceImageToOrientation:(long long)arg1;

@end
