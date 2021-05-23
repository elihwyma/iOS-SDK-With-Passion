/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSConditionLock.h>

__attribute__((visibility("hidden")))
@interface _EFLazyCacheConditionLock : NSConditionLock

{
    _Atomic long long _waiterCount;
}

@property (readonly) long long waiterCount;

- (id)initWithCondition:(long long)arg1;
- (void)incrementWaiterCount;
- (void)decrementWaiterCount;

@end
