/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIInteractionProgress, _UIStatesFeedbackGenerator;

@interface _UIPreviewTransitionDelegate : NSObject

{
    UIInteractionProgress *interactionProgressForPresentation;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
}

@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) UIInteractionProgress *interactionProgressForPresentation;

- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;

@end
