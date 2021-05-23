/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

#import <CoverSheet/Swift-Protocol.h>

@class CSHorizontalScrollFailureRecognizer, NSString, UIGestureRecognizer, UIScrollView, UIView;

@protocol CSScrollGestureControllerDelegate, CSScrollableView;

@interface CSScrollGestureController : NSObject <Swift>

{
    UIScrollView *_scrollView;
    UIView<CSScrollableView> *_scrollableView;
    long long _scrollingStrategy;
    UIGestureRecognizer *_scrollViewGestureRecognizer;
    id <CSScrollGestureControllerDelegate> _delegate;
    CSHorizontalScrollFailureRecognizer *_horizontalFailureGestureRecognizer;
}

@property (retain, nonatomic) CSHorizontalScrollFailureRecognizer *horizontalFailureGestureRecognizer;
@property (nonatomic) long long scrollingStrategy;
@property (weak, nonatomic) id <CSScrollGestureControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (id)initWithScrollableView:(id)arg1;
- (void)_horizontalScrollFailureGestureRecognizerChanged:(id)arg1;
- (void)_updateForScrollingStrategy:(long long)arg1 fromScrollingStrategy:(long long)arg2;
- (_Bool)_shouldFailHorizontalSwipesForScrollingStrategy:(long long)arg1;
- (_Bool)_shouldAllowScrollForScrollingStrategy:(long long)arg1;

@end
