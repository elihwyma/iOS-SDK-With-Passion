/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBehaviorHandler.h>

@class UIView;

@interface SXBackgroundParallaxImageComponentBehaviorHandler : SXComponentBehaviorHandler

{
    UIView *_windowedScrollContentView;
    double _originalYCenter;
    UIView *_clippingView;
    unsigned long long _viewHierarchyIndex;
    double _amplitude;
}

@property (retain, nonatomic) UIView *windowedScrollContentView;
@property (nonatomic) double originalYCenter;
@property (retain, nonatomic) UIView *clippingView;
@property (nonatomic) unsigned long long viewHierarchyIndex;
@property (nonatomic, readonly) double amplitude;

- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (void)setupWithBehaviorController:(id)arg1;
- (void)setupWindowedScroll;
- (void)updateWithBehaviorController:(id)arg1;
- (void)destroyWithBehaviorController:(id)arg1;
- (void)destroyWindowedScroll;

@end
