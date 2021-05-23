/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VideosTransitionFadeAnimator : NSObject

{
    long long _transitionType;
    double _animationDuration;
}

@property (nonatomic) long long transitionType;
@property (nonatomic) double animationDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)initWithTransitionType:(long long)arg1 andDuration:(double)arg2;

@end
