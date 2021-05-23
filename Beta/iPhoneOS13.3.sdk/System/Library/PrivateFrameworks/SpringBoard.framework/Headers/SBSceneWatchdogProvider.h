/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBApplicationProcessWatchdogPolicy, NSString;

@interface SBSceneWatchdogProvider : NSObject

{
    FBApplicationProcessWatchdogPolicy *_defaultProcessWatchdogProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultSceneWatchdogProvider;

- (id)init;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;
- (id)_scaleProvisions:(id)arg1 byFactor:(double)arg2;

@end
