//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>

@class UIView;
@protocol NTKColoringView;

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView
{
    UIView<NTKColoringView> *_label;
    double _labelRotationInDegree;
    double _labelScale;
}

// - (void).cxx_destruct;
- (void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3;
- (void)_layoutLabel;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (id)_labelFont;
- (id)_createLabelViewWithFont:(id)arg1;
- (id)label;
- (id)init;

@end

