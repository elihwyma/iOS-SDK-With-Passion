/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CAAnimationDelegateBlockHelper : NSObject

{
    CDUnknownBlockType _animationDidStartBlock;
    CDUnknownBlockType _animationDidStopBlock;
}

@property (copy, nonatomic) CDUnknownBlockType animationDidStartBlock;
@property (copy, nonatomic) CDUnknownBlockType animationDidStopBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;

@end
