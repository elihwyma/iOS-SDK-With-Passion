/*
 Image: /System/Library/PrivateFrameworks/InertiaCam.framework/InertiaCam
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@protocol OS_dispatch_group;

@interface PipelineStatePromise : NSObject

{
    NSMapTable *pipelineStates;
    NSMapTable *errors;
    NSObject<OS_dispatch_group> *group;
    _Atomic _Bool initialization_completed;
}

- (_Bool)timesOutWaitingForPipelineStates:(double)arg1;
- (id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3;
- (_Bool)groupWasSuccessful;
- (id)pipelineStateForFunction:(id)arg1;
- (id)errorForFunction:(id)arg1;

@end
