/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class CALayer, SBUILegibilityLabel, UIView, _UILegibilitySettings, _UILegibilityView;

@interface SBUIFaceIDCameraGlyphView : SBFTouchPassThroughView

{
    _UILegibilitySettings *_legibilitySettings;
    UIView *_arrowContainer;
    SBUILegibilityLabel *_callToActionLabel;
    unsigned long long _state;
    _UILegibilityView *_arrowHead;
    _UILegibilityView *_arrowTail;
    CALayer *_maskContainerLayer;
    CALayer *_maskTopLayer;
    CALayer *_maskLeftLayer;
    CALayer *_maskRightLayer;
    UIView *_localRotationView;
    struct CGAffineTransform _localTransform;
}

@property (retain, nonatomic) _UILegibilityView *arrowHead;
@property (retain, nonatomic) _UILegibilityView *arrowTail;
@property (retain, nonatomic) SBUILegibilityLabel *callToActionLabel;
@property (retain, nonatomic) UIView *arrowContainer;
@property (retain, nonatomic) CALayer *maskContainerLayer;
@property (retain, nonatomic) CALayer *maskTopLayer;
@property (retain, nonatomic) CALayer *maskLeftLayer;
@property (retain, nonatomic) CALayer *maskRightLayer;
@property (retain, nonatomic) UIView *localRotationView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) struct CGAffineTransform localTransform;
@property (nonatomic) unsigned long long state;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setState:(unsigned long long)arg1 delay:(double)arg2;
- (void)_updateCallToActionLabelFont;
- (void)_installMask;
- (void)_flyInWithText:(_Bool)arg1 delay:(double)arg2;
- (void)_fadeComponentsIn:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeComponenetsOut:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeAnimations;
- (void)_setAlpha:(double)arg1 onComponents:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
