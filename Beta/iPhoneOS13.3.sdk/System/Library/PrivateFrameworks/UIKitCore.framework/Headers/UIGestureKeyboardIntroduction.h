/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSTimer, UIKBKeyView, UIKeyboardLayoutStar, UIView;

__attribute__((visibility("hidden")))
@interface UIGestureKeyboardIntroduction : NSObject

{
    UIKeyboardLayoutStar *m_layout;
    UIView *m_view;
    UIKBKeyView *m_firstKeyView;
    UIKBKeyView *m_secondKeyView;
    CDUnknownBlockType m_completionBlock;
    double m_start;
    NSTimer *m_gestureKeyboardInfoTimer;
    struct CGPoint m_initPoint;
    _Bool m_isInTransition;
    _Bool m_hasPeeked;
    unsigned long long m_insertedTextLength;
}

- (void)tryGestureKeyboardFromView:(id)arg1 withEvent:(id)arg2;
- (void)dismissGestureKeyboardIntroduction:(id)arg1;
- (void)playGestureKeyboardIntroduction:(id)arg1;
- (void)insertText:(id)arg1 forKey:(id)arg2;
- (id)initWithLayoutStar:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)showGestureKeyboardIntroduction;
- (void)dismissGestureKeyboardIntroduction;

@end
