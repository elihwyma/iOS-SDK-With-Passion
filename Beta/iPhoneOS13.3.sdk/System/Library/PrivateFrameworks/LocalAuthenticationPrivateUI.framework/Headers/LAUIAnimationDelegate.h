/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LAUIAnimationDelegate : NSObject

{
    CDUnknownBlockType _didStartHandler;
    CDUnknownBlockType _didStopHandler;
}

@property (copy, nonatomic) CDUnknownBlockType didStartHandler;
@property (copy, nonatomic) CDUnknownBlockType didStopHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

@end
