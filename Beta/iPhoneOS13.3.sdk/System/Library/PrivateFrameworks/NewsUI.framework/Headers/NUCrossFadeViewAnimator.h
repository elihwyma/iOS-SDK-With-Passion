/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@interface NUCrossFadeViewAnimator : NSObject

{
    double _duration;
}

@property (nonatomic) double duration;

- (id)init;
- (void)resetView:(id)arg1;
- (void)crossFadeFromView:(id)arg1 toView:(id)arg2 value:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateView:(id)arg1 toValue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateView:(id)arg1 toEmptyStateWithCompletion:(CDUnknownBlockType)arg2;

@end
