/*
 Image: /System/Library/PrivateFrameworks/IAP.framework/IAP
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue;

@interface IAPClientPort : NSObject

{
    NSString *_uuid;
    CDUnknownBlockType _sendDataHandler;
    NSObject<OS_dispatch_queue> *_sendDataHandlerQueue;
    NSObject<OS_dispatch_queue> *_clientPortEventQueue;
}

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sendDataHandlerQueue;
@property (nonatomic) CDUnknownBlockType sendDataHandler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientPortEventQueue;

- (void)dealloc;
- (id)initWithUUID:(id)arg1 queue:(id)arg2 sendHandler:(CDUnknownBlockType)arg3;

@end
