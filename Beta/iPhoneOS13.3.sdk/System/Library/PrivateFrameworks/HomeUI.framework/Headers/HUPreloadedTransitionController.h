/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class NAFuture, NSString;

@interface HUPreloadedTransitionController : NSObject

{
    NAFuture *_completionFuture;
}

@property (nonatomic, readonly) NAFuture *completionFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end
