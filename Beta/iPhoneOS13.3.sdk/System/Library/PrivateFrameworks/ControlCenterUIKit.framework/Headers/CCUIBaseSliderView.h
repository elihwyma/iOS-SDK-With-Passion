/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
 */

#import <UIKit/UIControl.h>

@class CALayer, CCUICAPackageDescription, CCUICAPackageView, MTVisualStylingProvider, NSArray, NSString, UIImage, UIImageView;

@interface CCUIBaseSliderView : UIControl

{
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    CCUICAPackageView *_compensatingGlyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
    _Bool _didConfigureGlyphPackageView;
    _Bool _glyphVisible;
    _Bool _interactiveWhenUnexpanded;
    float _value;
    UIImage *_glyphImage;
    CCUICAPackageDescription *_glyphPackageDescription;
    NSString *_glyphState;
    double _glyphScale;
}

@property (nonatomic, readonly) struct CGPoint glyphCenter;
@property (nonatomic) double glyphScale;
@property (nonatomic) float value;
@property (retain, nonatomic) UIImage *glyphImage;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (retain, nonatomic) NSString *glyphState;
@property (nonatomic, getter=isGlyphVisible) _Bool glyphVisible;
@property (nonatomic, getter=isInteractiveWhenUnexpanded) _Bool interactiveWhenUnexpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isGroupRenderingRequired) _Bool groupRenderingRequired;
@property (nonatomic, readonly) NSArray *punchOutRootLayers;
@property (nonatomic, readonly) CALayer *punchOutRootLayer;
@property (nonatomic, readonly) NSArray *topLevelBlockingGestureRecognizers;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)viewForTouchContinuation;
- (double)sliderLengthForValue:(float)arg1;
- (void)_setGlyphState:(id)arg1;
- (void)_updateGlyphImageViewVisualStyling;
- (id)_newGlyphPackageView;
- (void)_configureGlyphPackageView:(id)arg1;
- (void)_configureCompensatingGlyphPackageView:(id)arg1;
- (double)sliderHeightForValue:(float)arg1;

@end
