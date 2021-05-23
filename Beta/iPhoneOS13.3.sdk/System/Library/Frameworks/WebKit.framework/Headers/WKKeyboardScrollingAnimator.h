/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@protocol WKKeyboardScrollableInternal;

__attribute__((visibility("hidden")))
@interface WKKeyboardScrollingAnimator : NSObject

{
    id <WKKeyboardScrollableInternal> _scrollable;
    struct RetainPtr<CADisplayLink> _displayLink;
    Optional_9e1741ce _currentScroll;
    _Bool _scrollTriggeringKeyIsPressed;
    struct FloatSize _velocity;
    struct FloatPoint _idealPosition;
    struct FloatPoint _currentPosition;
    struct FloatPoint _idealPositionForMinimumTravel;
}

- (id)init;
- (void)invalidate;
- (id).cxx_construct;
- (const struct KeyboardScrollParameters *)parameters;
- (void)handleKeyEvent:(id)arg1;
- (void)displayLinkFired:(id)arg1;
- (void)stopAnimatedScroll;
- (void)stopDisplayLink;
- (Optional_9e1741ce)keyboardScrollForEvent:(id)arg1;
- (void)startDisplayLinkIfNeeded;
- (id)initWithScrollable:(id)arg1;
- (_Bool)beginWithEvent:(id)arg1;
- (_Bool)scrollTriggeringKeyIsPressed;
- (void)willStartInteractiveScroll;

@end
