/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXComponentBehaviorHandler.h>

@class NSString, UIInterpolatingMotionEffect, UIView;

@interface SXMotionImageComponentBehaviorHandler : SXComponentBehaviorHandler

{
    _Bool _windowed;
    _Bool _horizontal;
    _Bool _vertical;
    UIView *_clippingView;
    UIView *_motionContentView;
    unsigned long long _viewHierarchyIndex;
    UIInterpolatingMotionEffect *_xMotionEffect;
    UIInterpolatingMotionEffect *_yMotionEffect;
    double _amplitude;
}

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIView *motionContentView;
@property (nonatomic) unsigned long long viewHierarchyIndex;
@property (retain, nonatomic) UIInterpolatingMotionEffect *xMotionEffect;
@property (retain, nonatomic) UIInterpolatingMotionEffect *yMotionEffect;
@property (nonatomic) double amplitude;
@property (nonatomic) _Bool windowed;
@property (nonatomic) _Bool horizontal;
@property (nonatomic) _Bool vertical;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (id)initWithComponentView:(id)arg1 withBehavior:(id)arg2;
- (void)setupWithBehaviorController:(id)arg1;
- (void)destroyWithBehaviorController:(id)arg1;
- (void)setupMotionDetection;
- (void)updateEdgeAntialiasingForViewport:(id)arg1;
- (void)destroyMotionDetection;

@end
