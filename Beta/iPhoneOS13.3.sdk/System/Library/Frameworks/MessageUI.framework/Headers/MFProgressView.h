/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, NSTimer, UIColor;

@protocol MFProgressViewDelegate;

@interface MFProgressView : UIView

{
    double _stroke;
    double _diameter;
    CADisplayLink *_displayLink;
    double _displayedProgress;
    double _targetProgress;
    UIColor *_tintColor;
    NSTimer *_simulateActivityTimer;
    id <MFProgressViewDelegate> _delegate;
}

@property (weak, nonatomic) id <MFProgressViewDelegate> delegate;
@property (retain, nonatomic) UIColor *tintColor;

+ (id)progressViewWithDefaultStyleStrokeAndRect;

- (void)dealloc;
- (void)setProgress:(double)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)_onDisplayLink:(id)arg1;
- (id)initWithProgressViewStyle:(int)arg1 stroke:(double)arg2 frame:(struct CGRect)arg3;
- (void)_invalidateDisplayLink;
- (void)_invalidateSimulationTimer;
- (void)simulateActivity;
- (void)_adjustProgress;
- (void)_drawProgressInRect:(struct CGRect)arg1;
- (_Bool)_isValidCenter:(struct CGPoint)arg1 radius:(double)arg2 rect:(struct CGRect)arg3;
- (void)_drawCircleWithCenter:(struct CGPoint)arg1 radius:(double)arg2;
- (void)_drawWedgeWithCenter:(struct CGPoint)arg1 radius:(double)arg2;
- (void)progressDidFinish;
- (void)_stopSimulationIfCompleted;

@end
