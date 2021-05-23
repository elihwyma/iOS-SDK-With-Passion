/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerView.h>

@class UIView;

@interface NTKRichComplicationCornerBaseCircularView : NTKRichComplicationCornerView

{
    UIView *_circularView;
}

- (id)init;
- (void)layoutSubviews;
- (id)_circularView;

@end
