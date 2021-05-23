/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString, VUIConfirmationAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface VUIConfirmationTransitioningDelegate : NSObject

{
    VUIConfirmationAnimatedTransitioning *_presentTransition;
    VUIConfirmationAnimatedTransitioning *_dismissTransition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;

@end
