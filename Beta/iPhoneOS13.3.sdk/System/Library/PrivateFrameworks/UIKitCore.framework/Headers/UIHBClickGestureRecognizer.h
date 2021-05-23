/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class NSArray, NSString, UIPressesEvent;

@interface UIHBClickGestureRecognizer : UIGestureRecognizer

{
    UIPressesEvent *_registeredEventForTerminalEvents;
    unsigned long long _lastSeenClickCount;
    _Bool _recognizesOnPressPhaseBegan;
    unsigned long long _clickCount;
}

@property (nonatomic) unsigned long long clickCount;
@property (nonatomic) _Bool recognizesOnPressPhaseBegan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *allowedPressTypes;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)_succeed;
- (void)_fail;
- (void)_processPresses:(id)arg1;
- (void)pressesEventDidReceiveTerminal:(id)arg1;

@end
