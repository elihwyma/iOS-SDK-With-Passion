/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CFXAnimationDelegate : NSObject

{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _start;
}

@property (copy, nonatomic) CDUnknownBlockType completion;
@property (copy, nonatomic) CDUnknownBlockType start;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

@end
