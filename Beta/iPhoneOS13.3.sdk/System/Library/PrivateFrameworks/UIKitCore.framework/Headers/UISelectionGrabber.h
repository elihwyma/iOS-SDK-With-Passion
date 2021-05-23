/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UISelectionGrabberDot, UITextRangeView;

__attribute__((visibility("hidden")))
@interface UISelectionGrabber : UIView

{
    double m_screenScale;
    UISelectionGrabberDot *m_dotView;
    _Bool m_isDotted;
    _Bool m_activeFlattened;
    _Bool m_alertFlattened;
    _Bool m_navigationTransitionFlattened;
    _Bool m_animating;
    long long m_orientation;
    int _applicationDeactivationReason;
}

@property (nonatomic, readonly) UITextRangeView *hostView;
@property (nonatomic) _Bool isDotted;
@property (nonatomic) _Bool activeFlattened;
@property (nonatomic) _Bool alertFlattened;
@property (nonatomic) _Bool navigationTransitionFlattened;
@property (nonatomic) _Bool animating;
@property (nonatomic) long long orientation;

+ (id)_grabberDot;

- (void)dealloc;
- (_Bool)isVertical;
- (_Bool)isScrolling;
- (void)setHidden:(_Bool)arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isRotating;
- (_Bool)autoscrolled;
- (id)_dotView;
- (_Bool)isPointedDown;
- (_Bool)isPointedUp;
- (_Bool)isPointedRight;
- (_Bool)isPointedLeft;
- (void)mustFlattenForAlert:(id)arg1;
- (void)canExpandAfterAlert:(id)arg1;
- (void)saveDeactivationReason:(id)arg1;
- (void)mustFlattenForResignActive:(id)arg1;
- (void)canExpandAfterBecomeActive:(id)arg1;
- (void)mustFlattenForNavigationTransition:(id)arg1;
- (void)canExpandAfterNavigationTransition:(id)arg1;
- (void)updateDot;
- (_Bool)inputViewIsChanging;
- (_Bool)dotIsVisibleInDocument:(struct CGRect)arg1;
- (_Bool)clipDot:(struct CGRect)arg1;
- (_Bool)isScaling;
- (_Bool)scroller:(id)arg1 fullyContainSelectionRect:(struct CGRect)arg2;
- (void)animateGrabberInWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateGrabberOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)transitionDot:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end
