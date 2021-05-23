/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class CNAvatarCardViewController, CNContactOrbHeaderView, NSString, UITargetedPreview, UIView, UIViewPropertyAnimator, UIVisualEffectView;

@protocol CNAvatarCardControllerOrbTransitionDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardControllerOrbTransition : NSObject

{
    _Bool _isDismissing;
    CNContactOrbHeaderView *_headerView;
    CNAvatarCardViewController *_cardViewController;
    UIView *_sourceView;
    UIView *_highlightedView;
    id <CNAvatarCardControllerOrbTransitionDelegate> _delegate;
    double _highlightViewToAlpha;
    UIVisualEffectView *_visualEffectView;
    struct CGRect _sourceRect;
    struct CGAffineTransform _endHeaderTransform;
    struct CGAffineTransform _endActionListTransform;
}

@property (nonatomic) struct CGAffineTransform endHeaderTransform;
@property (nonatomic) struct CGAffineTransform endActionListTransform;
@property (nonatomic) double highlightViewToAlpha;
@property (nonatomic) _Bool isDismissing;
@property (weak, nonatomic) CNContactOrbHeaderView *headerView;
@property (weak, nonatomic) CNAvatarCardViewController *cardViewController;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIView *highlightedView;
@property (nonatomic) struct CGRect sourceRect;
@property (weak, nonatomic) id <CNAvatarCardControllerOrbTransitionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

- (void)prepareTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)performTransitionFromView:(id)arg1 toView:(id)arg2 containerView:(id)arg3;
- (void)transitionDidEnd:(_Bool)arg1;
- (id)initWithCardViewController:(id)arg1 headerView:(id)arg2 sourceView:(id)arg3 highlightedView:(id)arg4 sourceRect:(struct CGRect)arg5 backgroundVisualEffectView:(id)arg6 isDismissing:(_Bool)arg7;
- (void)setupTransitionFromView:(id)arg1 toView:(id)arg2 withContainerView:(id)arg3;
- (struct CGRect)_sourceRectInContainerView:(id)arg1;

@end
