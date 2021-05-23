/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <Foundation/NSObject.h>

@class NSRunLoop, NSString, UIScreen;

@interface IMDisplayLink : NSObject

{
    id _target;
    SEL _selector;
    long long _preferredFramesPerSecond;
    NSRunLoop *_runLoop;
    NSString *_runLoopMode;
    UIScreen *_screen;
}

@property (nonatomic) long long preferredFramesPerSecond;
@property (weak, nonatomic) NSRunLoop *runLoop;
@property (retain, nonatomic) NSString *runLoopMode;
@property (weak, nonatomic) UIScreen *screen;
@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly, getter=isValid) _Bool valid;

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
+ (Class)_displayLinkClass;

- (void)dealloc;
- (void)invalidate;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)schedule;
- (void)_displayLinkCallback;

@end
