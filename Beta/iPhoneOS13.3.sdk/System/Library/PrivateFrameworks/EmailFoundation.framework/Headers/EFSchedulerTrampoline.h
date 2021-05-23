/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@protocol EFScheduler;

@interface EFSchedulerTrampoline : NSObject

{
    id <EFScheduler> _scheduler;
    id _object;
}

+ (id)trampolineWithScheduler:(id)arg1 object:(id)arg2;

- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)description;
- (id)debugDescription;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)_initWithScheduler:(id)arg1 object:(id)arg2;

@end
