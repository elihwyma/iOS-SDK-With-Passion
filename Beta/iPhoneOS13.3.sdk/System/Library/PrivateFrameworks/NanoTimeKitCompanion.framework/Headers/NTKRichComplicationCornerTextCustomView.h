/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseTextView.h>

@class UIView;

@interface NTKRichComplicationCornerTextCustomView : NTKRichComplicationCornerBaseTextView

{
    UIView *_outerView;
}

- (id)init;
- (void)layoutSubviews;
- (id)_outerView;
- (double)_outerViewDiameter;

@end
