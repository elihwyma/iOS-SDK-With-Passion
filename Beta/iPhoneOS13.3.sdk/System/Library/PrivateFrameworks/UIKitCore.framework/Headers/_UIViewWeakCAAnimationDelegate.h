/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol CAAnimationDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewWeakCAAnimationDelegate : NSObject

{
    id <CAAnimationDelegate> _animationDelegate;
    struct {
        unsigned int delegateAnimationDidStart:1;
        unsigned int delegateAnimationDidStopFinished:1;
    } _flags;
}

@property (weak, nonatomic, readonly) id <CAAnimationDelegate> animationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)weakAnimationDelegate:(id)arg1;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (id)initWithAnimationDelegate:(id)arg1;

@end
