/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFocusTest.h>

@class UIWindow;

@interface _UIFocusSwipeTest : _UIFocusTest

{
    unsigned long long _eventCount;
    const struct {
        double _field1;
        long long _field2;
        double _field3;
        double _field4;
        double _field5;
        double _field6;
    } *_events;
    int _swipeAxis;
    UIWindow *_window;
}

@property (weak, nonatomic) UIWindow *window;
@property (nonatomic) int swipeAxis;

- (void)main;
- (id)initWithIdentifier:(id)arg1;
- (void)prepareWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
