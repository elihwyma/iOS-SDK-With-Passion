/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UISpringTimingParameters, UIView;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UITabBarTVTransitioner : NSObject

{
    _Bool _fromViewOriginalShouldRasterize;
    double _fromViewLayerOriginalRasterizationScale;
    _Bool _toViewOriginalShouldRasterize;
    double _toViewLayerOriginalRasterizationScale;
    _Bool _transitionFromRight;
    long long _transitionStyle;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UISpringTimingParameters *_slideTimingParameters;
    UIView *_toViewXFlippedScreenShot;
}

@property (retain, nonatomic) UISpringTimingParameters *slideTimingParameters;
@property (retain, nonatomic) UIView *toViewXFlippedScreenShot;
@property (nonatomic) long long transitionStyle;
@property (nonatomic) _Bool transitionFromRight;
@property (retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)interruptTabBarControllerTransition;
- (void)finishTransition;

@end
