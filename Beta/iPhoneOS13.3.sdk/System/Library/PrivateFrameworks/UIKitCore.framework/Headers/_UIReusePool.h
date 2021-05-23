/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIReusePool : NSObject

{
    NSMutableSet *_reuseSet;
    unsigned long long _purgePolicy;
    NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;
}

@property (nonatomic, readonly) unsigned long long purgePolicy;

+ (void)initialize;
+ (void)__applicationDidEnterBackground:(id)arg1;
+ (void)__applicationWillEnterForeground:(id)arg1;

- (id)init;
- (void)addObject:(id)arg1;
- (id)initWithPolicy:(unsigned long long)arg1;
- (id)reusableObject;
- (void)drainPool;

@end
