/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>

@class UIView;

@protocol NTKColoringView;

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView

{
    UIView<NTKColoringView> *_label;
    double _labelRotationInDegree;
    double _labelScale;
}

- (id)init;
- (id)label;
- (void)layoutSubviews;
- (id)_labelFont;
- (void)setForegroundColor:(id)arg1;
- (id)_createLabelViewWithFont:(id)arg1;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_transitToHighlightState:(_Bool)arg1 fraction:(double)arg2;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_layoutLabel;

@end
