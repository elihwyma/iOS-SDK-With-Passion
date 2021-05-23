/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface AFClientLiteInternal : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _commandHandler;
}

- (void)_handleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 isOneWay:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initAndHandleCommand:(id)arg1 afterCurrentRequest:(_Bool)arg2 isOneWay:(_Bool)arg3 commandHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end
