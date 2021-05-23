/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface CCUIAnimationRunner : NSObject

{
    NSObject<OS_dispatch_group> *_previousAnimationGroup;
}

+ (id)runner;
+ (void)_runCAAnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)_runC2AnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (void)runAnimationBatch:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)additivelyRunAnimationBatch:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
