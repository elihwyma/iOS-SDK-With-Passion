/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NEIPC, NSUUID;

@protocol OS_dispatch_queue;

@interface NEIPCWrapper : NSObject

{
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    NEIPC *_ipc;
    NSUUID *_identifier;
}

@property (readonly) NSObject<OS_dispatch_queue> *sendQueue;
@property (readonly) NSObject<OS_dispatch_queue> *ipcQueue;
@property (readonly) NEIPC *ipc;
@property (readonly) NSUUID *identifier;

+ (void)cancelSharedWrapperForSession:(void *)arg1;
+ (id)sharedWrapperForSession:(void *)arg1;

- (void)cancel;
- (id)initWithSession:(void *)arg1 identifier:(id)arg2;

@end
