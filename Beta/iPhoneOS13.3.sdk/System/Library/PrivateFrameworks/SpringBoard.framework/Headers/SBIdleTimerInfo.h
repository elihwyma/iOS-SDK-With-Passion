/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBIdleTimerProxy;

@protocol SBFIdleTimerBehaviorProviding, SBIdleTimerProviding;

@interface SBIdleTimerInfo : NSObject

{
    id <SBIdleTimerProviding> _provider;
    id <SBFIdleTimerBehaviorProviding> _behavior;
    NSString *_reason;
    SBIdleTimerProxy *_idleTimerProxy;
}

@property (weak, nonatomic, readonly) id <SBIdleTimerProviding> provider;
@property (retain, nonatomic) id <SBFIdleTimerBehaviorProviding> behavior;
@property (copy, nonatomic) NSString *reason;
@property (retain, nonatomic) SBIdleTimerProxy *idleTimerProxy;

- (id)initWithProvider:(id)arg1 behavior:(id)arg2 reason:(id)arg3 idleTimerProxy:(id)arg4;

@end
