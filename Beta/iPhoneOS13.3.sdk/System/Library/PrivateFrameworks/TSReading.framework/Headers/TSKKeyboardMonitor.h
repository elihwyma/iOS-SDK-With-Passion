/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIWindow;

@protocol TSKKeyboardObserver;

@interface TSKKeyboardMonitor : NSObject

{
    UIWindow *_rootWindow;
    _Bool _keyboardIsVisibleAndDocked;
    _Bool _keyboardIsAnimatingInOrDocking;
    _Bool _keyboardIsAnimatingOutOrUndocking;
    _Bool _weAreFakingAHideEvent;
    _Bool _lastHideWasFake;
    _Bool _suppressDidHide;
    struct CGRect _keyboardFrame;
    double _onScreenHeight;
    struct __CFArray *_keyboardObservers;
    NSMutableArray *_completionBlocks;
    id <TSKKeyboardObserver> _exclusiveKeyboardObserver;
    double _keyboardAnimationDuration;
}

@property (nonatomic) UIWindow *rootWindow;
@property (readonly) _Bool keyboardIsVisibleAndDocked;
@property (readonly) _Bool keyboardIsAnimating;
@property (readonly) _Bool keyboardIsAnimatingInOrDocking;
@property (readonly) _Bool keyboardIsAnimatingOutOrUndocking;
@property (readonly) double onScreenHeight;
@property (readonly) struct CGRect keyboardFrame;
@property (readonly) double keyboardAnimationDuration;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedKeyboardMonitor;
+ (id)_singletonAlloc;
+ (void)addKeyboardObserver:(id)arg1;
+ (void)removeKeyboardObserver:(id)arg1;
+ (void)setModalKeyboardObserver:(id)arg1;
+ (void)setKeyboardHiddenByModalObserver:(id)arg1;
+ (_Bool)keyboardIsVisibleAndDocked;
+ (_Bool)keyboardIsAnimating;
+ (_Bool)keyboardIsAnimatingInOrDocking;
+ (_Bool)keyboardIsAnimatingOutOrUndocking;
+ (void)afterKeyboardAnimationPerformBlock:(CDUnknownBlockType)arg1;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addKeyboardObserver:(id)arg1;
- (void)removeKeyboardObserver:(id)arg1;
- (void)p_installKeyboardNotifications;
- (void)p_removeKeyboardNotifications;
- (void)setModalKeyboardObserver:(id)arg1;
- (void)setKeyboardHiddenByModalObserver:(id)arg1;
- (void)afterKeyboardAnimationPerformBlock:(CDUnknownBlockType)arg1;
- (id)p_keyboardFrameView;
- (void)p_keyboardWillShowOrDock:(id)arg1;
- (void)p_keyboardDidShowOrDock:(id)arg1;
- (void)p_keyboardWillHideOrUndock:(id)arg1;
- (void)p_keyboardDidHideOrUndock:(id)arg1;
- (void)p_KeyboardWillChangeFrame:(id)arg1;
- (void)p_KeyboardDidChangeFrame:(id)arg1;
- (void)p_updateKeyboardInfoFromNotification:(id)arg1;
- (void)p_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)p_performAnimationCompletionBlocksWithVisible:(_Bool)arg1;
- (double)keyboardHeightInView:(id)arg1;

@end
