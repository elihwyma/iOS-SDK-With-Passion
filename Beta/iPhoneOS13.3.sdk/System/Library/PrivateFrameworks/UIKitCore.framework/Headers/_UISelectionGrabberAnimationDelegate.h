/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UISelectionGrabberAnimationDelegate : NSObject

{
    CDUnknownBlockType block;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)delegateWithCompletionBlock:(CDUnknownBlockType)arg1;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@end
