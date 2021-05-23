/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CADXPCInvocationContextHolder : NSObject

{
    NSMutableArray *_retainedArguments;
    id _proxy;
}

@property (nonatomic, readonly) id proxy;

- (void)clear;
- (void)retainProxy:(id)arg1 andArgumentsInInvocation:(id)arg2;

@end
