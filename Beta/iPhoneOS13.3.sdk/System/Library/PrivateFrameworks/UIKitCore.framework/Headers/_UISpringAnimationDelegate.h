/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UISpringAnimationDelegate : NSObject

{
    NSMutableArray *_completionBlocks;
}

@property (nonatomic, readonly) NSMutableArray *completionBlocks;

- (id)init;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

@end
