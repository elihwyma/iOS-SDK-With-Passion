/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCornerView.h>

@class NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerBaseTextView : NTKRichComplicationCornerView

{
    NTKCurvedColoringLabel *_innerLabel;
}

- (id)init;
- (void)layoutSubviews;
- (id)innerLabel;
- (void)_enumerateLabelsWithBlock:(CDUnknownBlockType)arg1;

@end
