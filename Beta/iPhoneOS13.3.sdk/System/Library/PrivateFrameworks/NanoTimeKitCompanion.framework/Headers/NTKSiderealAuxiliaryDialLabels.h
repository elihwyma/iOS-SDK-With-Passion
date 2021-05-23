/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, CLKDevice, NSMutableDictionary, NSString, NTKCurvedColoringLabel;

@interface NTKSiderealAuxiliaryDialLabels : UIView

{
    CLKDevice *_device;
    UIView *_topLabelContainerView;
    CAShapeLayer *_topLabelMask;
    NTKCurvedColoringLabel *_topLabel;
    UIView *_bottomLabelContainerView;
    CAShapeLayer *_bottomLabelMask;
    NTKCurvedColoringLabel *_bottomLabel;
    NSMutableDictionary *_fontSizeCache;
    NSString *_topText;
    NSString *_bottomText;
}

@property (retain, nonatomic) NSString *topText;
@property (retain, nonatomic) NSString *bottomText;

- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;
- (void)willStartTransition;
- (id)_curvedLabel;
- (void)applyTransitionFraction:(double)arg1;
- (void)_layoutLabel:(id)arg1 text:(id)arg2 monospaced:(_Bool)arg3 offset:(struct CGPoint)arg4 useCache:(_Bool)arg5;
- (void)_setFontSize:(double)arg1 monospaced:(_Bool)arg2 offset:(struct CGPoint)arg3 onLabel:(id)arg4;
- (void)didFinishTransition;

@end
