/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol WKKeyboardScrollViewAnimatorDelegate;

__attribute__((visibility("hidden")))
@interface WKKeyboardScrollViewAnimator : NSObject

{
    struct WeakObjCPtr<UIScrollView> _scrollView;
    struct RetainPtr<WKKeyboardScrollingAnimator> _animator;
    _Bool _delegateRespondsToIsKeyboardScrollable;
    _Bool _delegateRespondsToDistanceForIncrement;
    _Bool _delegateRespondsToWillScroll;
    _Bool _delegateRespondsToDidFinishScrolling;
    id <WKKeyboardScrollViewAnimatorDelegate> _delegate;
}

@property (weak, nonatomic) id <WKKeyboardScrollViewAnimatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id).cxx_construct;
- (struct CGPoint)contentOffset;
- (id)initWithScrollView:(id)arg1;
- (void)handleKeyEvent:(id)arg1;
- (void)didFinishScrolling;
- (_Bool)isKeyboardScrollable;
- (double)distanceForIncrement:(unsigned char)arg1 inDirection:(unsigned char)arg2;
- (RectEdges_76d77e37)rubberbandableDirections;
- (struct CGPoint)boundedContentOffset:(struct CGPoint)arg1;
- (void)scrollWithScrollToExtentAnimationTo:(struct CGPoint)arg1;
- (struct CGSize)interactiveScrollVelocity;
- (RectEdges_76d77e37)scrollableDirectionsFromOffset:(struct CGPoint)arg1;
- (void)scrollToContentOffset:(struct FloatPoint)arg1 animated:(_Bool)arg2;
- (_Bool)beginWithEvent:(id)arg1;
- (_Bool)scrollTriggeringKeyIsPressed;
- (void)willStartInteractiveScroll;

@end
