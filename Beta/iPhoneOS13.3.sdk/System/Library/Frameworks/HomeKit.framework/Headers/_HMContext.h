/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMDelegateCaller, HMFMessageDispatcher, HMPendingRequests, HMXPCClient, NSString;

@protocol OS_dispatch_queue;

@interface _HMContext : NSObject

{
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    HMPendingRequests *_pendingRequests;
    HMDelegateCaller *_delegateCaller;
    HMFMessageDispatcher *_messageDispatcher;
}

@property (copy, readonly) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HMPendingRequests *pendingRequests;
@property (nonatomic, readonly) HMDelegateCaller *delegateCaller;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) HMXPCClient *messageTransport;

+ (id)contextWithName:(id)arg1;
+ (id)contextWithName:(id)arg1 delegateCaller:(id)arg2;

- (id)init;
- (id)subcontextWithName:(id)arg1;
- (id)initWithName:(id)arg1 pendingRequests:(id)arg2 delegateCaller:(id)arg3 messageDispatcher:(id)arg4;

@end
