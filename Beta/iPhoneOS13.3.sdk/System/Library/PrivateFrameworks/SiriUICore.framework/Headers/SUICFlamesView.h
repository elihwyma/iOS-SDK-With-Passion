/*
 Image: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UIImage;

@protocol SUICFlamesViewDelegate, SUICFlamesViewProviding;

@interface SUICFlamesView : UIView

{
    UIView<SUICFlamesViewProviding> *_flamesView;
    id <SUICFlamesViewDelegate> _flamesDelegate;
}

@property (nonatomic, readonly) _Bool isRenderingEnabled;
@property (weak, nonatomic) id <SUICFlamesViewDelegate> flamesDelegate;
@property (nonatomic) long long mode;
@property (nonatomic) long long state;
@property (nonatomic) _Bool showAura;
@property (nonatomic) _Bool freezesAura;
@property (nonatomic) _Bool reduceFrameRate;
@property (nonatomic) _Bool reduceThinkingFramerate;
@property (nonatomic) struct CGRect activeFrame;
@property (retain, nonatomic) UIImage *overlayImage;
@property (retain, nonatomic) UIColor *dictationColor;
@property (nonatomic) _Bool renderInBackground;
@property (nonatomic) _Bool paused;
@property (nonatomic) double horizontalScaleFactor;
@property (nonatomic) _Bool accelerateTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_isMetalAvailable;

- (void)setDelegate:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)flamesViewAuraDidDisplay:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 fidelity:(long long)arg3;
- (void)resetAndReinitialize:(_Bool)arg1;
- (void)setRenderingEnabled:(_Bool)arg1 forReason:(id)arg2;
- (void)prewarmShadersForCurrentMode;
- (void)fadeOutCurrentAura;
- (void)resetAndReinitializeMetal:(_Bool)arg1;

@end
