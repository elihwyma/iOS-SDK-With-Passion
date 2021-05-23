/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableSet;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSThreadSafeSet : NSObject

{
    NSMutableSet *_backingSet;
    NSObject<OS_dispatch_queue> *_backingSetAccessQueue;
}

@property (retain, nonatomic) NSMutableSet *backingSet;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backingSetAccessQueue;
@property (copy, nonatomic, readonly) NSArray *allObjects;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;

@end
