/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface HFExecutionEnvironment : NSObject

{
    _Bool _active;
    unsigned long long _runningState;
    NSHashTable *_observers;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic, readonly) unsigned long long runningState;

+ (id)sharedInstance;
+ (id)stringForHFExecutionEnvironmentRunningState:(unsigned long long)arg1;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dispatchMessageToObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)setRunningState:(unsigned long long)arg1;
- (void)executionEnvironmentWillEnterForeground;
- (void)executionEnvironmentDidBecomeActive;
- (void)executionEnvironmentWillResignActive;
- (void)executionEnvironmentDidEnterBackground;

@end
