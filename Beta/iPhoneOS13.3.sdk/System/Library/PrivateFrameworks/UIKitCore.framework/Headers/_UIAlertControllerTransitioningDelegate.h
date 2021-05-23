/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIInteractionProgress;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTransitioningDelegate : NSObject

{
    UIInteractionProgress *interactionProgressForPresentation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation;

- (id)_interactionControllerForTransitionOfType:(long long)arg1 forAlertController:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;

@end
