/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseGaugeView.h>

@class UIView;

@interface NTKRichComplicationCornerGaugeCustomView : NTKRichComplicationCornerBaseGaugeView

{
    UIView *_outerView;
}

- (id)init;
- (void)layoutSubviews;
- (id)_outerView;

@end
