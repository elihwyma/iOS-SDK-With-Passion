/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSNotificationCenter, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface __NSObserver : NSObject

{
    NSNotificationCenter *nc;
    NSOperationQueue *queue;
    NSString *name;
    id object;
    CDUnknownBlockType block;
}

+ (id)observerWithCenter:(id)arg1 queue:(id)arg2 name:(id)arg3 object:(id)arg4 block:(CDUnknownBlockType)arg5;
+ (_Bool)isAnObserver:(id)arg1;
+ (void)forgetObserver:(id)arg1;

- (void)dealloc;
- (id)name;
- (id)object;
- (void)_doit:(id)arg1;

@end
