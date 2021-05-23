/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIGestureRecognizer, UIView, _UIStatesFeedbackGenerator;

@protocol _UIForcePresentationControllerDelegate;

@protocol UIForcePresentationController <Swift>

@property (copy, nonatomic) CDUnknownBlockType presentationPhaseCompletionBlock;
@property (retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer;
@property (nonatomic) _Bool _sourceViewSnapshotAndScaleTransformSuppressed;
@property (nonatomic, readonly) UIView *_revealContainerView;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id <_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate;

- (unsigned short)_canDismissPresentation;
- (unsigned short)_canCommitPresentation;

@end
