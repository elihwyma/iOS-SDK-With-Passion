/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SBCAAnimationBlockDelegate : NSObject

{
    CDUnknownBlockType _animationDidStartHandler;
    CDUnknownBlockType _animationDidStopHandler;
}

@property (copy, nonatomic) CDUnknownBlockType animationDidStartHandler;
@property (copy, nonatomic) CDUnknownBlockType animationDidStopHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

@end
