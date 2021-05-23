/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UIPanGestureRecognizer, UIScrollView, _UIFocusEngineJoystickGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingRequest : NSObject

{
    UIScrollView *_scrollView;
    UIPanGestureRecognizer *_panGesture;
    NSArray *_pressGestures;
    _UIFocusEngineJoystickGestureRecognizer *_joystickGesture;
    long long _scrollingType;
    unsigned long long _heading;
    unsigned long long _allowedHeadings;
    CDUnknownBlockType _didBeginCallback;
    CDUnknownBlockType _didEndCallback;
    struct CGPoint _velocity;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint velocity;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) NSArray *pressGestures;
@property (retain, nonatomic) _UIFocusEngineJoystickGestureRecognizer *joystickGesture;
@property (nonatomic) long long scrollingType;
@property (nonatomic) unsigned long long heading;
@property (nonatomic) unsigned long long allowedHeadings;
@property (copy, nonatomic) CDUnknownBlockType didBeginCallback;
@property (copy, nonatomic) CDUnknownBlockType didEndCallback;

@end
