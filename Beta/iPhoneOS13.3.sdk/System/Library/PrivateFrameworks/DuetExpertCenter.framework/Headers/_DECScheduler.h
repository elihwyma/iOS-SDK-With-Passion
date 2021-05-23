/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@protocol OS_xpc_object;

@interface _DECScheduler : NSObject

{
    NSObject<OS_xpc_object> *_executionCriteria;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;

- (id)initWithActivityIdentifier:(id)arg1 andExecutionCriteria:(id)arg2;
- (void)forceRun;

@end
