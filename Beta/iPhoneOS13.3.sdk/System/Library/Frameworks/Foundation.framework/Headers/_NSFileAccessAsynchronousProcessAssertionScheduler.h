/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject

{
    NSMutableDictionary *_assertionsPerPID;
    struct os_unfair_lock_s _lock;
}

+ (id)sharedInstance;

- (id)init;
- (void)removeAssertionWithToken:(id)arg1;
- (id)addAssertionWithName:(id)arg1 forPID:(int)arg2;

@end
