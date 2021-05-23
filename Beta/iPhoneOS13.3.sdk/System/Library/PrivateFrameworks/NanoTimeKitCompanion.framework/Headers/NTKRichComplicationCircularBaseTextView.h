/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class UIView;

@protocol NTKColoringView;

@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView

{
    UIView<NTKColoringView> *_label;
    double _labelScale;
}

- (id)init;
- (id)label;
- (void)layoutSubviews;
- (id)_labelFont;
- (void)setForegroundColor:(id)arg1;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (void)_layoutLabel;
- (void)_setLayoutTransformToView:(id)arg1 origin:(struct CGPoint)arg2 centerScale:(double)arg3;

@end
