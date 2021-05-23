/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSFileHandle;

@protocol OS_dispatch_io, OS_dispatch_queue;

@interface _PASPosixPipeContext : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_io> *_readChannel;
    NSFileHandle *_writeHandle;
    _Bool _stop;
}

- (int)setupWithSubprocessFd:(int)arg1 fileActions:(void **)arg2 queue:(id)arg3 group:(id)arg4 readErrno:(int *)arg5;
- (void)startReadWithHandler:(CDUnknownBlockType)arg1;

@end
