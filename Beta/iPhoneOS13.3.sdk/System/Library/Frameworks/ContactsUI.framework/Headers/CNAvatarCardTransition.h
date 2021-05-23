/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIPanGestureRecognizer, UIView;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface CNAvatarCardTransition : NSObject

{
    _Bool _reversed;
    _Bool _interactive;
    UIPanGestureRecognizer *_gestureRecognizer;
    id <UIViewControllerContextTransitioning> _context;
    UIView *_presentedView;
}

@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (retain, nonatomic) id <UIViewControllerContextTransitioning> context;
@property (retain, nonatomic) UIView *presentedView;
@property (nonatomic, readonly) _Bool interactive;
@property _Bool reversed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;

@end
