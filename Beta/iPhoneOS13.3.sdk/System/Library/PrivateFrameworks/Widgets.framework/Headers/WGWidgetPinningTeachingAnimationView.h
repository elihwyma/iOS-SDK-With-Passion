/*
 Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

#import <BSUICAPackageView.h>

@class CALayer, NSTimer, UILabel;

@interface WGWidgetPinningTeachingAnimationView : BSUICAPackageView

{
    unsigned long long _state;
    CALayer *_materialsLayer;
    CALayer *_pagesLayer;
    CALayer *_page1Layer;
    NSTimer *_timerToNextState;
    UILabel *_debugLabel;
}

@property (nonatomic, setter=_setState:) unsigned long long state;
@property (retain, nonatomic) CALayer *materialsLayer;
@property (retain, nonatomic) CALayer *pagesLayer;
@property (retain, nonatomic) CALayer *page1Layer;
@property (retain, nonatomic, setter=_setTimerToNextState:) NSTimer *timerToNextState;
@property (retain, nonatomic) UILabel *debugLabel;

- (id)init;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)startAnimating;
- (void)stopAnimating;
- (double)_durationForState:(unsigned long long)arg1;
- (unsigned long long)_stateFollowingState:(unsigned long long)arg1;
- (void)_updateMaterials;

@end
