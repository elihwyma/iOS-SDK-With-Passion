/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <ContactsUI/Swift-Protocol.h>

@class UITargetedPreview, UIViewPropertyAnimator;

@protocol _UIClickPresentationTransition <Swift>

@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (unsigned short)performTransitionFromView:toView:containerView: /* Error: Ran out of types for this method. */;
- (unsigned short)transitionDidEnd: /* Error: Ran out of types for this method. */;

@end
