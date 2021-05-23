/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIView.h>

@interface CrossFadeView : UIView

{
    _Bool _scaleSize;
    UIView *_startView;
    UIView *_endView;
    struct CGRect _startFrame;
    struct CGRect _endFrame;
}

@property (nonatomic, readonly) UIView *startView;
@property (nonatomic, readonly) UIView *endView;
@property (nonatomic, readonly) struct CGRect startFrame;
@property (nonatomic, readonly) struct CGRect endFrame;
@property (nonatomic) _Bool scaleSize;

- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setEndView:(id)arg1;
- (void)setStartView:(id)arg1;
- (void)setToEndState;
- (void)setToStartState;
- (void)springAnimateToStartStateWithTimingFunction:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)springAnimateToEndStateWithTimingFunction:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithStartView:(id)arg1 endView:(id)arg2 startFrame:(struct CGRect)arg3 endFrame:(struct CGRect)arg4;
- (void)animateToStartStateWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToEndStateWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)springAnimateToStartStateWithTimingFunction:(int)arg1;
- (void)springAnimateToEndStateWithTimingFunction:(int)arg1;
- (void)haltAnimation;

@end
