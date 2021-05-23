/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@protocol FBProcessWatchdogProviding;

@interface FBWatchdogTransitionContext : NSObject

{
    long long _watchdogBehavior;
    id <FBProcessWatchdogProviding> _watchdogProvider;
    _Bool _runIndependently;
}

@property (nonatomic) _Bool runIndependently;
@property (nonatomic) long long watchdogBehavior;
@property (retain, nonatomic) id <FBProcessWatchdogProviding> watchdogProvider;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
