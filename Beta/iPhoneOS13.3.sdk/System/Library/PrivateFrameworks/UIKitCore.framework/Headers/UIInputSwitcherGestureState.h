/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIInputSwitcherGestureState : NSObject

{
    _Bool _didMoveBeyondThreshold;
    _Bool _hideSwitcher;
    double _touchDown;
    double _lastSeenKeyboardTouchDown;
    struct CGPoint _firstReferencePoint;
}

@property (nonatomic) _Bool didMoveBeyondThreshold;
@property (nonatomic) _Bool hideSwitcher;
@property (nonatomic) struct CGPoint firstReferencePoint;
@property (nonatomic) double touchDown;
@property (nonatomic) double lastSeenKeyboardTouchDown;

- (_Bool)gestureConflictsWithTypingWindow;

@end
